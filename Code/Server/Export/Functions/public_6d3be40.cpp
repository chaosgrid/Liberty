#include "Server-PCH.h"


#define public_6d3be85 _public_6d3be85
#define public_6d3be98 _public_6d3be98
#define public_6d3bea2 _public_6d3bea2
#define public_6d3bec4 _public_6d3bec4
#define public_6d3bf22 _public_6d3bf22

PROC_DECLARE(0x6d3be40, internal_6d3be40, public_6d3be40);
extern "C" NAKED register_t __cdecl internal_6d3be40()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [edx+0x1008]
        sub eax, 4
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3bec4
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edi, ecx
        mov esi, dword ptr ds : [ebx+0x10]
        mov ebp, dword ptr ds : [eax+0x18]
        je public_6d3bea2
        mov eax, edi
        sub ebp, edi
        public_6d3be85 : nop
        cmp dword ptr ds : [ebx+0xC], esi
        je public_6d3bec4
        mov di, word ptr ds : [esi]
        cmp word ptr ds : [eax], di
        je public_6d3be98
        cmp word ptr ds : [eax+ebp], di
        jne public_6d3bec4
        public_6d3be98 : nop
        add eax, 2
        add esi, 2
        cmp eax, ecx
        jne public_6d3be85
        public_6d3bea2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x10], esi
        mov ecx, dword ptr ds : [eax]
        pop edi
        inc ecx
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edx+4]
        pop esi
        mov dword ptr ds : [ebx+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3bec4 : nop
        mov esi, dword ptr ds : [edx+0x1008]
        mov ecx, dword ptr ds : [edx+0x1004]
        add esi, 0xFFFFFFF8
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [edx+0x1008], esi
        jne public_6d3bf22
        mov ecx, dword ptr ds : [edx+0x1000]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [edx+0x1000]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx+0x1000], eax
        add eax, 0x10
        mov dword ptr ds : [edx+0x1004], eax
        mov eax, dword ptr ds : [edx+0x1000]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+0x1008], eax
        mov eax, dword ptr ds : [edx+0x1000]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0x100C], eax
        mov eax, ecx
        public_6d3bf22 : nop
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
        UNREACHABLE_TRAP(0x6d3be40)
    }
}

#undef public_6d3be85
#undef public_6d3be98
#undef public_6d3bea2
#undef public_6d3bec4
#undef public_6d3bf22
