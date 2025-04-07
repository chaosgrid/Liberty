#include "Server-PCH.h"


#define public_6d39077 _public_6d39077
#define public_6d390b6 _public_6d390b6
#define public_6d390d0 _public_6d390d0
#define public_6d39133 _public_6d39133
#define public_6d39135 _public_6d39135

PROC_DECLARE(0x6d39020, internal_6d39020, public_6d39020);
extern "C" NAKED register_t __cdecl internal_6d39020()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        push ebx
        mov ebx, dword ptr ds : [eax+0x1008]
        mov eax, dword ptr ds : [ebx-4]
        push ebp
        sub ebx, 4
        push esi
        cmp eax, dword ptr ds : [ecx+0x10]
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d390d0
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+0x18], esi
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi+4]
        shl eax, 5
        add eax, esi
        cmp byte ptr ds : [eax+8], 0
        je public_6d390d0
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov edi, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d390b6
        public_6d39077 : nop
        cmp dword ptr ds : [edx+0xC], edi
        je public_6d390d0
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 8
        cmp ax, bp
        jne public_6d390d0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d39077
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        public_6d390b6 : nop
        mov dword ptr ds : [edx+0x10], edi
        mov eax, dword ptr ds : [ebx]
        pop edi
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [ecx+4]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x18], ecx
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_6d390d0 : nop
        mov eax, dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d39133
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
        jmp public_6d39135
        public_6d39133 : nop
        mov eax, ecx
        public_6d39135 : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [edx+0x10], ecx
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d39020)
    }
}

#undef public_6d39077
#undef public_6d390b6
#undef public_6d390d0
#undef public_6d39133
#undef public_6d39135
