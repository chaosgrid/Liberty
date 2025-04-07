#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_631f57f _public_631f57f
#define public_631f587 _public_631f587
#define public_631f594 _public_631f594

PROC_DECLARE(0x631f550, internal_631f550, public_631f550);
extern "C" NAKED register_t __cdecl internal_631f550()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_64018ec
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_631f57f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f57f
        lea eax, ss:[esp]
        jmp public_631f587
        public_631f57f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_631f587 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_631f594
        mov eax, dword ptr ds : [eax+0x2C]
        add esp, 8
        ret 
        public_631f594 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f550)
    }
}

#undef public_631f57f
#undef public_631f587
#undef public_631f594
