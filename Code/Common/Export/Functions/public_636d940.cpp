#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d940);

PROC_DECLARE(0x636d940, internal_636d940, public_636d940);
extern "C" NAKED register_t __cdecl internal_636d940()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x636d940)
    }
}
