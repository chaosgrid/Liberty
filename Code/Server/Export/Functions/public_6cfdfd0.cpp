#include "Server-PCH.h"

PROC_DECLARE(0x6cfdfd0, internal_6cfdfd0, public_6cfdfd0);
extern "C" NAKED register_t __cdecl internal_6cfdfd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66ee8]
        mov dword ptr ds : [public_6d8d8cc], eax
        ret 
        UNREACHABLE_TRAP(0x6cfdfd0)
    }
}
