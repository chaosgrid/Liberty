#include "Server-PCH.h"


#define public_6d39cba _public_6d39cba
#define public_6d39d1a _public_6d39d1a
#define public_6d39d1c _public_6d39d1c

PROC_DECLARE(0x6d39c60, internal_6d39c60, public_6d39c60);
extern "C" NAKED register_t __cdecl internal_6d39c60()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        sub edx, 4
        push edi
        mov edi, dword ptr ds : [edx]
        cmp ebx, edi
        je public_6d39cba
        dec edi
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edx+4]
        shl eax, 5
        mov edi, dword ptr ds : [eax+ebx]
        mov edx, dword ptr ds : [eax+ebx+4]
        add eax, ebx
        mov eax, dword ptr ds : [esi+0x10]
        sub edx, edi
        sar edx, 1
        neg edx
        shl edx, 1
        add eax, edx
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d39cba : nop
        mov edi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d39d1a
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
        jmp public_6d39d1c
        public_6d39d1a : nop
        mov eax, ecx
        public_6d39d1c : nop
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
        UNREACHABLE_TRAP(0x6d39c60)
    }
}

#undef public_6d39cba
#undef public_6d39d1a
#undef public_6d39d1c
