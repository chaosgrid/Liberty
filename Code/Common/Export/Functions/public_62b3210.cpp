#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3210);
CLANG_FORWARD_PROC_SYMBOL(public_62b3220);

PROC_DECLARE(0x62b3210, internal_62b3210, public_62b3210);
extern "C" NAKED register_t __cdecl internal_62b3210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], eax
        jmp public_62b3220
        UNREACHABLE_TRAP(0x62b3210)
    }
}
