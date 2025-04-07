#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);

PROC_DECLARE(0x620b3f0, internal_620b3f0, public_620b3f0);
extern "C" NAKED register_t __cdecl internal_620b3f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x620b3f0)
    }
}
