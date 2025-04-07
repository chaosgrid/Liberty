#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239910);

PROC_DECLARE(0x6239910, internal_6239910, public_6239910);
extern "C" NAKED register_t __cdecl internal_6239910()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6239910)
    }
}
