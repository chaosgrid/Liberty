#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);

#define public_4f6a9f _public_4f6a9f

PROC_DECLARE(0x4f6a70, internal_4f6a70, public_4f6a70);
extern "C" NAKED register_t __cdecl internal_4f6a70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ds:[esi+0xC]
        push eax
        call public_41b030
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_4f6a9f
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        public_4f6a9f : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f6a70)
    }
}

#undef public_4f6a9f
