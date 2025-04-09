#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);

#define public_420f8a _public_420f8a

PROC_DECLARE(0x420f70, internal_420f70, public_420f70);
extern "C" NAKED register_t __cdecl internal_420f70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_420f8a
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        public_420f8a : nop
        lea eax, ds:[esi+8]
        push eax
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        call public_41b030
        add esi, 0xC
        push esi
        call public_41b030
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x420f70)
    }
}

#undef public_420f8a
