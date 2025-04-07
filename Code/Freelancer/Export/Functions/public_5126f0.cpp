#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5126f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_512744 _public_512744
#define public_512746 _public_512746
#define public_51274e _public_51274e
#define public_512761 _public_512761
#define public_51276e _public_51276e
#define public_512790 _public_512790
#define public_5127a7 _public_5127a7
#define public_5127b1 _public_5127b1
#define public_5127c0 _public_5127c0
#define public_5127d7 _public_5127d7
#define public_5127dd _public_5127dd
#define public_512800 _public_512800
#define public_512817 _public_512817
#define public_512821 _public_512821
#define public_51285d _public_51285d
#define public_51288a _public_51288a
#define public_5128c0 _public_5128c0
#define public_5128d7 _public_5128d7
#define public_5128e1 _public_5128e1
#define public_512903 _public_512903
#define public_512916 _public_512916
#define public_51291c _public_51291c
#define public_512925 _public_512925
#define public_51293b _public_51293b
#define public_512951 _public_512951
#define public_512970 _public_512970
#define public_512987 _public_512987
#define public_512991 _public_512991
#define public_5129a0 _public_5129a0
#define public_5129bd _public_5129bd
#define public_5129c8 _public_5129c8
#define public_5129e2 _public_5129e2
#define public_5129e5 _public_5129e5

PROC_DECLARE(0x5126f0, internal_5126f0, public_5126f0);
extern "C" NAKED register_t __cdecl internal_5126f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_51288a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_512744
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_512746
        public_512744 : nop
        mov ecx, esi
        public_512746 : nop
        test ebp, ebp
        jne public_51274e
        xor edx, edx
        jmp public_512761
        public_51274e : nop
        sub ebx, ebp
        mov eax, 0x2E8BA2E9
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_512761 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_51276e
        xor eax, eax
        public_51276e : nop
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_5127b1
        nop 
        lea esp, ss:[esp]
        public_512790 : nop
        test edx, edx
        je public_5127a7
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_5127a7 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_512790
        public_5127b1 : nop
        test esi, esi
        mov eax, edx
        jbe public_5127dd
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_5127c0 : nop
        test eax, eax
        je public_5127d7
        mov ecx, 0xB
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_5127d7 : nop
        add eax, 0x2C
        dec ebx
        jne public_5127c0
        public_5127dd : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x2C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_512821
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_512800 : nop
        test ebx, ebx
        je public_512817
        mov ecx, 0xB
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_512817 : nop
        add eax, 0x2C
        add ebx, 0x2C
        cmp eax, ebp
        jne public_512800
        public_512821 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x2C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_51285d
        xor edx, edx
        mov edx, esi
        imul edx, 0x2C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_51285d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x2C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_51288a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_512951
        mov ecx, esi
        imul ecx, 0x2C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_5128e1
        mov edx, eax
        sub edx, ecx
        nop 
        public_5128c0 : nop
        test eax, eax
        je public_5128d7
        mov ecx, 0xB
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_5128d7 : nop
        add edx, 0x2C
        add eax, 0x2C
        cmp edx, ebx
        jne public_5128c0
        public_5128e1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_51291c
        mov eax, esi
        public_512903 : nop
        test ebx, ebx
        je public_512916
        mov ecx, 0xB
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_512916 : nop
        add ebx, 0x2C
        dec eax
        jne public_512903
        public_51291c : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_51293b
        public_512925 : nop
        mov edi, eax
        add eax, 0x2C
        cmp eax, ebx
        mov ecx, 0xB
        mov esi, edx
        rep movsd
        jne public_512925
        mov edi, dword ptr ss : [esp+0x10]
        public_51293b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_512951 : nop
        test esi, esi
        jbe public_5129e5
        imul esi, 0x2C
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_512991
        lea ebx, ds:[ebx]
        public_512970 : nop
        test edx, edx
        je public_512987
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_512987 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_512970
        public_512991 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_5129bd
        lea esp, ss:[esp]
        public_5129a0 : nop
        sub eax, 0x2C
        sub ebx, 0x2C
        cmp eax, ebp
        mov ecx, 0xB
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_5129a0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_5129bd : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_5129e2
        mov edx, dword ptr ss : [esp+0x28]
        public_5129c8 : nop
        mov edi, ebp
        add ebp, 0x2C
        cmp ebp, eax
        mov ecx, 0xB
        mov esi, edx
        rep movsd
        jne public_5129c8
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_5129e2 : nop
        add dword ptr ds : [edi+8], esi
        public_5129e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5126f0)
    }
}

#undef public_512744
#undef public_512746
#undef public_51274e
#undef public_512761
#undef public_51276e
#undef public_512790
#undef public_5127a7
#undef public_5127b1
#undef public_5127c0
#undef public_5127d7
#undef public_5127dd
#undef public_512800
#undef public_512817
#undef public_512821
#undef public_51285d
#undef public_51288a
#undef public_5128c0
#undef public_5128d7
#undef public_5128e1
#undef public_512903
#undef public_512916
#undef public_51291c
#undef public_512925
#undef public_51293b
#undef public_512951
#undef public_512970
#undef public_512987
#undef public_512991
#undef public_5129a0
#undef public_5129bd
#undef public_5129c8
#undef public_5129e2
#undef public_5129e5
