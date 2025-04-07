#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5366a0);

#define public_5366c8 _public_5366c8
#define public_5366ca _public_5366ca
#define public_53678c _public_53678c
#define public_5367b0 _public_5367b0
#define public_5367ed _public_5367ed

PROC_DECLARE(0x5366a0, internal_5366a0, public_5366a0);
extern "C" NAKED register_t __cdecl internal_5366a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x24
        test eax, eax
        push ebx
        push esi
        push edi
        mov ebx, ecx
        je public_5366c8
        add eax, 0xC
        test eax, eax
        je public_5366c8
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_5366c8
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 1
        cmp al, 1
        je public_5366ca
        public_5366c8 : nop
        xor esi, esi
        public_5366ca : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x1C]
        lea edi, ds:[ebx+0x10]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi+8]
        fld dword ptr ds : [ecx+4]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_5367ed
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi+8]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_53678c
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jmp public_5367b0
        public_53678c : nop
        lea edx, ss:[esp+0x24]
        fstp st(0)
        push edx
        call dword ptr ds : [public_5c681c]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        public_5367b0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        je public_5367ed
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        call dword ptr ds : [public_5c69bc]
        add esp, 0xC
        public_5367ed : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x5366a0)
    }
}

#undef public_5366c8
#undef public_5366ca
#undef public_53678c
#undef public_5367b0
#undef public_5367ed
