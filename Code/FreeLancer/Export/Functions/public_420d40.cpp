#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);

PROC_DECLARE(0x420d40, internal_420d40, public_420d40);
extern "C" NAKED register_t __cdecl internal_420d40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_5c9694
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x420d40)
    }
}
