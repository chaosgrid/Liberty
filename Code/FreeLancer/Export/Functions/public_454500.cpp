#include "FreeLancer-PCH.h"

PROC_DECLARE(0x454500, internal_454500, public_454500);
extern "C" NAKED register_t __cdecl internal_454500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+8]
        xor ecx, ecx
        mov ch, byte ptr ds : [eax]
        and edx, 0xFF
        mov cl, byte ptr ds : [eax+4]
        xor eax, eax
        shl ecx, 8
        or ecx, edx
        mov dword ptr ds : [public_66d2ac], ecx
        ret 8
        UNREACHABLE_TRAP(0x454500)
    }
}
