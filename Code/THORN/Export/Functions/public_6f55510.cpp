#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55510);

PROC_DECLARE(0x6f55510, internal_6f55510, public_6f55510);
extern "C" NAKED register_t __cdecl internal_6f55510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x28], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x20], edx
        ret 
        UNREACHABLE_TRAP(0x6f55510)
    }
}
