#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327780);
CLANG_FORWARD_PROC_SYMBOL(public_63277d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63277aa _public_63277aa

PROC_DECLARE(0x6327780, internal_6327780, public_6327780);
extern "C" NAKED register_t __cdecl internal_6327780()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6401964]
        mov al, 1
        test al, cl
        jne public_63277aa
/*FIXUP push offset _public_63277d0 @0x632778c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63277d0
        push 0x100
        push 0x7C
        or cl, al
/*FIXUP push offset public_6401968 @0x632779a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6401968
        mov byte ptr ds : [public_6401964], cl
        call public_6391dfc
        public_63277aa : nop
        ret 
        UNREACHABLE_TRAP(0x6327780)
    }
}

#undef public_63277aa
