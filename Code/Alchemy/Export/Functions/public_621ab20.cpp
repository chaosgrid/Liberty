#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_621ab6b _public_621ab6b
#define public_621abfd _public_621abfd

PROC_DECLARE(0x621ab20, internal_621ab20, public_621ab20);
extern "C" NAKED register_t __cdecl internal_621ab20()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        push ebx
        push esi
        mov ecx, dword ptr ds : [eax+4]
        push edi
        lea edi, ds:[eax+4]
        lea ebx, ds:[edi+0xCC]
        push ebx
        push edx
        push edi
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_6257a2c]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0
        jne public_621ab6b
        call public_623e830
        mov dword ptr ds : [public_6257a2c], eax
        public_621ab6b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x1C]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        lea esi, ds:[edi+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
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
        jne public_621abfd
        call public_623e830
        mov dword ptr ds : [public_6257a2c], eax
        public_621abfd : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        lea edx, ds:[edi+0xB4]
        add edi, 0xC0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_624d160]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_624d160]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_624d160]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x621ab20)
    }
}

#undef public_621ab6b
#undef public_621abfd
