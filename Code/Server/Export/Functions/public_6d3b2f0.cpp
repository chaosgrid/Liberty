#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3b330 _public_6d3b330
#define public_6d3b346 _public_6d3b346
#define public_6d3b360 _public_6d3b360
#define public_6d3b3a0 _public_6d3b3a0
#define public_6d3b3d0 _public_6d3b3d0
#define public_6d3b3e6 _public_6d3b3e6
#define public_6d3b3eb _public_6d3b3eb
#define public_6d3b3ed _public_6d3b3ed
#define public_6d3b3fa _public_6d3b3fa
#define public_6d3b40a _public_6d3b40a

PROC_DECLARE(0x6d3b2f0, internal_6d3b2f0, public_6d3b2f0);
extern "C" NAKED register_t __cdecl internal_6d3b2f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x18], 0
        je public_6d3b360
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3b346
        mov edi, dword ptr ds : [esi+0xC]
        lea ebx, ds:[ebx]
        public_6d3b330 : nop
        cmp edi, eax
        je public_6d3b360
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [eax]
        jne public_6d3b360
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b330
        public_6d3b346 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, eax
        sub edx, ecx
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d3b3a0
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        public_6d3b360 : nop
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, dword ptr ds : [ebx+0xC]
        jb public_6d3b40a
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebp, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebp
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3b3eb
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3b3ed
        nop 
        lea esp, ss:[esp]
        public_6d3b3a0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jae public_6d3b360
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3b3e6
        mov edi, dword ptr ds : [esi+0xC]
        lea esp, ss:[esp]
        public_6d3b3d0 : nop
        cmp edi, eax
        je public_6d3b360
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [eax]
        jne public_6d3b360
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b3d0
        public_6d3b3e6 : nop
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d3b3a0
        public_6d3b3eb : nop
        mov eax, edx
        public_6d3b3ed : nop
        test eax, eax
        je public_6d3b3fa
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edi
        public_6d3b3fa : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d3b40a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3b2f0)
    }
}

#undef public_6d3b330
#undef public_6d3b346
#undef public_6d3b360
#undef public_6d3b3a0
#undef public_6d3b3d0
#undef public_6d3b3e6
#undef public_6d3b3eb
#undef public_6d3b3ed
#undef public_6d3b3fa
#undef public_6d3b40a
