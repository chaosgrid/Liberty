#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);

#define public_6801c77 _public_6801c77

PROC_DECLARE(0x6801c50, internal_6801c50, public_6801c50);
extern "C" NAKED register_t __cdecl internal_6801c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+4]
        sar ecx, 4
        add edx, eax
        cmp ecx, edx
        jge public_6801c77
/*FIXUP push offset public_680d34c @0x6801c6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d34c
        call public_6802e00
        pop ecx
        public_6801c77 : nop
        ret 
        UNREACHABLE_TRAP(0x6801c50)
    }
}

#undef public_6801c77
