#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31b70);

PROC_DECLARE(0x6d31b70, internal_6d31b70, public_6d31b70);
extern "C" NAKED register_t __cdecl internal_6d31b70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x6d31b70)
    }
}
