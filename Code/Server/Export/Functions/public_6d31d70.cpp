#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31d70);

PROC_DECLARE(0x6d31d70, internal_6d31d70, public_6d31d70);
extern "C" NAKED register_t __cdecl internal_6d31d70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        sub ecx, edx
        sar ecx, 1
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_6d69d20
        ret 8
        UNREACHABLE_TRAP(0x6d31d70)
    }
}
