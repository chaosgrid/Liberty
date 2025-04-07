#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360e30);

PROC_DECLARE(0x6360e30, internal_6360e30, public_6360e30);
extern "C" NAKED register_t __cdecl internal_6360e30()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a577c
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0x44FA0000
        mov dword ptr ds : [eax+0x10], 0x3FC90FDB
        mov dword ptr ds : [eax+0xC], 0x11170
        ret 4
        UNREACHABLE_TRAP(0x6360e30)
    }
}
