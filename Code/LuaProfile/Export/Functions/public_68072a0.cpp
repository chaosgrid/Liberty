#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806e90);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_68072e0);

#define public_68072c2 _public_68072c2

PROC_DECLARE(0x68072a0, internal_68072a0, public_68072a0);
extern "C" NAKED register_t __cdecl internal_68072a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], eax
        je public_68072c2
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        push esi
        call public_68072e0
        add esp, 0x10
        public_68072c2 : nop
        push esi
        call public_6806e90
        push esi
        call public_6806a20
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68072a0)
    }
}

#undef public_68072c2
