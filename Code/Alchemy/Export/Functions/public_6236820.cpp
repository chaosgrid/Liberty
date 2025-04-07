#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236820);

PROC_DECLARE(0x6236820, internal_6236820, public_6236820);
extern "C" NAKED register_t __cdecl internal_6236820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x30]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6236820)
    }
}
