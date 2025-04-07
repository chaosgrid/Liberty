#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd62, internal_6d5fd62, public_6d5fd62);
extern "C" NAKED register_t __cdecl internal_6d5fd62()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64078]
        UNREACHABLE_TRAP(0x6d5fd62)
    }
}
