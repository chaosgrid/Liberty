#include "Server-PCH.h"

PROC_DECLARE(0x6cef580, internal_6cef580, public_6cef580);
extern "C" NAKED register_t __cdecl internal_6cef580()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6d65d4c
        mov dword ptr ds : [eax+4], offset public_6d65d44
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6d65bcc
        mov dword ptr ds : [eax+4], offset public_6d65bc4
        ret 4
        UNREACHABLE_TRAP(0x6cef580)
    }
}
