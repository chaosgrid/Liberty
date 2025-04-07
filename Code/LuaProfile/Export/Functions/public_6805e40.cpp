#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e40);

#define public_6805e58 _public_6805e58

PROC_DECLARE(0x6805e40, internal_6805e40, public_6805e40);
extern "C" NAKED register_t __cdecl internal_6805e40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6801cf0
        add esp, 4
        test eax, eax
        jne public_6805e58
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        ret 
        public_6805e58 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6805df0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805e40)
    }
}

#undef public_6805e58
