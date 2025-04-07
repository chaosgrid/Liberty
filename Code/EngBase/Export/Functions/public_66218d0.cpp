#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_661f300);
CLANG_FORWARD_PROC_SYMBOL(public_661f310);
CLANG_FORWARD_PROC_SYMBOL(public_661f330);

#define public_662191c _public_662191c
#define public_6621920 _public_6621920
#define public_6621927 _public_6621927
#define public_6621984 _public_6621984
#define public_662199d _public_662199d
#define public_66219a0 _public_66219a0

PROC_DECLARE(0x66218d0, internal_66218d0, public_66218d0);
extern "C" NAKED register_t __cdecl internal_66218d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, 0xFFFFFFFF
        push edi
        je public_66219a0
        test esi, esi
        je public_66219a0
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], ebx
        test edi, edi
        jne public_6621920
        mov eax, ebx
        push 0x48
        or al, 2
        mov dword ptr ds : [esi], eax
        call public_661f2f0
        add esp, 4
        test eax, eax
        je public_662191c
        mov ecx, eax
        call public_661f310
        mov edi, eax
        jmp public_6621927
        public_662191c : nop
        xor edi, edi
        jmp public_6621927
        public_6621920 : nop
        mov ecx, ebx
        and ecx, 0xFFFFFFFD
        mov dword ptr ds : [esi], ecx
        public_6621927 : nop
        cmp edi, ebp
        je public_66219a0
        mov edx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [edx]
        test ebp, ebp
        je public_6621984
        mov eax, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [edi]
        push esi
        push ebp
        call dword ptr ds : [eax+0x20]
        push eax
        push esi
        push edi
        call dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x14]
        lea eax, ss:[esp+0x28]
        push edx
        push eax
        push esi
        push ebp
        call dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push eax
        push esi
        push edi
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [edi]
        push eax
        push esi
        push edi
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [eax+8]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6621984 : nop
        test bl, 2
        je public_662199d
        test ebp, ebp
        je public_662199d
        mov ecx, ebp
        call public_661f330
        push ebp
        call public_661f300
        add esp, 4
        public_662199d : nop
        mov dword ptr ds : [esi+4], edi
        public_66219a0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x66218d0)
    }
}

#undef public_662191c
#undef public_6621920
#undef public_6621927
#undef public_6621984
#undef public_662199d
#undef public_66219a0
