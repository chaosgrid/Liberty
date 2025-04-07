#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_638e6d0);

#define public_638e6f6 _public_638e6f6
#define public_638e70b _public_638e70b
#define public_638e72f _public_638e72f
#define public_638e73d _public_638e73d
#define public_638e775 _public_638e775
#define public_638e77e _public_638e77e
#define public_638e785 _public_638e785
#define public_638e796 _public_638e796
#define public_638e7b7 _public_638e7b7
#define public_638e7be _public_638e7be
#define public_638e7d4 _public_638e7d4
#define public_638e7f6 _public_638e7f6
#define public_638e7ff _public_638e7ff
#define public_638e81e _public_638e81e

PROC_DECLARE(0x638e6d0, internal_638e6d0, public_638e6d0);
extern "C" NAKED register_t __cdecl internal_638e6d0()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [public_658b078], 4
        mov dword ptr ss : [esp], 0
        jl public_638e6f6
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa85c @0x638e6e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa85c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638e6f6 : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        je public_638e81e
        push ebp
        mov ebp, 0x600000
        public_638e70b : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638e785
        test dword ptr ds : [esi+0x50], 0x100000
        je public_638e77e
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_638e77e
        mov edi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edi, edi
        je public_638e77e
        public_638e72f : nop
        cmp edi, 2
        jne public_638e73d
        or dword ptr ds : [esi+0x50], 0x200000
        jmp public_638e775
        public_638e73d : nop
        test dword ptr ds : [edi+0x50], 0x100000
        je public_638e775
        mov ecx, dword ptr ds : [edi+0x3C]
        push esi
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_638e775
        push eax
        push 5
        push edi
        push esi
        call public_638cd80
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ss : [esp+0x20]
        or ecx, ebp
        add esp, 0x10
        inc eax
        mov dword ptr ds : [esi+0x50], ecx
        mov dword ptr ss : [esp+0x10], eax
        public_638e775 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_638e72f
        public_638e77e : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_638e70b
        public_638e785 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        pop ebp
        je public_638e81e
        mov esi, dword ptr ss : [esp+0x14]
        public_638e796 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638e7be
        mov eax, dword ptr ds : [esi+0x50]
        test eax, 0x200000
        je public_638e7b7
        test eax, 0x400000
        jne public_638e7b7
        push esi
        call public_638e540
        add esp, 4
        public_638e7b7 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_638e796
        public_638e7be : nop
        mov eax, dword ptr ds : [public_658b8f0]
        test eax, eax
        je public_638e7ff
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638e7ff
        public_638e7d4 : nop
        cmp dword ptr ds : [esi+0x10], 5
        jne public_638e7f6
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        add eax, 0x3C
        push eax
        call public_636e1b0
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_638e540
        add esp, 0xC
        public_638e7f6 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638e7d4
        public_638e7ff : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_638e81e
        mov edx, dword ptr ds : [public_658b7fc]
        push ebx
/*FIXUP push offset public_63fa82c @0x638e80f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa82c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638e81e : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638e6d0)
    }
}

#undef public_638e6f6
#undef public_638e70b
#undef public_638e72f
#undef public_638e73d
#undef public_638e775
#undef public_638e77e
#undef public_638e785
#undef public_638e796
#undef public_638e7b7
#undef public_638e7be
#undef public_638e7d4
#undef public_638e7f6
#undef public_638e7ff
#undef public_638e81e
