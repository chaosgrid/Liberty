#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81160, internal_6d81160, public_6d81160);
extern "C" NAKED register_t __cdecl internal_6d81160()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x6d81160)
    }
}
