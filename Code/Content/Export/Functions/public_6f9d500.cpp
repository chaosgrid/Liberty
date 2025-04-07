#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9d500);

PROC_DECLARE(0x6f9d500, internal_6f9d500, public_6f9d500);
extern "C" NAKED register_t __cdecl internal_6f9d500()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6fbd3f0
        ret 8
        UNREACHABLE_TRAP(0x6f9d500)
    }
}
