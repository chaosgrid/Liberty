#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62dc3e0);

PROC_DECLARE(0x62dc3e0, internal_62dc3e0, public_62dc3e0);
extern "C" NAKED register_t __cdecl internal_62dc3e0()
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
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62dc3e0)
    }
}
