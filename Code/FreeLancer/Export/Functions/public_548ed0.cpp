#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548ed0);

PROC_DECLARE(0x548ed0, internal_548ed0, public_548ed0);
extern "C" NAKED register_t __cdecl internal_548ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx edx, byte ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_67977c], ecx
        mov dword ptr ds : [public_679780], edx
        ret 
        UNREACHABLE_TRAP(0x548ed0)
    }
}
