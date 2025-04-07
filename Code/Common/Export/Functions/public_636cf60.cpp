#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636cf60);

PROC_DECLARE(0x636cf60, internal_636cf60, public_636cf60);
extern "C" NAKED register_t __cdecl internal_636cf60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        ret 8
        UNREACHABLE_TRAP(0x636cf60)
    }
}
