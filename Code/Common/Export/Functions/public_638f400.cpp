#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_6372a10);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_638f400);

#define public_638f432 _public_638f432
#define public_638f43c _public_638f43c
#define public_638f449 _public_638f449
#define public_638f457 _public_638f457
#define public_638f486 _public_638f486
#define public_638f49e _public_638f49e
#define public_638f4ad _public_638f4ad
#define public_638f4b6 _public_638f4b6
#define public_638f4c3 _public_638f4c3
#define public_638f4ee _public_638f4ee
#define public_638f4fd _public_638f4fd
#define public_638f51d _public_638f51d
#define public_638f57c _public_638f57c
#define public_638f591 _public_638f591
#define public_638f596 _public_638f596
#define public_638f59b _public_638f59b
#define public_638f5af _public_638f5af
#define public_638f5f0 _public_638f5f0
#define public_638f605 _public_638f605
#define public_638f616 _public_638f616
#define public_638f641 _public_638f641

PROC_DECLARE(0x638f400, internal_638f400, public_638f400);
extern "C" NAKED register_t __cdecl internal_638f400()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ds : [public_658b8e0]
        xor ecx, ecx
        inc ebx
        push ebp
        push esi
        mov dword ptr ds : [public_658b8e0], ebx
        mov esi, dword ptr ds : [eax+0x20]
        cmp esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], ebx
        je public_638f457
        mov edi, 0x400
        public_638f432 : nop
        cmp dword ptr ds : [esi+0x48], ebx
        je public_638f43c
        test dword ptr ds : [esi+0x50], edi
        je public_638f449
        public_638f43c : nop
        push eax
        call public_6372a10
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_638f449 : nop
        cmp esi, eax
        mov dword ptr ds : [esi+0x48], ebx
        je public_638f457
        mov esi, dword ptr ds : [esi+0x20]
        test esi, esi
        jne public_638f432
        public_638f457 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        mov ebp, dword ptr ss : [esp+0x24]
        inc eax
        mov dword ptr ds : [public_658b8e0], eax
        mov dword ptr ss : [ebp+0x48], eax
        cmp dword ptr ds : [public_658b078], 4
        jl public_638f486
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fadb0 @0x638f477*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fadb0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f486 : nop
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        je public_638f4c3
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ecx, ecx
        je public_638f4c3
        mov edx, dword ptr ss : [esp+0x14]
        public_638f49e : nop
        cmp dword ptr ds : [ecx+0x48], ebx
        jne public_638f4ad
        mov dword ptr ds : [eax-4], 0
        inc edx
        jmp public_638f4b6
        public_638f4ad : nop
        mov esi, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [ecx+0x48], esi
        public_638f4b6 : nop
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test ecx, ecx
        jne public_638f49e
        mov dword ptr ss : [esp+0x14], edx
        public_638f4c3 : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        push ecx
        call public_636e370
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 4
        jl public_638f4ee
        mov edx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fad84 @0x638f4df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fad84
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f4ee : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+0x20]
        test ebx, ebx
        je public_638f616
        public_638f4fd : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_638f605
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x24], eax
        je public_638f605
        public_638f51d : nop
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, dword ptr ss : [esp+0x18]
        je public_638f5f0
        mov ecx, dword ptr ds : [esi+0x50]
        test ch, 0x10
        je public_638f5af
        cmp eax, dword ptr ds : [public_658b8e0]
        push esi
        je public_638f59b
        lea eax, ss:[ebp+0x3C]
        push eax
        call public_636e1b0
        mov ecx, dword ptr ds : [esi+0x3C]
        push ebp
        push ebx
        push ecx
        call public_636ebb0
        mov edx, dword ptr ds : [public_658b8e0]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0x14
        mov dword ptr ds : [esi+0x48], edx
        mov esi, dword ptr ds : [esi+0x38]
        inc ecx
        test esi, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_638f5f0
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        add ecx, 4
        test eax, eax
        je public_638f5f0
        public_638f57c : nop
        cmp dword ptr ds : [eax+4], ebx
        je public_638f591
        cmp dword ptr ds : [eax+8], ebx
        je public_638f596
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638f57c
        jmp public_638f5f0
        public_638f591 : nop
        mov dword ptr ds : [eax+4], ebp
        jmp public_638f5f0
        public_638f596 : nop
        mov dword ptr ds : [eax+8], ebp
        jmp public_638f5f0
        public_638f59b : nop
        call public_638e540
        mov eax, dword ptr ds : [esi+0x3C]
        push ebx
        push eax
        call public_636e400
        add esp, 0xC
        jmp public_638f5f0
        public_638f5af : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        lea edi, ds:[esi+0x3C]
        push ebx
        push ecx
        call public_636e400
        mov edx, dword ptr ds : [esi+0x48]
        mov eax, dword ptr ds : [public_658b8e0]
        add esp, 8
        cmp edx, eax
        je public_638f5f0
        push ebp
        push edi
        call public_636e1b0
        lea eax, ss:[ebp+0x3C]
        push esi
        push eax
        call public_636e1b0
        mov eax, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [esi+0x48], eax
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        public_638f5f0 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x24], eax
        jne public_638f51d
        public_638f605 : nop
        cmp ebx, dword ptr ss : [esp+0x20]
        je public_638f616
        mov ebx, dword ptr ds : [ebx+0x20]
        test ebx, ebx
        jne public_638f4fd
        public_638f616 : nop
        cmp dword ptr ds : [public_658b078], 2
        pop edi
        pop esi
        pop ebp
        pop ebx
        jl public_638f641
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63fad48 @0x638f632*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fad48
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638f641 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x638f400)
    }
}

#undef public_638f432
#undef public_638f43c
#undef public_638f449
#undef public_638f457
#undef public_638f486
#undef public_638f49e
#undef public_638f4ad
#undef public_638f4b6
#undef public_638f4c3
#undef public_638f4ee
#undef public_638f4fd
#undef public_638f51d
#undef public_638f57c
#undef public_638f591
#undef public_638f596
#undef public_638f59b
#undef public_638f5af
#undef public_638f5f0
#undef public_638f605
#undef public_638f616
#undef public_638f641
