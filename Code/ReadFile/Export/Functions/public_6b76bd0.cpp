#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76bd0);

PROC_DECLARE(0x6b76bd0, internal_6b76bd0, public_6b76bd0);
extern "C" NAKED register_t __cdecl internal_6b76bd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6b76bd0)
    }
}
