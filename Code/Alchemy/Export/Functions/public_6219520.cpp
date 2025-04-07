#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219520);

PROC_DECLARE(0x6219520, internal_6219520, public_6219520);
extern "C" NAKED register_t __cdecl internal_6219520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xF0]
        xor eax, eax
        shl ecx, 2
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6219520)
    }
}
