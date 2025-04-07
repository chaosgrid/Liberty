#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636cf40);

PROC_DECLARE(0x636cf40, internal_636cf40, public_636cf40);
extern "C" NAKED register_t __cdecl internal_636cf40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        ret 0xC
        UNREACHABLE_TRAP(0x636cf40)
    }
}
