#include "Server-PCH.h"


#define public_6d3b740 _public_6d3b740
#define public_6d3b75b _public_6d3b75b
#define public_6d3b777 _public_6d3b777
#define public_6d3b7d7 _public_6d3b7d7
#define public_6d3b7d9 _public_6d3b7d9

PROC_DECLARE(0x6d3b700, internal_6d3b700, public_6d3b700);
extern "C" NAKED register_t __cdecl internal_6d3b700()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        sub ebp, 4
        push esi
        cmp edx, dword ptr ds : [ecx+0x10]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3b777
        mov edi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+0x18], edx
        mov esi, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+0xC]
        cmp esi, edi
        mov edx, dword ptr ds : [ebx+0x10]
        je public_6d3b75b
        lea esp, ss:[esp]
        public_6d3b740 : nop
        cmp dword ptr ds : [ebx+0xC], edx
        je public_6d3b777
        mov cx, word ptr ds : [esi]
        cmp cx, word ptr ds : [edx]
        jne public_6d3b777
        add esi, 2
        add edx, 2
        cmp esi, edi
        jne public_6d3b740
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d3b75b : nop
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp]
        pop edi
        inc eax
        mov dword ptr ss : [ebp], eax
        mov edx, dword ptr ds : [ecx+4]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3b777 : nop
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d3b7d7
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
        jmp public_6d3b7d9
        public_6d3b7d7 : nop
        mov eax, ecx
        public_6d3b7d9 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], ecx
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3b700)
    }
}

#undef public_6d3b740
#undef public_6d3b75b
#undef public_6d3b777
#undef public_6d3b7d7
#undef public_6d3b7d9
