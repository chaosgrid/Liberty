#include "Server-PCH.h"


#define public_6d24b38 _public_6d24b38

PROC_DECLARE(0x6d24ae0, internal_6d24ae0, public_6d24ae0);
extern "C" NAKED register_t __cdecl internal_6d24ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add ecx, 0xFFFFFFFC
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], ecx
        jne public_6d24b38
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        mov edx, dword ptr ds : [eax+0x1000]
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        public_6d24b38 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6d24ae0)
    }
}

#undef public_6d24b38
