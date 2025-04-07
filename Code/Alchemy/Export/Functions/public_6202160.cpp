#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202160, internal_6202160, public_6202160);
extern "C" NAKED register_t __cdecl internal_6202160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_62578b0]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6202160)
    }
}
