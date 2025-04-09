#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_507e70);

PROC_DECLARE(0x507e70, internal_507e70, public_507e70);
extern "C" NAKED register_t __cdecl internal_507e70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        sar eax, 1
        mov ecx, 0x5F3759DF
        sub ecx, eax
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x507e70)
    }
}
