#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6265900);
CLANG_FORWARD_PROC_SYMBOL(public_6266270);

PROC_DECLARE(0x6266270, internal_6266270, public_6266270);
extern "C" NAKED register_t __cdecl internal_6266270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_63fbb70]
        push eax
        call public_6265900
        ret 
        UNREACHABLE_TRAP(0x6266270)
    }
}
