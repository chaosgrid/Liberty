#include "Server-PCH.h"


#define public_6d3c570 _public_6d3c570
#define public_6d3c58b _public_6d3c58b
#define public_6d3c5a2 _public_6d3c5a2
#define public_6d3c602 _public_6d3c602
#define public_6d3c604 _public_6d3c604

PROC_DECLARE(0x6d3c530, internal_6d3c530, public_6d3c530);
extern "C" NAKED register_t __cdecl internal_6d3c530()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [ecx-4]
        sub ecx, 4
        push esi
        cmp edx, dword ptr ds : [ebx+0x10]
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6d3c5a2
        mov esi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+0x18], edx
        mov edi, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+0xC]
        cmp edi, esi
        mov edx, dword ptr ss : [ebp+0x10]
        je public_6d3c58b
        nop 
        lea esp, ss:[esp]
        public_6d3c570 : nop
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d3c5a2
        cmp word ptr ds : [edi], bx
        jne public_6d3c5a2
        add edi, 2
        add edx, 2
        cmp edi, esi
        jne public_6d3c570
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d3c58b : nop
        mov dword ptr ss : [ebp+0x10], edx
        inc dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3c5a2 : nop
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d3c602
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov eax, edx
        jmp public_6d3c604
        public_6d3c602 : nop
        mov eax, ecx
        public_6d3c604 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], ecx
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3c530)
    }
}

#undef public_6d3c570
#undef public_6d3c58b
#undef public_6d3c5a2
#undef public_6d3c602
#undef public_6d3c604
