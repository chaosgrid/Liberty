#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3b5e0 _public_6d3b5e0
#define public_6d3b5ff _public_6d3b5ff
#define public_6d3b613 _public_6d3b613
#define public_6d3b648 _public_6d3b648
#define public_6d3b660 _public_6d3b660
#define public_6d3b680 _public_6d3b680
#define public_6d3b69a _public_6d3b69a
#define public_6d3b6ae _public_6d3b6ae
#define public_6d3b6bf _public_6d3b6bf
#define public_6d3b6c7 _public_6d3b6c7
#define public_6d3b6dc _public_6d3b6dc
#define public_6d3b6de _public_6d3b6de
#define public_6d3b6eb _public_6d3b6eb

PROC_DECLARE(0x6d3b5b0, internal_6d3b5b0, public_6d3b5b0);
extern "C" NAKED register_t __cdecl internal_6d3b5b0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp ecx, eax
        je public_6d3b5ff
        lea ebx, ds:[ebx]
        public_6d3b5e0 : nop
        cmp dword ptr ds : [esi+0xC], edx
        je public_6d3b6c7
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [edx]
        jne public_6d3b6c7
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d3b5e0
        public_6d3b5ff : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x10], edx
        sub edx, ecx
        test edx, 0xFFFFFFFE
        jne public_6d3b648
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d3b613 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebp, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebp
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3b6dc
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3b6de
        public_6d3b648 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3b6bf
        mov ebx, 1
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ebx
        jbe public_6d3b613
        lea esp, ss:[esp]
        public_6d3b660 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3b69a
        mov ebx, dword ptr ds : [esi+0xC]
        lea esp, ss:[esp]
        public_6d3b680 : nop
        cmp ebx, eax
        je public_6d3b6ae
        mov bp, word ptr ds : [ecx]
        cmp bp, word ptr ds : [eax]
        jne public_6d3b6ae
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b680
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d3b69a : nop
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jb public_6d3b660
        jmp public_6d3b613
        public_6d3b6ae : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3b6bf : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3b613
        public_6d3b6c7 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3b613
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3b6dc : nop
        mov eax, edx
        public_6d3b6de : nop
        test eax, eax
        je public_6d3b6eb
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ebx
        public_6d3b6eb : nop
        mov eax, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3b5b0)
    }
}

#undef public_6d3b5e0
#undef public_6d3b5ff
#undef public_6d3b613
#undef public_6d3b648
#undef public_6d3b660
#undef public_6d3b680
#undef public_6d3b69a
#undef public_6d3b6ae
#undef public_6d3b6bf
#undef public_6d3b6c7
#undef public_6d3b6dc
#undef public_6d3b6de
#undef public_6d3b6eb
