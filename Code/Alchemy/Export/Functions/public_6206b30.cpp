#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206b30);

PROC_DECLARE(0x6206b30, internal_6206b30, public_6206b30);
extern "C" NAKED register_t __cdecl internal_6206b30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, 0x5F3759DF
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6206b30)
    }
}
