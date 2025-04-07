#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177f0);

PROC_DECLARE(0x4177f0, internal_4177f0, public_4177f0);
extern "C" NAKED register_t __cdecl internal_4177f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x4177f0)
    }
}
