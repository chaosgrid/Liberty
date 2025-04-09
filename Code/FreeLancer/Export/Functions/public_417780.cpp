#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417780);

PROC_DECLARE(0x417780, internal_417780, public_417780);
extern "C" NAKED register_t __cdecl internal_417780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_616674], ecx
        ret 
        UNREACHABLE_TRAP(0x417780)
    }
}
