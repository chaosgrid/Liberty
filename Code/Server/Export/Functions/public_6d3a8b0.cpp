#include "Server-PCH.h"


#define public_6d3a8f2 _public_6d3a8f2
#define public_6d3a90c _public_6d3a90c
#define public_6d3a96c _public_6d3a96c
#define public_6d3a96e _public_6d3a96e

PROC_DECLARE(0x6d3a8b0, internal_6d3a8b0, public_6d3a8b0);
extern "C" NAKED register_t __cdecl internal_6d3a8b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x14]
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0x1008]
        sub esi, 4
        push edi
        mov edi, dword ptr ds : [esi]
        cmp edi, ebx
        je public_6d3a90c
        mov ebx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edx+0x18], edi
        mov edi, dword ptr ds : [edx+0x10]
        cmp ebp, edi
        je public_6d3a90c
        mov bp, word ptr ds : [edi]
        cmp bp, word ptr ds : [ebx+8]
        je public_6d3a8f2
        cmp bp, word ptr ds : [ebx+0xE]
        jne public_6d3a90c
        public_6d3a8f2 : nop
        add edi, 2
        mov dword ptr ds : [edx+0x10], edi
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x18], eax
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3a90c : nop
        mov edi, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d3a96c
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
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
        mov eax, esi
        jmp public_6d3a96e
        public_6d3a96c : nop
        mov eax, ecx
        public_6d3a96e : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ds : [edx+0x10], ecx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3a8b0)
    }
}

#undef public_6d3a8f2
#undef public_6d3a90c
#undef public_6d3a96c
#undef public_6d3a96e
