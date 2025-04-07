#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4afc0);

PROC_DECLARE(0x6f4afc0, internal_6f4afc0, public_6f4afc0);
extern "C" NAKED register_t __cdecl internal_6f4afc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x14]
        ret 
        UNREACHABLE_TRAP(0x6f4afc0)
    }
}
