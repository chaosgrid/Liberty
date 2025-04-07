#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

PROC_DECLARE(0x632ca20, internal_632ca20, public_632ca20);
extern "C" NAKED register_t __cdecl internal_632ca20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x632ca20)
    }
}
