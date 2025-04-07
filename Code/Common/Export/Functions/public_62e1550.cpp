#include "Common-PCH.h"

PROC_DECLARE(0x62e1550, internal_62e1550, public_62e1550);
extern "C" NAKED register_t __cdecl internal_62e1550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        ret 0x10
        UNREACHABLE_TRAP(0x62e1550)
    }
}
