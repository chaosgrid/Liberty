#include "Server-PCH.h"


#define public_6d247b4 _public_6d247b4

PROC_DECLARE(0x6d24750, internal_6d24750, public_6d24750);
extern "C" NAKED register_t __cdecl internal_6d24750()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add ecx, 0xFFFFFFFC
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], ecx
        jne public_6d247b4
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
        mov ecx, edx
        public_6d247b4 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x10], edx
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24750)
    }
}

#undef public_6d247b4
