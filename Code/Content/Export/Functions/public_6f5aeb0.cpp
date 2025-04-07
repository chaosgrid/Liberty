#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5aeb0);

PROC_DECLARE(0x6f5aeb0, internal_6f5aeb0, public_6f5aeb0);
extern "C" NAKED register_t __cdecl internal_6f5aeb0()
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
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f5aeb0)
    }
}
