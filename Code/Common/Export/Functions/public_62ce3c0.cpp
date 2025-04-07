#include "Common-PCH.h"


#define public_62ce3d1 _public_62ce3d1

PROC_DECLARE(0x62ce3c0, internal_62ce3c0, public_62ce3c0);
extern "C" NAKED register_t __cdecl internal_62ce3c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x29]
        test al, al
        mov eax, 3
        jne public_62ce3d1
        mov eax, 1
        public_62ce3d1 : nop
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62ce3c0)
    }
}

#undef public_62ce3d1
