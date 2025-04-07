#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ee0);

PROC_DECLARE(0x403ee0, internal_403ee0, public_403ee0);
extern "C" NAKED register_t __cdecl internal_403ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x403ee0)
    }
}
