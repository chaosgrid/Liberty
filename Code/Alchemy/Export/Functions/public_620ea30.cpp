#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ea30);

PROC_DECLARE(0x620ea30, internal_620ea30, public_620ea30);
extern "C" NAKED register_t __cdecl internal_620ea30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x620ea30)
    }
}
