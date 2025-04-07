#include "Server-PCH.h"


#define public_6d34a51 _public_6d34a51
#define public_6d34ab1 _public_6d34ab1
#define public_6d34ab3 _public_6d34ab3

PROC_DECLARE(0x6d34a00, internal_6d34a00, public_6d34a00);
extern "C" NAKED register_t __cdecl internal_6d34a00()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        sub edx, 4
        push edi
        mov edi, dword ptr ds : [edx]
        cmp edi, ebx
        je public_6d34a51
        mov edi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], edi
        mov edi, dword ptr ds : [esi+0x10]
        cmp ebx, edi
        je public_6d34a51
        cmp word ptr ds : [edi], 0xA
        je public_6d34a51
        add edi, 2
        mov dword ptr ds : [esi+0x10], edi
        inc dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d34a51 : nop
        mov edi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d34ab1
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
        jmp public_6d34ab3
        public_6d34ab1 : nop
        mov eax, ecx
        public_6d34ab3 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d34a00)
    }
}

#undef public_6d34a51
#undef public_6d34ab1
#undef public_6d34ab3
