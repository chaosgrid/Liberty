#include "THORN-PCH.h"

PROC_DECLARE(0x6f3b860, internal_6f3b860, public_6f3b860);
extern "C" NAKED register_t __cdecl internal_6f3b860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 0x54
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f3b860)
    }
}
