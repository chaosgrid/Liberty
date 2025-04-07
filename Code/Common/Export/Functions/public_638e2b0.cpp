#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638d910);
CLANG_FORWARD_PROC_SYMBOL(public_638e280);
CLANG_FORWARD_PROC_SYMBOL(public_638e2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391400);

#define public_638e2d4 _public_638e2d4
#define public_638e309 _public_638e309
#define public_638e335 _public_638e335
#define public_638e33f _public_638e33f
#define public_638e34e _public_638e34e
#define public_638e355 _public_638e355
#define public_638e35e _public_638e35e
#define public_638e371 _public_638e371
#define public_638e37d _public_638e37d
#define public_638e388 _public_638e388
#define public_638e3b5 _public_638e3b5
#define public_638e3c7 _public_638e3c7
#define public_638e3e1 _public_638e3e1
#define public_638e3fe _public_638e3fe
#define public_638e41d _public_638e41d

PROC_DECLARE(0x638e2b0, internal_638e2b0, public_638e2b0);
extern "C" NAKED register_t __cdecl internal_638e2b0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        inc edx
        test eax, eax
        push esi
        push edi
        mov dword ptr ds : [public_658b8e0], edx
        je public_638e388
        mov ebx, eax
        mov ebp, 0x2000000
        public_638e2d4 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_638e388
        mov eax, dword ptr ds : [public_658b8e0]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [ebx+0x48], eax
        mov eax, dword ptr ds : [ebx+0x3C]
        or ecx, 0x4000000
        test eax, eax
        mov dword ptr ds : [ebx+0x50], ecx
        je public_638e35e
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_638e35e
        public_638e309 : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], ecx
        je public_638e355
        push esi
        push ebx
        call public_6391400
        add esp, 8
        test eax, eax
        je public_638e355
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_638e355
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638e355
        public_638e335 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, esi
        jne public_638e33f
        mov edx, dword ptr ds : [eax+8]
        public_638e33f : nop
        cmp ebx, edx
        je public_638e34e
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638e335
        jmp public_638e355
        public_638e34e : nop
        or dword ptr ds : [eax+0xC], 0x4000000
        public_638e355 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638e309
        public_638e35e : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_638e37d
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638e37d
        public_638e371 : nop
        or dword ptr ds : [eax+0xC], ebp
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638e371
        public_638e37d : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_638e2d4
        public_638e388 : nop
        mov edx, dword ptr ds : [public_658b8f0]
        push edx
        call public_636ec10
        mov esi, eax
        mov eax, dword ptr ds : [public_658b014]
        add esp, 4
        test eax, eax
        je public_638e3b5
        mov eax, dword ptr ds : [public_658b8f0]
/*FIXUP push offset _public_638e280 @0x638e3a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_638e280
        push 4
        push esi
        add eax, 4
        push eax
        jmp public_638e3c7
        public_638e3b5 : nop
        mov ecx, dword ptr ds : [public_658b8f0]
/*FIXUP push offset _public_638d910 @0x638e3bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_638d910
        push 4
        push esi
        add ecx, 4
        push ecx
        public_638e3c7 : nop
        call dword ptr ds : [public_63992a8]
        mov eax, dword ptr ds : [public_658b8c0]
        add esp, 0x10
        test eax, eax
        je public_638e3e1
        add dword ptr ds : [public_658bd30], esi
        jmp public_638e3fe
        public_638e3e1 : nop
        mov ecx, dword ptr ds : [public_658bd20]
        mov eax, dword ptr ds : [public_658bd28]
        add ecx, esi
        cmp eax, esi
        mov dword ptr ds : [public_658bd20], ecx
        jge public_638e3fe
        mov dword ptr ds : [public_658bd28], esi
        public_638e3fe : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638e41d
        mov edx, dword ptr ds : [public_658b7fc]
        push esi
/*FIXUP push offset public_63fa7dc @0x638e40e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa7dc
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638e41d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638e2b0)
    }
}

#undef public_638e2d4
#undef public_638e309
#undef public_638e335
#undef public_638e33f
#undef public_638e34e
#undef public_638e355
#undef public_638e35e
#undef public_638e371
#undef public_638e37d
#undef public_638e388
#undef public_638e3b5
#undef public_638e3c7
#undef public_638e3e1
#undef public_638e3fe
#undef public_638e41d
