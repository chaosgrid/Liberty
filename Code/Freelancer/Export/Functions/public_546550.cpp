#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_546584 _public_546584
#define public_546586 _public_546586
#define public_5465b3 _public_5465b3
#define public_5465b5 _public_5465b5
#define public_5465c3 _public_5465c3

PROC_DECLARE(0x546550, internal_546550, public_546550);
extern "C" NAKED register_t __cdecl internal_546550()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x503
        mov esi, ecx
        call public_539bc0
        test esi, esi
        je public_546584
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_546584
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_546584
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_546586
        public_546584 : nop
        xor ecx, ecx
        public_546586 : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        test esi, esi
        je public_5465c3
        lea eax, ds:[esi+0xC]
        test eax, eax
        lea edx, ds:[esi+0xAC]
        je public_5465b3
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_5465b3
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_5465b5
        public_5465b3 : nop
        xor ecx, ecx
        public_5465b5 : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0xC4]
        public_5465c3 : nop
        xor edx, edx
        jmp public_5465b3
        UNREACHABLE_TRAP(0x546550)
    }
}

#undef public_546584
#undef public_546586
#undef public_5465b3
#undef public_5465b5
#undef public_5465c3
