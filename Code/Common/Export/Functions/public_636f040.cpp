#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e6e0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_636f040);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);

#define public_636f068 _public_636f068
#define public_636f089 _public_636f089
#define public_636f0ba _public_636f0ba
#define public_636f0c4 _public_636f0c4
#define public_636f0db _public_636f0db
#define public_636f0ed _public_636f0ed
#define public_636f0fe _public_636f0fe
#define public_636f107 _public_636f107
#define public_636f10f _public_636f10f
#define public_636f120 _public_636f120
#define public_636f125 _public_636f125
#define public_636f142 _public_636f142
#define public_636f150 _public_636f150
#define public_636f189 _public_636f189
#define public_636f1bf _public_636f1bf
#define public_636f1c3 _public_636f1c3
#define public_636f1ce _public_636f1ce
#define public_636f1d2 _public_636f1d2
#define public_636f1f0 _public_636f1f0
#define public_636f210 _public_636f210
#define public_636f227 _public_636f227
#define public_636f24b _public_636f24b
#define public_636f254 _public_636f254
#define public_636f270 _public_636f270
#define public_636f273 _public_636f273
#define public_636f283 _public_636f283
#define public_636f295 _public_636f295
#define public_636f2a7 _public_636f2a7
#define public_636f2ae _public_636f2ae

PROC_DECLARE(0x636f040, internal_636f040, public_636f040);
extern "C" NAKED register_t __cdecl internal_636f040()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [public_658b078], 3
        mov dword ptr ds : [public_658b8a0], 1
        jl public_636f068
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63eedd0 @0x636f059*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eedd0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_636f068 : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        push ebx
        mov ebx, dword ptr ds : [public_658b820]
        push ebp
        push esi
        inc ecx
        xor esi, esi
        cmp ebx, esi
        push edi
        mov dword ptr ds : [public_658b8e0], ecx
        je public_636f120
        public_636f089 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        mov ebp, 0x400
        test ebp, eax
        je public_636f125
        mov eax, dword ptr ds : [ebx+0x38]
        cmp eax, esi
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [ebx+0x48], ecx
        je public_636f10f
        cmp eax, esi
        je public_636f107
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_636f107
        public_636f0ba : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_636f0c4
        mov eax, dword ptr ds : [esi+8]
        public_636f0c4 : nop
        mov edx, dword ptr ds : [eax+0x48]
        cmp edx, dword ptr ds : [public_658b8e0]
        je public_636f0db
        mov ecx, dword ptr ds : [eax+0x50]
        test ebp, ecx
        jne public_636f0fe
        test ch, 0x10
        je public_636f0fe
        public_636f0db : nop
        test dword ptr ds : [eax+0x50], ebp
        jne public_636f0ed
        mov eax, dword ptr ds : [eax+0x38]
        push esi
        push eax
        call public_636e400
        add esp, 8
        public_636f0ed : nop
        push esi
        call public_636e740
        push 0x10
        push esi
        call public_6377fe0
        add esp, 0xC
        public_636f0fe : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_636f0ba
        public_636f107 : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        xor esi, esi
        mov dword ptr ds : [ecx+4], esi
        public_636f10f : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [edx+4], esi
        mov ebx, dword ptr ds : [ebx+0x30]
        cmp ebx, esi
        jne public_636f089
        public_636f120 : nop
        mov ebp, 0x400
        public_636f125 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_636f142
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63eed94 @0x636f133*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eed94
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_636f142 : nop
        mov edi, dword ptr ds : [public_658b81c]
        cmp edi, esi
        je public_636f283
        public_636f150 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_636f283
        mov ecx, dword ptr ds : [edi+0x3C]
        mov ebp, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 0x10
        je public_636f210
        mov esi, dword ptr ss : [ebp+0x3C]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_636f1f0
        mov ebx, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test ebx, ebx
        je public_636f1f0
        public_636f189 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        je public_636f1c3
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_636f1bf
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov eax, dword ptr ss : [ebp+0x34]
        mov edx, esi
        sub edx, ecx
        mov ecx, dword ptr ds : [edi+0x34]
        sub edx, 8
        sar edx, 2
        push edx
        push eax
        push 0
        push ecx
        call public_636e6e0
        add esp, 0x10
        test eax, eax
        jne public_636f1ce
        jmp public_636f1c3
        public_636f1bf : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_636f1c3 : nop
        mov ebx, dword ptr ds : [esi]
        add esi, 4
        test ebx, ebx
        jne public_636f189
        jmp public_636f1d2
        public_636f1ce : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_636f1d2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_636f1f0
        push edi
        mov dword ptr ds : [eax+0x20], edi
        mov edx, dword ptr ss : [ebp+0x3C]
        push eax
        push edx
        call public_636ebb0
        add esp, 0xC
        jmp public_636f273
        public_636f1f0 : nop
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ss : [ebp+0x4C]
        push eax
        push ecx
/*FIXUP push offset public_63eed2c @0x636f1f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eed2c
        call public_6356960
        push edi
        push ebp
        push 5
        call public_637e2e0
        add esp, 0x18
        jmp public_636f273
        public_636f210 : nop
        mov esi, dword ptr ss : [ebp+0x3C]
        test esi, esi
        lea ebx, ss:[ebp+0x3C]
        je public_636f254
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_636f254
        public_636f227 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 4
        je public_636f24b
        mov dword ptr ds : [eax+0x20], edi
        mov eax, dword ptr ds : [ebx]
        mov edx, esi
        sub edx, eax
        sub edx, 8
        sar edx, 2
        push edx
        push eax
        call public_636e4a0
        add esp, 8
        sub esi, 4
        public_636f24b : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_636f227
        public_636f254 : nop
        push edi
        push ebx
        call public_636e1b0
        mov eax, dword ptr ds : [edi+0x38]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        add esp, 8
        cmp ecx, ebp
        jne public_636f270
        mov dword ptr ds : [eax+8], edi
        jmp public_636f273
        public_636f270 : nop
        mov dword ptr ds : [eax+4], edi
        public_636f273 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        mov ebp, 0x400
        jne public_636f150
        public_636f283 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_636f2ae
        mov eax, dword ptr ds : [public_658b820]
        test eax, eax
        je public_636f2ae
        public_636f295 : nop
        test dword ptr ds : [eax+0x50], ebp
        je public_636f2ae
        mov ecx, dword ptr ds : [eax+0x20]
        test ecx, ecx
        jne public_636f2a7
        inc dword ptr ds : [public_658bc88]
        public_636f2a7 : nop
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_636f295
        public_636f2ae : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x636f040)
    }
}

#undef public_636f068
#undef public_636f089
#undef public_636f0ba
#undef public_636f0c4
#undef public_636f0db
#undef public_636f0ed
#undef public_636f0fe
#undef public_636f107
#undef public_636f10f
#undef public_636f120
#undef public_636f125
#undef public_636f142
#undef public_636f150
#undef public_636f189
#undef public_636f1bf
#undef public_636f1c3
#undef public_636f1ce
#undef public_636f1d2
#undef public_636f1f0
#undef public_636f210
#undef public_636f227
#undef public_636f24b
#undef public_636f254
#undef public_636f270
#undef public_636f273
#undef public_636f283
#undef public_636f295
#undef public_636f2a7
#undef public_636f2ae
