#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d31e);

PROC_DECLARE(0x6d4d31e, internal_6d4d31e, public_6d4d31e);
extern "C" NAKED register_t __cdecl internal_6d4d31e()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x19C]
        and byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [eax+0x2C], ecx
        ret 
        UNREACHABLE_TRAP(0x6d4d31e)
    }
}
