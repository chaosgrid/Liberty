#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219370);

PROC_DECLARE(0x6219370, internal_6219370, public_6219370);
extern "C" NAKED register_t __cdecl internal_6219370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA2]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6219370)
    }
}
