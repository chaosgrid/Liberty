#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15560);
CLANG_FORWARD_PROC_SYMBOL(public_6f155f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f15630 _public_6f15630
#define public_6f15638 _public_6f15638
#define public_6f1564d _public_6f1564d
#define public_6f15662 _public_6f15662
#define public_6f1567d _public_6f1567d
#define public_6f15687 _public_6f15687
#define public_6f1569b _public_6f1569b

PROC_DECLARE(0x6f155f0, internal_6f155f0, public_6f155f0);
extern "C" NAKED register_t __cdecl internal_6f155f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        push ebx
        mov edi, ecx
        xor ebp, ebp
        call public_6f15560
        test eax, eax
        je public_6f1564d
        lea ebx, ds:[eax+0x38]
        lea esi, ds:[edi+0x184]
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6f15630
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f15630
        lea eax, ss:[esp+0x18]
        jmp public_6f15638
        public_6f15630 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6f15638 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x188]
        je public_6f1569b
        pop edi
        pop esi
        pop ebp
        add eax, 0x20
        pop ebx
        pop ecx
        ret 4
        public_6f1564d : nop
        mov eax, dword ptr ds : [edi+0xC8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1569b
        mov ebp, dword ptr ds : [public_6fb3294]
        add ebx, 4
        public_6f15662 : nop
        lea edx, ds:[esi+0x3F4]
        push ebx
        push edx
        call ebp
        add esp, 8
        test eax, eax
        je public_6f15687
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC8]
        jne public_6f15662
        public_6f1567d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_6f15687 : nop
        lea eax, ds:[esi+8]
        test eax, eax
        je public_6f1567d
        pop edi
        pop esi
        pop ebp
        add eax, 0x478
        pop ebx
        pop ecx
        ret 4
        public_6f1569b : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f155f0)
    }
}

#undef public_6f15630
#undef public_6f15638
#undef public_6f1564d
#undef public_6f15662
#undef public_6f1567d
#undef public_6f15687
#undef public_6f1569b
