#!/usr/bin/python3
# -*- coding: utf-8 -*-
# struct holder

__AUTHOR__ = "TinySec"

__VERSION__ = "0.0.1"

import string

import sys

from argparse import ArgumentParser

from typing import Union, Mapping, Any

class Settings(object):

    def __init__(self):

        self.size = 0

        self.offset = 0

        self.align = 8

        return


    def load(self, args):

        if isinstance(args.size, str):
            if args.size.lower().startswith("0x"):
                if self.is_hex_str(args.size[2:]):
                    self.size = int(args.size[2:] , 16)
            else:
                self.size = int(args.size, 10)

        if 0 == self.size:
            self.size = 0x100


        if isinstance(args.offset, str):
            if args.offset.lower().startswith("0x"):
                if self.is_hex_str(args.offset[2:]):
                    self.offset = int(args.offset[2:] , 16)
            else:
                self.offset = int(args.offset, 10)
      
        if args.align is not None:
            self.align = args.align

        return

    def is_hex_str(self , text:str ):
        return set(text).issubset(string.hexdigits)

class Application(object):

    def __init__(self, settings: Settings):
    
        self.settings = settings
 
        return

   
    def run(self):

        self.make_struct()
        
        return
        
    def make_struct(self):

        offset = self.settings.offset

        index = 1

        print("\n")

        prefix = ''

        full = False

        if 0 == offset:
            full = True
            print("struct udt_size_{0:#0{1}x}_t".format(self.settings.size, 5))
            print("{")
            prefix = '\t'

        while offset < self.settings.size:

            comment = "// offset = {0:#0{1}x};".format(offset, 5)

            if 1 == self.settings.align:
                line = "UINT8 offset_{0:#0{1}x};".format(offset, 5)
            elif 2 == self.settings.align:
                line = "UINT16 offset_{0:#0{1}x};".format(offset, 5)
            elif 4 == self.settings.align:
                line = "UINT32 offset_{0:#0{1}x};".format(offset, 5)
            elif 8 == self.settings.align:
                line = "UINT64 offset_{0:#0{1}x};".format(offset, 5)
            else:
                line = "UINT_PTR field_{0:#0{1}x};".format(offset, 5)

            if ( 0 == (  ( offset + self.settings.align) % 16) ) \
                    and ( ( offset + self.settings.align ) != self.settings.size ):

                print( prefix + "{0}".format(comment))
                print( prefix + "{0}\n\n".format(line) )
            else:
                print( prefix + "{0}".format(comment))
                print( prefix + "{0}\n".format(line))

            offset = offset + self.settings.align

            index = index + 1

        if full:
            print("};")

        return


def provide_parser() -> ArgumentParser:
    parser = ArgumentParser(
        prog='rstruct.py',
        usage='rstruct.py --size=0x100 --offset=0',
        description='struct resverse holder.',
    )

    parser.add_argument(
        '-v',
        '--version',
        action='version',
        help='print version',
        version='version: {0}'.format(__VERSION__)
    )

    parser.add_argument(
        '-s',
        '--size',
        default=0x100,
        help='total size'
    )

    parser.add_argument(
        '-o',
        '--offset',
        default=0,
        help='start offset'
    )

    parser.add_argument(
        '-a',
        '--align',
        type=int,
        default=4,
        help='field align'
    )

    return parser


def main():
    settings = Settings()

    parser = provide_parser()

    if 1 == len(sys.argv):
        print(parser.print_help())
        return

    args = parser.parse_args()

    settings.load(args)
    
    app = Application(settings=settings)

    app.run()

    return


if __name__ == '__main__':
    main()
