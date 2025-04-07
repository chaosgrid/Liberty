#include "Server-PCH.h"


#define public_6d39850 _public_6d39850
#define public_6d3986b _public_6d3986b
#define public_6d39882 _public_6d39882
#define public_6d398e2 _public_6d398e2
#define public_6d398e4 _public_6d398e4

PROC_DECLARE(0x6d39800, internal_6d39800, public_6d39800);
extern "C" NAKED register_t __cdecl internal_6d39800()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [ecx-4]
        mov esi, dword ptr ds : [edi+0x10]
        sub ecx, 4
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        je public_6d39882
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+0x18], esi
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi+4]
        shl edx, 5
        add edx, esi
        cmp byte ptr ds : [edx+8], 0
        je public_6d39882
        mov esi, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edx+4]
        cmp esi, ebp
        mov edx, dword ptr ds : [ebx+0x10]
        je public_6d3986b
        nop 
        public_6d39850 : nop
        mov di, word ptr ds : [edx]
        test di, di
        je public_6d39882
        cmp di, word ptr ds : [esi]
        jne public_6d39882
        add esi, 2
        add edx, 2
        cmp esi, ebp
        jne public_6d39850
        mov edi, dword ptr ss : [esp+0x10]
        public_6d3986b : nop
        mov dword ptr ds : [ebx+0x10], edx
        inc dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d39882 : nop
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d398e2
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
        jmp public_6d398e4
        public_6d398e2 : nop
        mov eax, ecx
        public_6d398e4 : nop
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
        UNREACHABLE_TRAP(0x6d39800)
    }
}

#undef public_6d39850
#undef public_6d3986b
#undef public_6d39882
#undef public_6d398e2
#undef public_6d398e4
