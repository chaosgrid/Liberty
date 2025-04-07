#include "FLServer-PCH.h"

PROC_DECLARE(0x4197c6, internal_4197c6, public_4197c6);
extern "C" NAKED register_t __cdecl internal_4197c6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbb8]
        UNREACHABLE_TRAP(0x4197c6)
    }
}
