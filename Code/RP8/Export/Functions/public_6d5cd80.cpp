#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cd80);

PROC_DECLARE(0x6d5cd80, internal_6d5cd80, public_6d5cd80);
extern "C" NAKED register_t __cdecl internal_6d5cd80()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e020]
        UNREACHABLE_TRAP(0x6d5cd80)
    }
}
