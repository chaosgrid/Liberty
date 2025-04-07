#include "Server-PCH.h"


#define public_6d2b459 _public_6d2b459

PROC_DECLARE(0x6d2b440, internal_6d2b440, public_6d2b440);
extern "C" NAKED register_t __cdecl internal_6d2b440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        cmp edx, ecx
        jne public_6d2b459
        xor al, al
        ret 4
        public_6d2b459 : nop
        add ecx, 2
        mov dword ptr ds : [eax+0x10], ecx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d2b440)
    }
}

#undef public_6d2b459
