#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ea50);

PROC_DECLARE(0x620ea50, internal_620ea50, public_620ea50);
extern "C" NAKED register_t __cdecl internal_620ea50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620ea50)
    }
}
