#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_68020b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6802190);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);

#define public_6805e19 _public_6805e19
#define public_6805e2c _public_6805e2c

PROC_DECLARE(0x6805df0, internal_6805df0, public_6805df0);
extern "C" NAKED register_t __cdecl internal_6805df0()
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
        call public_68020b0
        add esp, 8
        test eax, eax
        jne public_6805e19
/*FIXUP push offset public_680d898 @0x6805e0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d898
        push edi
        call public_6805d80
        add esp, 8
        public_6805e19 : nop
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6805e2c
        push esi
        call public_6802190
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6805e2c : nop
        push esi
        call public_6802140
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805df0)
    }
}

#undef public_6805e19
#undef public_6805e2c
