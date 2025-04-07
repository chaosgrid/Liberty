#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);
CLANG_FORWARD_PROC_SYMBOL(public_6d32ac7);

#define public_6d32ae5 _public_6d32ae5
#define public_6d32aef _public_6d32aef
#define public_6d32aff _public_6d32aff
#define public_6d32b0c _public_6d32b0c
#define public_6d32b1a _public_6d32b1a
#define public_6d32b8c _public_6d32b8c
#define public_6d32b94 _public_6d32b94
#define public_6d32bb2 _public_6d32bb2
#define public_6d32bbf _public_6d32bbf
#define public_6d32bd2 _public_6d32bd2
#define public_6d32c02 _public_6d32c02
#define public_6d32c05 _public_6d32c05
#define public_6d32c0d _public_6d32c0d
#define public_6d32c1c _public_6d32c1c
#define public_6d32c26 _public_6d32c26
#define public_6d32c8d _public_6d32c8d
#define public_6d32cb9 _public_6d32cb9
#define public_6d32cea _public_6d32cea
#define public_6d32d17 _public_6d32d17
#define public_6d32d1d _public_6d32d1d
#define public_6d32d36 _public_6d32d36
#define public_6d32d45 _public_6d32d45
#define public_6d32d4a _public_6d32d4a
#define public_6d32d65 _public_6d32d65

PROC_DECLARE(0x6d32ac7, internal_6d32ac7, public_6d32ac7);
extern "C" NAKED register_t __cdecl internal_6d32ac7()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x74]
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [ebp+0x60], esi
        mov dword ptr ss : [ebp+0x70], edi
        mov eax, esi
        je public_6d32aef
        public_6d32ae5 : nop
        mov eax, dword ptr ds : [eax+0x4C]
        inc dword ptr ss : [ebp+0x70]
        cmp eax, edi
        jne public_6d32ae5
        public_6d32aef : nop
        mov eax, dword ptr ds : [public_6d6c470]
        cmp eax, edi
        mov ebx, offset public_6d6c470
        je public_6d32b0c
        mov ecx, dword ptr ds : [esi]
        public_6d32aff : nop
        cmp eax, ecx
        je public_6d32b0c
        add ebx, 0x24
        mov eax, dword ptr ds : [ebx]
        cmp eax, edi
        jne public_6d32aff
        public_6d32b0c : nop
        cmp dword ptr ds : [ebx], edi
        jne public_6d32b1a
        mov eax, 0x80004005
        jmp public_6d32d65
        public_6d32b1a : nop
        push dword ptr ds : [esi]
        call public_6d2f49c
        mov dword ptr ss : [ebp+0x6C], eax
        mov eax, dword ptr ds : [eax+8]
        pop ecx
        shr eax, 3
        push edi
        mov dword ptr ss : [ebp+0x64], eax
        lea eax, ss:[ebp+0x68]
        push eax
        push 4
        lea eax, ss:[ebp+0x5C]
        push eax
        push dword ptr ss : [ebp+0x7C]
        mov dword ptr ss : [ebp+0x5C], 0x20534444
        call dword ptr ds : [public_6d5e050]
        push 0x1F
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x20]
        rep stosd
        mov eax, dword ptr ds : [esi+0x10]
        push 0x7C
        pop edx
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ds : [ebx+8]
        test al, 3
        push 8
        lea esi, ds:[ebx+4]
        pop ecx
        lea edi, ss:[ebp+0x28]
        mov dword ptr ss : [ebp-0x20], edx
        mov dword ptr ss : [ebp-0x1C], 0x1007
        rep movsd
        mov dword ptr ss : [ebp+0x48], 0x1000
        je public_6d32b8c
        mov dword ptr ss : [ebp+0x48], 0x1002
        public_6d32b8c : nop
        test al, 0x20
        je public_6d32b94
        or byte ptr ss : [ebp+0x49], 1
        public_6d32b94 : nop
        mov esi, dword ptr ss : [ebp+0x60]
        xor edi, edi
        cmp dword ptr ds : [esi+0x4C], edi
        je public_6d32bb2
        mov eax, dword ptr ss : [ebp+0x70]
        or dword ptr ss : [ebp+0x48], 0x400008
        mov dword ptr ss : [ebp-0x1C], 0x21007
        mov dword ptr ss : [ebp-8], eax
        public_6d32bb2 : nop
        cmp dword ptr ds : [esi+0x50], edi
        je public_6d32bbf
        or dword ptr ss : [ebp+0x48], 8
        or byte ptr ss : [ebp+0x4D], 0xFE
        public_6d32bbf : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 1
        jbe public_6d32bd2
        or byte ptr ss : [ebp-0x1A], 0x80
        or byte ptr ss : [ebp+0x4E], 0x20
        mov dword ptr ss : [ebp-0xC], eax
        public_6d32bd2 : nop
        mov ebx, dword ptr ds : [public_6d5e050]
        push edi
        lea eax, ss:[ebp+0x68]
        push eax
        push edx
        lea eax, ss:[ebp-0x20]
        push eax
        push dword ptr ss : [ebp+0x7C]
        call ebx
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp dword ptr ds : [eax+4], 1
        jne public_6d32c02
        push edi
        lea eax, ss:[ebp+0x68]
        push eax
        push 0x400
        push dword ptr ds : [esi+8]
        push dword ptr ss : [ebp+0x7C]
        call ebx
        public_6d32c02 : nop
        mov dword ptr ss : [ebp+0x6C], esi
        public_6d32c05 : nop
        mov esi, dword ptr ss : [ebp+0x6C]
        jmp public_6d32d4a
        public_6d32c0d : nop
        cmp dword ptr ds : [esi+0x14], edi
        mov dword ptr ss : [ebp+0x70], edi
        jbe public_6d32d45
        mov eax, dword ptr ds : [esi+0x10]
        public_6d32c1c : nop
        xor edi, edi
        test eax, eax
        jbe public_6d32d36
        public_6d32c26 : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0x31545844
        je public_6d32cea
        cmp eax, 0x32545844
        je public_6d32cb9
        cmp eax, 0x32595559
        je public_6d32c8d
        cmp eax, 0x33545844
        je public_6d32cb9
        cmp eax, 0x34545844
        je public_6d32cb9
        cmp eax, 0x35545844
        je public_6d32cb9
        cmp eax, 0x59565955
        je public_6d32c8d
        mov ecx, dword ptr ds : [esi+0x28]
        add ecx, dword ptr ss : [ebp+0x70]
        mov eax, dword ptr ds : [esi+0x1C]
        imul ecx, dword ptr ds : [esi+0x34]
        add eax, edi
        imul eax, dword ptr ds : [esi+0x30]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        imul ecx, dword ptr ss : [ebp+0x64]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        add eax, dword ptr ds : [esi+4]
        imul ecx, dword ptr ss : [ebp+0x64]
        jmp public_6d32d1d
        public_6d32c8d : nop
        mov ecx, dword ptr ds : [esi+0x28]
        add ecx, dword ptr ss : [ebp+0x70]
        mov eax, dword ptr ds : [esi+0x1C]
        imul ecx, dword ptr ds : [esi+0x34]
        add eax, edi
        imul eax, dword ptr ds : [esi+0x30]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        imul ecx, dword ptr ss : [ebp+0x64]
        add eax, ecx
        add eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        inc ecx
        shr ecx, 1
        shl ecx, 2
        jmp public_6d32d1d
        public_6d32cb9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x28]
        add ecx, dword ptr ss : [ebp+0x70]
        add eax, edi
        imul ecx, dword ptr ds : [esi+0x34]
        shr eax, 2
        imul eax, dword ptr ds : [esi+0x30]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        shr ecx, 2
        shl ecx, 4
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, 3
        shr ecx, 2
        shl ecx, 4
        jmp public_6d32d17
        public_6d32cea : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x28]
        add ecx, dword ptr ss : [ebp+0x70]
        add eax, edi
        imul ecx, dword ptr ds : [esi+0x34]
        shr eax, 2
        imul eax, dword ptr ds : [esi+0x30]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        shr ecx, 2
        lea eax, ds:[eax+ecx*8]
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, 3
        shr ecx, 2
        shl ecx, 3
        public_6d32d17 : nop
        add eax, dword ptr ds : [esi+4]
        add edi, 3
        public_6d32d1d : nop
        push 0
        lea edx, ss:[ebp+0x68]
        push edx
        push ecx
        push eax
        push dword ptr ss : [ebp+0x7C]
        call ebx
        mov eax, dword ptr ds : [esi+0x10]
        inc edi
        cmp edi, eax
        jb public_6d32c26
        public_6d32d36 : nop
        inc dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ss : [ebp+0x70]
        cmp ecx, dword ptr ds : [esi+0x14]
        jb public_6d32c1c
        public_6d32d45 : nop
        mov esi, dword ptr ds : [esi+0x4C]
        xor edi, edi
        public_6d32d4a : nop
        cmp esi, edi
        jne public_6d32c0d
        mov eax, dword ptr ss : [ebp+0x6C]
        mov eax, dword ptr ds : [eax+0x50]
        cmp eax, edi
        mov dword ptr ss : [ebp+0x6C], eax
        jne public_6d32c05
        xor eax, eax
        public_6d32d65 : nop
        pop edi
        pop esi
        pop ebx
        add ebp, 0x74
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6d32ac7)
    }
}

#undef public_6d32ae5
#undef public_6d32aef
#undef public_6d32aff
#undef public_6d32b0c
#undef public_6d32b1a
#undef public_6d32b8c
#undef public_6d32b94
#undef public_6d32bb2
#undef public_6d32bbf
#undef public_6d32bd2
#undef public_6d32c02
#undef public_6d32c05
#undef public_6d32c0d
#undef public_6d32c1c
#undef public_6d32c26
#undef public_6d32c8d
#undef public_6d32cb9
#undef public_6d32cea
#undef public_6d32d17
#undef public_6d32d1d
#undef public_6d32d36
#undef public_6d32d45
#undef public_6d32d4a
#undef public_6d32d65
