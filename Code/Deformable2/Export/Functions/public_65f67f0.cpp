#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f17d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f17e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f67f0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f680f _public_65f680f
#define public_65f681c _public_65f681c
#define public_65f6850 _public_65f6850
#define public_65f6854 _public_65f6854
#define public_65f6856 _public_65f6856
#define public_65f6866 _public_65f6866
#define public_65f6884 _public_65f6884
#define public_65f6894 _public_65f6894
#define public_65f68a3 _public_65f68a3
#define public_65f68b3 _public_65f68b3
#define public_65f68b5 _public_65f68b5

PROC_DECLARE(0x65f67f0, internal_65f67f0, public_65f67f0);
extern "C" NAKED register_t __cdecl internal_65f67f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp ecx, edi
        je public_65f681c
        test ecx, ecx
        je public_65f680f
        call public_65f17e0
        mov dword ptr ds : [esi], 0
        public_65f680f : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_65f681c
        mov ecx, edi
        call public_65f17d0
        public_65f681c : nop
        mov edi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edi*4+4]
        push eax
        mov dword ptr ds : [esi+0xC], edi
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f6854
        mov dword ptr ds : [eax], edi
        lea edx, ds:[eax+4]
        lea eax, ds:[edi-1]
        test eax, eax
        jl public_65f6850
        lea ecx, ds:[eax+1]
        xor eax, eax
        mov edi, edx
        rep stosd
        lea esp, ss:[esp]
        public_65f6850 : nop
        mov eax, edx
        jmp public_65f6856
        public_65f6854 : nop
        xor eax, eax
        public_65f6856 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        xor ebp, ebp
        xor edi, edi
        test eax, eax
        jle public_65f68b3
        public_65f6866 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+edi*4]
        mov dword ptr ds : [ecx+edi*4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        jle public_65f6884
        mov ebx, eax
        public_65f6884 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp eax, ebp
        jle public_65f6894
        mov ebp, eax
        public_65f6894 : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        cmp edi, eax
        jl public_65f6866
        test ebx, ebx
        jle public_65f68a3
        mov dword ptr ds : [esi+0x20], ebx
        public_65f68a3 : nop
        test ebp, ebp
        mov al, 1
        jle public_65f68b5
        pop edi
        mov dword ptr ds : [esi+0x2C], ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65f68b3 : nop
        mov al, 1
        public_65f68b5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65f67f0)
    }
}

#undef public_65f680f
#undef public_65f681c
#undef public_65f6850
#undef public_65f6854
#undef public_65f6856
#undef public_65f6866
#undef public_65f6884
#undef public_65f6894
#undef public_65f68a3
#undef public_65f68b3
#undef public_65f68b5
