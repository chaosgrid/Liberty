#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d505a0);

#define public_6cf120a _public_6cf120a

PROC_DECLARE(0x6cf11c0, internal_6cf11c0, public_6cf11c0);
extern "C" NAKED register_t __cdecl internal_6cf11c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jbe public_6cf120a
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6cf120a
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6cf120a
        mov eax, dword ptr ss : [esp+0xC]
        imul ecx, 0x418
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ds:[ecx+edx-0x418]
        call public_6d505a0
        public_6cf120a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6cf11c0)
    }
}

#undef public_6cf120a
