#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806870);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6808e10);

#define public_6808e3e _public_6808e3e

PROC_DECLARE(0x6808e10, internal_6808e10, public_6808e10);
extern "C" NAKED register_t __cdecl internal_6808e10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        jle public_6808e3e
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, esi
        neg eax
        push eax
        push ecx
        push 0x1D
        push edi
        call public_6806ed0
        mov edx, dword ptr ds : [edi+8]
        push esi
        push edx
        call public_6806870
        add esp, 0x18
        pop edi
        public_6808e3e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808e10)
    }
}

#undef public_6808e3e
