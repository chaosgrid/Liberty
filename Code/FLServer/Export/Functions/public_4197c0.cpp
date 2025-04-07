#include "FLServer-PCH.h"

PROC_DECLARE(0x4197c0, internal_4197c0, public_4197c0);
extern "C" NAKED register_t __cdecl internal_4197c0()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbb4]
        UNREACHABLE_TRAP(0x4197c0)
    }
}
