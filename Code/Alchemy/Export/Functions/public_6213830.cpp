#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213830);

PROC_DECLARE(0x6213830, internal_6213830, public_6213830);
extern "C" NAKED register_t __cdecl internal_6213830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6213830)
    }
}
