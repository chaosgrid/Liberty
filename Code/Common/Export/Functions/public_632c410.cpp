#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c410);

PROC_DECLARE(0x632c410, internal_632c410, public_632c410);
extern "C" NAKED register_t __cdecl internal_632c410()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x632c410)
    }
}
