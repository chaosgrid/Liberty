#include "Server-PCH.h"


#define public_6d3a41c _public_6d3a41c
#define public_6d3a47f _public_6d3a47f
#define public_6d3a481 _public_6d3a481

PROC_DECLARE(0x6d3a3d0, internal_6d3a3d0, public_6d3a3d0);
extern "C" NAKED register_t __cdecl internal_6d3a3d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ds : [eax+0x1008]
        mov ebx, ecx
        mov ecx, dword ptr ds : [edi-4]
        mov eax, dword ptr ds : [ebx+0x10]
        sub edi, 4
        cmp ecx, eax
        je public_6d3a41c
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x10]
        push edx
        push esi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3a41c
        inc dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3a41c : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d3a47f
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
        jmp public_6d3a481
        public_6d3a47f : nop
        mov eax, ecx
        public_6d3a481 : nop
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
        UNREACHABLE_TRAP(0x6d3a3d0)
    }
}

#undef public_6d3a41c
#undef public_6d3a47f
#undef public_6d3a481
