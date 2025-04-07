#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a20);

#define public_6f3520b _public_6f3520b

PROC_DECLARE(0x6f351e0, internal_6f351e0, public_6f351e0);
extern "C" NAKED register_t __cdecl internal_6f351e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6f3520b
        call public_6f224f0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jbe public_6f3520b
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f22a20
        pop esi
        ret 0xC
        public_6f3520b : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f351e0)
    }
}

#undef public_6f3520b
