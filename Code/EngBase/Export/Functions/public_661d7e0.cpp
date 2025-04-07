#include "EngBase-PCH.h"

PROC_DECLARE(0x661d7e0, internal_661d7e0, public_661d7e0);
extern "C" NAKED register_t __cdecl internal_661d7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x661d7e0)
    }
}
