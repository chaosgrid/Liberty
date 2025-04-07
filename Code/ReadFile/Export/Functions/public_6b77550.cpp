#include "ReadFile-PCH.h"


#define public_6b77570 _public_6b77570

PROC_DECLARE(0x6b77550, internal_6b77550, public_6b77550);
extern "C" NAKED register_t __cdecl internal_6b77550()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        jne public_6b77570
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [eax+0x1C]
        je public_6b77570
        mov dword ptr ds : [ecx], 0
        public_6b77570 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b77550)
    }
}

#undef public_6b77570
