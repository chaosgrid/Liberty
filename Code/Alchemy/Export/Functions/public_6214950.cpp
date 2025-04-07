#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214950, internal_6214950, public_6214950);
extern "C" NAKED register_t __cdecl internal_6214950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6214950)
    }
}
