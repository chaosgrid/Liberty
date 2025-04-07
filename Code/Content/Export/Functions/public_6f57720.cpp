#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57720);

PROC_DECLARE(0x6f57720, internal_6f57720, public_6f57720);
extern "C" NAKED register_t __cdecl internal_6f57720()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x120]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x124]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        ret 8
        UNREACHABLE_TRAP(0x6f57720)
    }
}
