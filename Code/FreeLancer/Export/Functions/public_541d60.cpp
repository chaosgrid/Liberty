#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5420a0);
CLANG_FORWARD_PROC_SYMBOL(public_542330);

#define public_541d8c _public_541d8c
#define public_541d92 _public_541d92
#define public_541dc0 _public_541dc0
#define public_541dc2 _public_541dc2
#define public_541dd9 _public_541dd9
#define public_541dde _public_541dde
#define public_541de0 _public_541de0
#define public_541dff _public_541dff
#define public_541e05 _public_541e05
#define public_541e33 _public_541e33
#define public_541e35 _public_541e35
#define public_541e4c _public_541e4c
#define public_541e51 _public_541e51
#define public_541e53 _public_541e53
#define public_541e72 _public_541e72
#define public_541e78 _public_541e78
#define public_541ea6 _public_541ea6
#define public_541ea8 _public_541ea8
#define public_541ebf _public_541ebf
#define public_541ec4 _public_541ec4
#define public_541ec6 _public_541ec6
#define public_541ee5 _public_541ee5
#define public_541ef0 _public_541ef0
#define public_541f1e _public_541f1e
#define public_541f20 _public_541f20
#define public_541f37 _public_541f37
#define public_541f3c _public_541f3c
#define public_541f3e _public_541f3e
#define public_541f5d _public_541f5d
#define public_541f63 _public_541f63
#define public_541f91 _public_541f91
#define public_541f93 _public_541f93
#define public_541faa _public_541faa
#define public_541faf _public_541faf
#define public_541fb1 _public_541fb1
#define public_541fd0 _public_541fd0
#define public_541fd6 _public_541fd6
#define public_542004 _public_542004
#define public_542006 _public_542006
#define public_54201d _public_54201d
#define public_542022 _public_542022
#define public_542024 _public_542024
#define public_542047 _public_542047
#define public_54206a _public_54206a
#define public_54208d _public_54208d

PROC_DECLARE(0x541d60, internal_541d60, public_541d60);
extern "C" NAKED register_t __cdecl internal_541d60()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [esi+8]
        xor ebp, ebp
        xor eax, eax
        test ebx, 0x7F0000
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_541de0
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541d8c
        cmp eax, offset public_678aa8
        jne public_541dde
        public_541d8c : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        public_541d92 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678aa8
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_541dd9
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_541dc0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_541dc2
        public_541dc0 : nop
        xor eax, eax
        public_541dc2 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541d92
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678aa8
        jmp public_541dde
        public_541dd9 : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_541dde : nop
        mov eax, edi
        public_541de0 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, 0xFDFF
        je public_541e53
        cmp eax, ebp
        jne public_541e53
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541dff
        cmp eax, offset public_678ab4
        jne public_541e51
        public_541dff : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        public_541e05 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678ab4
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_541e4c
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_541e33
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_541e35
        public_541e33 : nop
        xor eax, eax
        public_541e35 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541e05
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678ab4
        jmp public_541e51
        public_541e4c : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_541e51 : nop
        mov eax, edi
        public_541e53 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, 0x10000000
        je public_541ec6
        cmp eax, ebp
        jne public_541ec6
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541e72
        cmp eax, offset public_678a60
        jne public_541ec4
        public_541e72 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        public_541e78 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678a60
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_541ebf
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_541ea6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_541ea8
        public_541ea6 : nop
        xor eax, eax
        public_541ea8 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541e78
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678a60
        jmp public_541ec4
        public_541ebf : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_541ec4 : nop
        mov eax, edi
        public_541ec6 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, 0x20000000
        je public_541f3e
        cmp eax, ebp
        jne public_541f3e
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541ee5
        cmp eax, offset public_678a48
        jne public_541f3c
        public_541ee5 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        nop 
        lea esp, ss:[esp]
        public_541ef0 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678a48
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_541f37
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_541f1e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_541f20
        public_541f1e : nop
        xor eax, eax
        public_541f20 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541ef0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678a48
        jmp public_541f3c
        public_541f37 : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_541f3c : nop
        mov eax, edi
        public_541f3e : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, 0x40000000
        je public_541fb1
        cmp eax, ebp
        jne public_541fb1
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541f5d
        cmp eax, offset public_678a3c
        jne public_541faf
        public_541f5d : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        public_541f63 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678a3c
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_541faa
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_541f91
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_541f93
        public_541f91 : nop
        xor eax, eax
        public_541f93 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541f63
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678a3c
        jmp public_541faf
        public_541faa : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_541faf : nop
        mov eax, edi
        public_541fb1 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, 0x1000000
        je public_542024
        cmp eax, ebp
        jne public_542024
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, ebp
        je public_541fd0
        cmp eax, offset public_678a9c
        jne public_542022
        public_541fd0 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        public_541fd6 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_678a9c
        call public_542330
        mov edi, eax
        cmp edi, ebp
        je public_54201d
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebp
        je public_542004
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_542006
        public_542004 : nop
        xor eax, eax
        public_542006 : nop
        test dword ptr ds : [eax+0xE0], ebx
        je public_541fd6
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], offset public_678a9c
        jmp public_542022
        public_54201d : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        public_542022 : nop
        mov eax, edi
        public_542024 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x4000000
        je public_542047
        cmp eax, ebp
        jne public_542047
        lea eax, ds:[esi+4]
        push eax
        push esi
/*FIXUP push offset public_678a84 @0x542038*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678a84
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_5420a0
        public_542047 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x8000000
        je public_54206a
        cmp eax, ebp
        jne public_54206a
        lea edx, ds:[esi+4]
        push edx
        push esi
/*FIXUP push offset public_678a78 @0x54205b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678a78
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_5420a0
        public_54206a : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, 0x2000000
        je public_54208d
        cmp eax, ebp
        jne public_54208d
        lea eax, ds:[esi+4]
        push eax
        push esi
/*FIXUP push offset public_678a90 @0x54207e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678a90
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_5420a0
        public_54208d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x541d60)
    }
}

#undef public_541d8c
#undef public_541d92
#undef public_541dc0
#undef public_541dc2
#undef public_541dd9
#undef public_541dde
#undef public_541de0
#undef public_541dff
#undef public_541e05
#undef public_541e33
#undef public_541e35
#undef public_541e4c
#undef public_541e51
#undef public_541e53
#undef public_541e72
#undef public_541e78
#undef public_541ea6
#undef public_541ea8
#undef public_541ebf
#undef public_541ec4
#undef public_541ec6
#undef public_541ee5
#undef public_541ef0
#undef public_541f1e
#undef public_541f20
#undef public_541f37
#undef public_541f3c
#undef public_541f3e
#undef public_541f5d
#undef public_541f63
#undef public_541f91
#undef public_541f93
#undef public_541faa
#undef public_541faf
#undef public_541fb1
#undef public_541fd0
#undef public_541fd6
#undef public_542004
#undef public_542006
#undef public_54201d
#undef public_542022
#undef public_542024
#undef public_542047
#undef public_54206a
#undef public_54208d
