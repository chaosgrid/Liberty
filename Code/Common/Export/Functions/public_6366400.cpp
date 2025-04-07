#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366400);

PROC_DECLARE(0x6366400, internal_6366400, public_6366400);
extern "C" NAKED register_t __cdecl internal_6366400()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0x3089705F
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x6366400)
    }
}
