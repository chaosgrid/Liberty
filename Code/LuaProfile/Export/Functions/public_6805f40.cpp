#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

#define public_6805f63 _public_6805f63

PROC_DECLARE(0x6805f40, internal_6805f40, public_6805f40);
extern "C" NAKED register_t __cdecl internal_6805f40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6801cf0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6805f63
/*FIXUP push offset public_680d8dc @0x6805f55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8dc
        push edi
        call public_6805d80
        add esp, 8
        public_6805f63 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805f40)
    }
}

#undef public_6805f63
