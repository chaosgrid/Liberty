#include "Common-PCH.h"

PROC_DECLARE(0x62aba80, internal_62aba80, public_62aba80);
extern "C" NAKED register_t __cdecl internal_62aba80()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [ecx+0x158]
        add eax, edx
        add eax, dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x62aba80)
    }
}
