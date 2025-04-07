#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62c1490);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62c14dd _public_62c14dd
#define public_62c1508 _public_62c1508
#define public_62c151e _public_62c151e
#define public_62c1520 _public_62c1520
#define public_62c158d _public_62c158d
#define public_62c1599 _public_62c1599
#define public_62c159b _public_62c159b
#define public_62c15c6 _public_62c15c6
#define public_62c15c8 _public_62c15c8
#define public_62c15e5 _public_62c15e5
#define public_62c15e7 _public_62c15e7
#define public_62c1601 _public_62c1601
#define public_62c163b _public_62c163b
#define public_62c163d _public_62c163d

PROC_DECLARE(0x62c1490, internal_62c1490, public_62c1490);
extern "C" NAKED register_t __cdecl internal_62c1490()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x97]
        test al, al
        je public_62c1508
        mov ecx, dword ptr ds : [esi+0x5C]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x96]
        mov dword ptr ds : [esi+0x90], 2
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x130]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_62c14dd
        mov dword ptr ds : [esi+0x90], 3
        public_62c14dd : nop
        fld dword ptr ds : [public_639f410]
        fdiv dword ptr ds : [public_639f3cc]
        mov dword ptr ds : [esi+0xEC], 0x3F800000
        mov dword ptr ds : [esi+0xE8], 0x40400000
        fstp dword ptr ds : [esi+0xF0]
        jmp public_62c158d
        public_62c1508 : nop
        mov dword ptr ds : [esi+0x90], 1
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c151e
        lea ecx, ds:[eax-8]
        jmp public_62c1520
        public_62c151e : nop
        xor ecx, ecx
        public_62c1520 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov ecx, 0x5F3759DF
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+4], ecx
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fxch 
        fdiv dword ptr ds : [public_639f3cc]
        fmulp 
        fmul dword ptr ss : [esp+4]
        fst dword ptr ds : [esi+0xF0]
        fstp dword ptr ds : [esi+0xEC]
        public_62c158d : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c1599
        lea ecx, ds:[eax-8]
        jmp public_62c159b
        public_62c1599 : nop
        xor ecx, ecx
        public_62c159b : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x150]
        mov edi, eax
        push 0
        mov ecx, edi
        call public_62ad540
        test edi, edi
        je public_62c15c6
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_62c15c6
        mov ecx, edi
        jmp public_62c15c8
        public_62c15c6 : nop
        xor ecx, ecx
        public_62c15c8 : nop
        push 3
        call public_62ac2e0
        push edi
        push esi
        call public_6285cb0
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 8
        test eax, eax
        je public_62c15e5
        lea ecx, ds:[eax-8]
        jmp public_62c15e7
        public_62c15e5 : nop
        xor ecx, ecx
        public_62c15e7 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fc504]
        test eax, eax
        jne public_62c1601
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c1601 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xD8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        pop edi
        je public_62c163b
        lea ecx, ds:[eax-8]
        jmp public_62c163d
        public_62c163b : nop
        xor ecx, ecx
        public_62c163d : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esi, 0xCC
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        mov al, 1
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62c1490)
    }
}

#undef public_62c14dd
#undef public_62c1508
#undef public_62c151e
#undef public_62c1520
#undef public_62c158d
#undef public_62c1599
#undef public_62c159b
#undef public_62c15c6
#undef public_62c15c8
#undef public_62c15e5
#undef public_62c15e7
#undef public_62c1601
#undef public_62c163b
#undef public_62c163d
