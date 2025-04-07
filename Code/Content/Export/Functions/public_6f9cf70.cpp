#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9cf70);

PROC_DECLARE(0x6f9cf70, internal_6f9cf70, public_6f9cf70);
extern "C" NAKED register_t __cdecl internal_6f9cf70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6fbd3f0
        ret 4
        UNREACHABLE_TRAP(0x6f9cf70)
    }
}
