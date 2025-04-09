#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d730);

PROC_DECLARE(0x42d730, internal_42d730, public_42d730);
extern "C" NAKED register_t __cdecl internal_42d730()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_667d54]
        xor eax, eax
        test ecx, ecx
        setg al
        ret 
        UNREACHABLE_TRAP(0x42d730)
    }
}
