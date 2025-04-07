#include "Server-PCH.h"


#define public_6d3b0f1 _public_6d3b0f1
#define public_6d3b10b _public_6d3b10b
#define public_6d3b16b _public_6d3b16b
#define public_6d3b16d _public_6d3b16d

PROC_DECLARE(0x6d3b0b0, internal_6d3b0b0, public_6d3b0b0);
extern "C" NAKED register_t __cdecl internal_6d3b0b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        sub edx, 4
        push edi
        mov edi, dword ptr ds : [edx]
        cmp edi, ebx
        je public_6d3b10b
        mov edi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x18], ebx
        mov ebp, dword ptr ds : [esi+0x10]
        mov bx, word ptr ss : [ebp]
        test bx, bx
        je public_6d3b10b
        cmp bx, word ptr ds : [edi+8]
        je public_6d3b0f1
        cmp bx, word ptr ds : [edi+0xE]
        jne public_6d3b10b
        public_6d3b0f1 : nop
        add ebp, 2
        mov dword ptr ds : [esi+0x10], ebp
        inc dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3b10b : nop
        mov edi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d3b16b
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
        jmp public_6d3b16d
        public_6d3b16b : nop
        mov eax, ecx
        public_6d3b16d : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3b0b0)
    }
}

#undef public_6d3b0f1
#undef public_6d3b10b
#undef public_6d3b16b
#undef public_6d3b16d
