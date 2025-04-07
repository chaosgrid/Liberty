#include "Server-PCH.h"

PROC_DECLARE(0x6cef5b0, internal_6cef5b0, public_6cef5b0);
extern "C" NAKED register_t __cdecl internal_6cef5b0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x6cef5b0)
    }
}
