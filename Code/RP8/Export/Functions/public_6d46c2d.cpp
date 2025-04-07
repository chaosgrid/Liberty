#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d46a84);
CLANG_FORWARD_PROC_SYMBOL(public_6d46c2d);

#define public_6d46c51 _public_6d46c51
#define public_6d46c63 _public_6d46c63
#define public_6d46c73 _public_6d46c73
#define public_6d46c8b _public_6d46c8b
#define public_6d46ca1 _public_6d46ca1
#define public_6d46cab _public_6d46cab
#define public_6d46cb4 _public_6d46cb4
#define public_6d46cb7 _public_6d46cb7
#define public_6d46cc3 _public_6d46cc3
#define public_6d46ce7 _public_6d46ce7
#define public_6d46cea _public_6d46cea
#define public_6d46cf3 _public_6d46cf3
#define public_6d46d09 _public_6d46d09
#define public_6d46d17 _public_6d46d17
#define public_6d46d1e _public_6d46d1e
#define public_6d46d36 _public_6d46d36
#define public_6d46d3c _public_6d46d3c
#define public_6d46d40 _public_6d46d40

PROC_DECLARE(0x6d46c2d, internal_6d46c2d, public_6d46c2d);
extern "C" NAKED register_t __cdecl internal_6d46c2d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        lea edi, ds:[ebx+eax]
        cmp edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+0x14], edi
        ja public_6d46c51
        cmp eax, dword ptr ds : [esi+0xC]
        ja public_6d46c51
        cmp dword ptr ds : [esi], 0
        jne public_6d46c63
        public_6d46c51 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46c63 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp ebx, eax
        jb public_6d46c73
        mov ecx, dword ptr ds : [esi+0x10]
        add ecx, eax
        cmp edi, ecx
        jbe public_6d46cc3
        public_6d46c73 : nop
        cmp byte ptr ds : [esi+0x22], 0
        jne public_6d46c8b
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x44
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46c8b : nop
        cmp byte ptr ds : [esi+0x21], 0
        je public_6d46ca1
        push 1
        push dword ptr ss : [ebp+8]
        call public_6d46a84
        and byte ptr ds : [esi+0x21], 0
        pop ecx
        pop ecx
        public_6d46ca1 : nop
        cmp ebx, dword ptr ds : [esi+0x18]
        jbe public_6d46cab
        mov dword ptr ds : [esi+0x18], ebx
        jmp public_6d46cb7
        public_6d46cab : nop
        mov eax, edi
        sub eax, dword ptr ds : [esi+0x10]
        jns public_6d46cb4
        xor eax, eax
        public_6d46cb4 : nop
        mov dword ptr ds : [esi+0x18], eax
        public_6d46cb7 : nop
        push 0
        push dword ptr ss : [ebp+8]
        call public_6d46a84
        pop ecx
        pop ecx
        public_6d46cc3 : nop
        mov ebx, dword ptr ds : [esi+0x1C]
        cmp ebx, edi
        jae public_6d46d36
        cmp ebx, dword ptr ss : [ebp+0x10]
        jae public_6d46cea
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46ce7
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46ce7 : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        public_6d46cea : nop
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46cf3
        mov dword ptr ds : [esi+0x1C], edi
        public_6d46cf3 : nop
        cmp byte ptr ds : [esi+0x20], 0
        je public_6d46d1e
        mov eax, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [esi+8]
        shl edi, 7
        sub ebx, eax
        sub dword ptr ss : [ebp+0x14], eax
        jmp public_6d46d17
        public_6d46d09 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push dword ptr ds : [eax+ebx*4]
        call public_6d45f86
        pop ecx
        pop ecx
        inc ebx
        public_6d46d17 : nop
        cmp ebx, dword ptr ss : [ebp+0x14]
        jb public_6d46d09
        jmp public_6d46d36
        public_6d46d1e : nop
        cmp byte ptr ss : [ebp+0x18], 0
        jne public_6d46d3c
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46d36 : nop
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46d40
        public_6d46d3c : nop
        mov byte ptr ds : [esi+0x21], 1
        public_6d46d40 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi]
        pop edi
        pop esi
        lea eax, ds:[ecx+eax*4]
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d46c2d)
    }
}

#undef public_6d46c51
#undef public_6d46c63
#undef public_6d46c73
#undef public_6d46c8b
#undef public_6d46ca1
#undef public_6d46cab
#undef public_6d46cb4
#undef public_6d46cb7
#undef public_6d46cc3
#undef public_6d46ce7
#undef public_6d46cea
#undef public_6d46cf3
#undef public_6d46d09
#undef public_6d46d17
#undef public_6d46d1e
#undef public_6d46d36
#undef public_6d46d3c
#undef public_6d46d40
