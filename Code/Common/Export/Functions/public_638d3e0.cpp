#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_638d3e0);

#define public_638d3fe _public_638d3fe
#define public_638d401 _public_638d401
#define public_638d41f _public_638d41f
#define public_638d429 _public_638d429
#define public_638d46e _public_638d46e
#define public_638d478 _public_638d478
#define public_638d491 _public_638d491
#define public_638d4a3 _public_638d4a3
#define public_638d4b7 _public_638d4b7
#define public_638d4d4 _public_638d4d4
#define public_638d4e2 _public_638d4e2
#define public_638d4e6 _public_638d4e6
#define public_638d517 _public_638d517
#define public_638d520 _public_638d520
#define public_638d524 _public_638d524
#define public_638d538 _public_638d538
#define public_638d588 _public_638d588
#define public_638d591 _public_638d591

PROC_DECLARE(0x638d3e0, internal_638d3e0, public_638d3e0);
extern "C" NAKED register_t __cdecl internal_638d3e0()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        jl public_638d41f
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_638d3fe
        mov eax, dword ptr ds : [edi+0x4C]
        jmp public_638d401
        public_638d3fe : nop
        or eax, 0xFFFFFFFF
        public_638d401 : nop
        mov ecx, dword ptr ds : [public_658b7fc]
        mov ebx, dword ptr ds : [public_63991e8]
        push eax
        mov eax, dword ptr ss : [ebp+0x4C]
        push eax
/*FIXUP push offset public_63fa3a0 @0x638d412*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa3a0
        push ecx
        call ebx
        add esp, 0x10
        jmp public_638d429
        public_638d41f : nop
        mov ebx, dword ptr ds : [public_63991e8]
        mov edi, dword ptr ss : [esp+0x18]
        public_638d429 : nop
        mov edx, dword ptr ss : [ebp+0x3C]
        push edx
        call public_636ec10
        mov esi, eax
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 4
        cmp esi, eax
        jge public_638d46e
        push 0
        push 6
        push ebp
        push ebp
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638d46e
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push esi
        push eax
/*FIXUP push offset public_63fa35c @0x638d463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa35c
        push ecx
        call ebx
        add esp, 0x10
        public_638d46e : nop
        test edi, edi
        jne public_638d478
        mov dword ptr ss : [esp+0x18], ebp
        mov edi, ebp
        public_638d478 : nop
        inc dword ptr ds : [public_658b8e4]
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        je public_638d4a3
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638d4a3
        public_638d491 : nop
        mov edx, dword ptr ds : [public_658b8e4]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638d491
        public_638d4a3 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_638d524
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638d520
        public_638d4b7 : nop
        cmp esi, ebp
        je public_638d517
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        je public_638d4e6
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638d4e6
        mov edx, dword ptr ds : [public_658b8e4]
        public_638d4d4 : nop
        cmp dword ptr ds : [eax+0x10], edx
        jne public_638d4e2
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638d4d4
        public_638d4e2 : nop
        test eax, eax
        jne public_638d517
        public_638d4e6 : nop
        push 0
        push 7
        push ebp
        push esi
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638d517
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fa31c @0x638d50c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa31c
        push edx
        call ebx
        add esp, 0x10
        public_638d517 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638d4b7
        public_638d520 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_638d524 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_638d591
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638d591
        public_638d538 : nop
        cmp esi, ebp
        je public_638d588
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        call public_636ec10
        mov ebx, eax
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 4
        cmp ebx, eax
        jge public_638d588
        push 0
        push 6
        push esi
        push esi
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638d588
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push ebx
        push edx
/*FIXUP push offset public_63fa2c4 @0x638d579*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa2c4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_638d588 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638d538
        public_638d591 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638d3e0)
    }
}

#undef public_638d3fe
#undef public_638d401
#undef public_638d41f
#undef public_638d429
#undef public_638d46e
#undef public_638d478
#undef public_638d491
#undef public_638d4a3
#undef public_638d4b7
#undef public_638d4d4
#undef public_638d4e2
#undef public_638d4e6
#undef public_638d517
#undef public_638d520
#undef public_638d524
#undef public_638d538
#undef public_638d588
#undef public_638d591
