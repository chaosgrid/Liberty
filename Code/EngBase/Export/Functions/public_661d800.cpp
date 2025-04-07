#include "EngBase-PCH.h"

PROC_DECLARE(0x661d800, internal_661d800, public_661d800);
extern "C" NAKED register_t __cdecl internal_661d800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x18]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x661d800)
    }
}
