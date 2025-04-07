#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81a70);

PROC_DECLARE(0x6f81a70, internal_6f81a70, public_6f81a70);
extern "C" NAKED register_t __cdecl internal_6f81a70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6f81a70)
    }
}
