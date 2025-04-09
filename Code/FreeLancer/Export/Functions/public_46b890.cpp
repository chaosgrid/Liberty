#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b890);
CLANG_FORWARD_PROC_SYMBOL(public_46b8b0);

PROC_DECLARE(0x46b890, internal_46b890, public_46b890);
extern "C" NAKED register_t __cdecl internal_46b890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_66da78]
        push eax
        call public_46b8b0
        ret 
        UNREACHABLE_TRAP(0x46b890)
    }
}
