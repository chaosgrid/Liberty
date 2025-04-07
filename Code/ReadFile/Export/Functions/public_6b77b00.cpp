#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77b00);

PROC_DECLARE(0x6b77b00, internal_6b77b00, public_6b77b00);
extern "C" NAKED register_t __cdecl internal_6b77b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x128]
        inc ecx
        mov dword ptr ds : [eax+0x128], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b77b00)
    }
}
