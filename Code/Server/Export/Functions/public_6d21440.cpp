#include "Server-PCH.h"


#define public_6d21469 _public_6d21469

PROC_DECLARE(0x6d21440, internal_6d21440, public_6d21440);
extern "C" NAKED register_t __cdecl internal_6d21440()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d21469
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+8]
        shl eax, 5
        add eax, ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+8], 1
        public_6d21469 : nop
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d21440)
    }
}

#undef public_6d21469
