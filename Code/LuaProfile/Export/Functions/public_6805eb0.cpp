#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_6805eb0);

#define public_6805ec8 _public_6805ec8

PROC_DECLARE(0x6805eb0, internal_6805eb0, public_6805eb0);
extern "C" NAKED register_t __cdecl internal_6805eb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6801cf0
        add esp, 4
        test eax, eax
        jne public_6805ec8
        fld qword ptr ss : [esp+0xC]
        pop esi
        ret 
        public_6805ec8 : nop
        push esi
        call public_6805e70
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805eb0)
    }
}

#undef public_6805ec8
