#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22880);

#define public_6f3497b _public_6f3497b

PROC_DECLARE(0x6f34950, internal_6f34950, public_6f34950);
extern "C" NAKED register_t __cdecl internal_6f34950()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6f3497b
        call public_6f224f0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jbe public_6f3497b
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f22880
        pop esi
        ret 0xC
        public_6f3497b : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f34950)
    }
}

#undef public_6f3497b
