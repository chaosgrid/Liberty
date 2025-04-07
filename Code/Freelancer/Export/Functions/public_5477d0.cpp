#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

#define public_547804 _public_547804
#define public_547806 _public_547806
#define public_547833 _public_547833
#define public_547835 _public_547835
#define public_547843 _public_547843

PROC_DECLARE(0x5477d0, internal_5477d0, public_5477d0);
extern "C" NAKED register_t __cdecl internal_5477d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x303
        mov esi, ecx
        call public_539bc0
        test esi, esi
        je public_547804
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_547804
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_547804
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_547806
        public_547804 : nop
        xor ecx, ecx
        public_547806 : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        test esi, esi
        je public_547843
        lea eax, ds:[esi+0xC]
        test eax, eax
        lea edx, ds:[esi+0xAC]
        je public_547833
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_547833
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_547835
        public_547833 : nop
        xor ecx, ecx
        public_547835 : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0xC4]
        public_547843 : nop
        xor edx, edx
        jmp public_547833
        UNREACHABLE_TRAP(0x5477d0)
    }
}

#undef public_547804
#undef public_547806
#undef public_547833
#undef public_547835
#undef public_547843
