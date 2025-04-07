#include "Server-PCH.h"

PROC_DECLARE(0x6cef560, internal_6cef560, public_6cef560);
extern "C" NAKED register_t __cdecl internal_6cef560()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6d65d44
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6d65bcc
        mov dword ptr ds : [eax+4], offset public_6d65bc4
        ret 
        UNREACHABLE_TRAP(0x6cef560)
    }
}
