#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

PROC_DECLARE(0x59dab0, internal_59dab0, public_59dab0);
extern "C" NAKED register_t __cdecl internal_59dab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_67dcec]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [public_67dcec], eax
        ret 
        UNREACHABLE_TRAP(0x59dab0)
    }
}
