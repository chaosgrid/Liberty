#include "Server-PCH.h"


#define public_6d22dd9 _public_6d22dd9
#define public_6d22ddb _public_6d22ddb

PROC_DECLARE(0x6d22d60, internal_6d22d60, public_6d22d60);
extern "C" NAKED register_t __cdecl internal_6d22d60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x14]
        push esi
        mov esi, dword ptr ds : [edx+4]
        push edi
        mov edi, dword ptr ds : [eax+0x1008]
        shl ecx, 5
        add edi, 0xFFFFFFF0
        add ecx, esi
        mov esi, dword ptr ds : [eax+0x1004]
        mov edx, edi
        cmp edx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d22dd9
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+0x1000], edx
        add edx, 0x10
        mov dword ptr ds : [eax+0x1004], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+0x1008], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0x100C], edx
        mov eax, esi
        jmp public_6d22ddb
        public_6d22dd9 : nop
        mov eax, edx
        public_6d22ddb : nop
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x18], edi
        pop edi
        mov dword ptr ds : [ecx+0x10], esi
        mov dword ptr ds : [ecx+0x1C], eax
        mov byte ptr ds : [ecx+0x14], dl
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d22d60)
    }
}

#undef public_6d22dd9
#undef public_6d22ddb
