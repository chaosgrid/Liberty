#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);

PROC_DECLARE(0x6343f70, internal_6343f70, public_6343f70);
extern "C" NAKED register_t __cdecl internal_6343f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6399328]
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6343f70)
    }
}
