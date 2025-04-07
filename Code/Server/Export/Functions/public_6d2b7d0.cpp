#include "Server-PCH.h"


#define public_6d2b7e8 _public_6d2b7e8

PROC_DECLARE(0x6d2b7d0, internal_6d2b7d0, public_6d2b7d0);
extern "C" NAKED register_t __cdecl internal_6d2b7d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        cmp word ptr ds : [ecx], 0
        jne public_6d2b7e8
        xor al, al
        ret 4
        public_6d2b7e8 : nop
        add ecx, 2
        mov dword ptr ds : [eax+0x10], ecx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d2b7d0)
    }
}

#undef public_6d2b7e8
