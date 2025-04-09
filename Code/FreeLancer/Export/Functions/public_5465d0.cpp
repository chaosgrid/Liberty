#include "FreeLancer-PCH.h"


#define public_546619 _public_546619
#define public_54661b _public_54661b

PROC_DECLARE(0x5465d0, internal_5465d0, public_5465d0);
extern "C" NAKED register_t __cdecl internal_5465d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push 0x503
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c67ec]
        add esp, 8
        lea edi, ds:[esi+0xC]
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c67e8]
        test edi, edi
        lea eax, ds:[esi+0xAC]
        je public_546619
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_546619
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_54661b
        public_546619 : nop
        xor ecx, ecx
        public_54661b : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC4]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        pop edi
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5465d0)
    }
}

#undef public_546619
#undef public_54661b
