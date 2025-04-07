#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802070);
CLANG_FORWARD_PROC_SYMBOL(public_68020f0);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);

#define public_6805e99 _public_6805e99

PROC_DECLARE(0x6805e70, internal_6805e70, public_6805e70);
extern "C" NAKED register_t __cdecl internal_6805e70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6801cf0
        mov esi, eax
        push esi
        call public_6802070
        add esp, 8
        test eax, eax
        jne public_6805e99
/*FIXUP push offset public_680d8a8 @0x6805e8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8a8
        push edi
        call public_6805d80
        add esp, 8
        public_6805e99 : nop
        push esi
        call public_68020f0
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805e70)
    }
}

#undef public_6805e99
