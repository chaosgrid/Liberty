#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebb620);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);

#define public_6ecd4e0 _public_6ecd4e0

PROC_DECLARE(0x6ecd4c0, internal_6ecd4c0, public_6ecd4c0);
extern "C" NAKED register_t __cdecl internal_6ecd4c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x10]
        push eax
        call public_6f15710
        test eax, eax
        je public_6ecd4e0
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6ebb620
        public_6ecd4e0 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ecd4c0)
    }
}

#undef public_6ecd4e0
