#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63706d0);

#define public_63706f5 _public_63706f5
#define public_63706fb _public_63706fb
#define public_6370712 _public_6370712
#define public_637072e _public_637072e
#define public_637073a _public_637073a
#define public_6370743 _public_6370743
#define public_6370755 _public_6370755
#define public_637075f _public_637075f
#define public_6370779 _public_6370779
#define public_637078f _public_637078f
#define public_6370796 _public_6370796
#define public_63707a4 _public_63707a4
#define public_63707cc _public_63707cc
#define public_63707ef _public_63707ef
#define public_63707fe _public_63707fe
#define public_637080e _public_637080e
#define public_637085e _public_637085e
#define public_637086b _public_637086b
#define public_637087b _public_637087b
#define public_6370889 _public_6370889
#define public_63708a5 _public_63708a5
#define public_63708fa _public_63708fa
#define public_6370903 _public_6370903
#define public_637090e _public_637090e

PROC_DECLARE(0x63706d0, internal_63706d0, public_63706d0);
extern "C" NAKED register_t __cdecl internal_63706d0()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 3
        push ebx
        push ebp
        push esi
        push edi
        jl public_63706f5
        mov eax, dword ptr ds : [public_658b7fc]
        mov ebp, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63ef54c @0x63706e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef54c
        push eax
        call ebp
        add esp, 8
        jmp public_63706fb
        public_63706f5 : nop
        mov ebp, dword ptr ds : [public_63991e8]
        public_63706fb : nop
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        je public_637087b
        mov esi, dword ptr ds : [public_658b840]
        test esi, esi
        je public_6370755
        public_6370712 : nop
        mov eax, dword ptr ds : [esi]
        xor edx, edx
        cmp eax, edx
        je public_6370755
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edx
        je public_6370743
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        cmp ecx, edx
        je public_6370743
        public_637072e : nop
        test dword ptr ds : [ecx+0x50], 0x400
        je public_637073a
        mov dword ptr ds : [eax-4], edx
        public_637073a : nop
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        cmp ecx, edx
        jne public_637072e
        public_6370743 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_636e370
        mov esi, dword ptr ds : [esi]
        add esp, 4
        test esi, esi
        jne public_6370712
        public_6370755 : nop
        mov edi, dword ptr ds : [public_658b81c]
        test edi, edi
        je public_6370796
        public_637075f : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6370796
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_637078f
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_637078f
        public_6370779 : nop
        add eax, 0xC
        push edi
        push eax
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_6370779
        public_637078f : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_637075f
        public_6370796 : nop
        mov ebp, dword ptr ds : [public_658b820]
        test ebp, ebp
        je public_637090e
        public_63707a4 : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 4
        je public_637090e
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        je public_637086b
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_637086b
        public_63707cc : nop
        mov edx, dword ptr ds : [esi+0x14]
        test edx, 0x18000000
        jne public_637085e
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        je public_637080e
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+4]
        add ecx, 4
        test eax, eax
        je public_637080e
        public_63707ef : nop
        test byte ptr ds : [eax+0x51], 4
        je public_63707fe
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63707ef
        public_63707fe : nop
        test eax, eax
        je public_637080e
        push ebp
        push edi
        call public_636e400
        add esp, 8
        jmp public_637085e
        public_637080e : nop
        or edx, 0x8000000
        push esi
/*FIXUP push offset public_658b900 @0x6370815*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], edx
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        cmp eax, 2
        jl public_637085e
        mov edx, dword ptr ss : [ebp+0x4C]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        and eax, 0xFFFFFF
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63ef518 @0x637084f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef518
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_637085e : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_63707cc
        public_637086b : nop
        mov ebp, dword ptr ss : [ebp+0x30]
        test ebp, ebp
        jne public_63707a4
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_637087b : nop
        mov ebx, dword ptr ds : [public_658b820]
        test ebx, ebx
        je public_637090e
        public_6370889 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        je public_637090e
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_6370903
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6370903
        public_63708a5 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, 0x18000000
        jne public_63708fa
        or eax, 0x8000000
        push esi
/*FIXUP push offset public_658b900 @0x63708b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], eax
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 8
        cmp eax, 2
        jl public_63708fa
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63ef518 @0x63708ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef518
        push eax
        call ebp
        add esp, 0x14
        public_63708fa : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_63708a5
        public_6370903 : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_6370889
        public_637090e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63706d0)
    }
}

#undef public_63706f5
#undef public_63706fb
#undef public_6370712
#undef public_637072e
#undef public_637073a
#undef public_6370743
#undef public_6370755
#undef public_637075f
#undef public_6370779
#undef public_637078f
#undef public_6370796
#undef public_63707a4
#undef public_63707cc
#undef public_63707ef
#undef public_63707fe
#undef public_637080e
#undef public_637085e
#undef public_637086b
#undef public_637087b
#undef public_6370889
#undef public_63708a5
#undef public_63708fa
#undef public_6370903
#undef public_637090e
