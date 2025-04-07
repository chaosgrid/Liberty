#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_6219fd7 _public_6219fd7
#define public_621a069 _public_621a069

PROC_DECLARE(0x6219f90, internal_6219f90, public_6219f90);
extern "C" NAKED register_t __cdecl internal_6219f90()
{
    __asm
    {
        sub esp, 0x18
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        lea ebx, ds:[edi+0xCC]
        push ebx
        push ecx
        push edi
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [public_6257a2c]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0
        jne public_6219fd7
        call public_623e830
        mov dword ptr ds : [public_6257a2c], eax
        public_6219fd7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        lea esi, ds:[edi+0xA8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_624bac4]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_6257a2c]
        test eax, eax
        jne public_621a069
        call public_623e830
        mov dword ptr ds : [public_6257a2c], eax
        public_621a069 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x10]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        lea eax, ds:[edi+0xB4]
        add edi, 0xC0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_624d160]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_624d160]
        mov edx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_624d160]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], eax
        xor eax, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6219f90)
    }
}

#undef public_6219fd7
#undef public_621a069
