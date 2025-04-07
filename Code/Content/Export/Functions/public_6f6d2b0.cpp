#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f6d2d1 _public_6f6d2d1
#define public_6f6d2e2 _public_6f6d2e2
#define public_6f6d2ed _public_6f6d2ed
#define public_6f6d2ef _public_6f6d2ef
#define public_6f6d304 _public_6f6d304
#define public_6f6d30f _public_6f6d30f
#define public_6f6d311 _public_6f6d311
#define public_6f6d334 _public_6f6d334
#define public_6f6d33f _public_6f6d33f
#define public_6f6d341 _public_6f6d341
#define public_6f6d35d _public_6f6d35d
#define public_6f6d377 _public_6f6d377
#define public_6f6d380 _public_6f6d380
#define public_6f6d38c _public_6f6d38c
#define public_6f6d38e _public_6f6d38e
#define public_6f6d3a0 _public_6f6d3a0
#define public_6f6d3ab _public_6f6d3ab
#define public_6f6d3ad _public_6f6d3ad
#define public_6f6d3d0 _public_6f6d3d0
#define public_6f6d3db _public_6f6d3db
#define public_6f6d3f1 _public_6f6d3f1

PROC_DECLARE(0x6f6d2b0, internal_6f6d2b0, public_6f6d2b0);
extern "C" NAKED register_t __cdecl internal_6f6d2b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd1cb0]
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ds : [public_6fd1cac]
        cmp ebp, eax
        je public_6f6d3f1
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        lea ebx, ss:[ebp+0xC]
        public_6f6d2d1 : nop
        mov esi, dword ptr ds : [ebx-4]
        mov ecx, dword ptr ds : [ebx]
        mov eax, esi
        cmp eax, ecx
        je public_6f6d2ed
        mov edx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edx]
        public_6f6d2e2 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d2ef
        add eax, 4
        cmp eax, ecx
        jne public_6f6d2e2
        public_6f6d2ed : nop
        mov eax, dword ptr ds : [ebx]
        public_6f6d2ef : nop
        cmp eax, ecx
        je public_6f6d377
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6d30f
        mov edx, dword ptr ss : [ebp]
        public_6f6d304 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d311
        add eax, 4
        cmp eax, ecx
        jne public_6f6d304
        public_6f6d30f : nop
        mov eax, ecx
        public_6f6d311 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f6d35d
        push ebp
        push ecx
        mov ecx, edi
        call public_6eb5770
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x28], 1
        je public_6f6d33f
        mov edx, dword ptr ss : [ebp]
        public_6f6d334 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d341
        add eax, 4
        cmp eax, ecx
        jne public_6f6d334
        public_6f6d33f : nop
        mov eax, ecx
        public_6f6d341 : nop
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6fa6e80
        jmp public_6f6d3db
        public_6f6d35d : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x30], 0
        call public_6fa6e80
        jmp public_6f6d3db
        public_6f6d377 : nop
        mov eax, esi
        cmp eax, ecx
        je public_6f6d38c
        lea ecx, ds:[ecx]
        public_6f6d380 : nop
        cmp dword ptr ds : [eax], 0
        je public_6f6d38e
        add eax, 4
        cmp eax, ecx
        jne public_6f6d380
        public_6f6d38c : nop
        mov eax, dword ptr ds : [ebx]
        public_6f6d38e : nop
        cmp eax, ecx
        je public_6f6d3db
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6d3ab
        mov edx, dword ptr ss : [ebp]
        nop 
        public_6f6d3a0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d3ad
        add eax, 4
        cmp eax, ecx
        jne public_6f6d3a0
        public_6f6d3ab : nop
        mov eax, ecx
        public_6f6d3ad : nop
        cmp eax, ecx
        jne public_6f6d3db
        push ebp
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f6d3db
        mov edx, dword ptr ss : [ebp]
        lea esp, ss:[esp]
        public_6f6d3d0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d3db
        add eax, 4
        cmp eax, ecx
        jne public_6f6d3d0
        public_6f6d3db : nop
        mov eax, dword ptr ds : [public_6fd1cb0]
        add ebp, 0x14
        add ebx, 0x14
        cmp ebp, eax
        jne public_6f6d2d1
        pop edi
        pop esi
        pop ebx
        public_6f6d3f1 : nop
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f6d2b0)
    }
}

#undef public_6f6d2d1
#undef public_6f6d2e2
#undef public_6f6d2ed
#undef public_6f6d2ef
#undef public_6f6d304
#undef public_6f6d30f
#undef public_6f6d311
#undef public_6f6d334
#undef public_6f6d33f
#undef public_6f6d341
#undef public_6f6d35d
#undef public_6f6d377
#undef public_6f6d380
#undef public_6f6d38c
#undef public_6f6d38e
#undef public_6f6d3a0
#undef public_6f6d3ab
#undef public_6f6d3ad
#undef public_6f6d3d0
#undef public_6f6d3db
#undef public_6f6d3f1
