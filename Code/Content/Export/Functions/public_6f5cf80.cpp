#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cf80);

PROC_DECLARE(0x6f5cf80, internal_6f5cf80, public_6f5cf80);
extern "C" NAKED register_t __cdecl internal_6f5cf80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [edx+4]
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x6f5cf80)
    }
}
