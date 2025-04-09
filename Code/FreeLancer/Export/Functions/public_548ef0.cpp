#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548ef0);

PROC_DECLARE(0x548ef0, internal_548ef0, public_548ef0);
extern "C" NAKED register_t __cdecl internal_548ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_679784], ecx
        ret 
        UNREACHABLE_TRAP(0x548ef0)
    }
}
