#include "Server-PCH.h"

PROC_DECLARE(0x6cef480, internal_6cef480, public_6cef480);
extern "C" NAKED register_t __cdecl internal_6cef480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65bb0]
        mov dword ptr ds : [public_6d8d754], eax
        ret 
        UNREACHABLE_TRAP(0x6cef480)
    }
}
