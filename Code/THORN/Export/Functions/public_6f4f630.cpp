#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);

#define public_6f4f648 _public_6f4f648

PROC_DECLARE(0x6f4f630, internal_6f4f630, public_6f4f630);
extern "C" NAKED register_t __cdecl internal_6f4f630()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b090
        add esp, 4
        test eax, eax
        jne public_6f4f648
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        ret 
        public_6f4f648 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6f4f5e0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f630)
    }
}

#undef public_6f4f648
