#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266290);
CLANG_FORWARD_PROC_SYMBOL(public_6271360);
CLANG_FORWARD_PROC_SYMBOL(public_62be310);
CLANG_FORWARD_PROC_SYMBOL(public_62df7a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fa980);
CLANG_FORWARD_PROC_SYMBOL(public_6301170);
CLANG_FORWARD_PROC_SYMBOL(public_630c080);
CLANG_FORWARD_PROC_SYMBOL(public_6311ab0);
CLANG_FORWARD_PROC_SYMBOL(public_631cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_631e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_633bd80);
CLANG_FORWARD_PROC_SYMBOL(public_6341bb0);

#define public_630989f _public_630989f

PROC_DECLARE(0x6309850, internal_6309850, public_6309850);
extern "C" NAKED register_t __cdecl internal_6309850()
{
    __asm
    {
        dec dword ptr ds : [public_63fcee8]
        jne public_630989f
        call public_62df7a0
        call public_6311ab0
        call public_62fa980
        call public_630c080
        call public_6301170
        call public_6271360
        call public_631cbe0
        call public_6266290
        call public_633bd80
        call public_631e8e0
        call public_62be310
        call public_6341bb0
        mov ecx, dword ptr ds : [public_63ed464]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x14]
        public_630989f : nop
        ret 
        UNREACHABLE_TRAP(0x6309850)
    }
}

#undef public_630989f
