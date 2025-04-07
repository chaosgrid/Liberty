#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e070);

PROC_DECLARE(0x634e070, internal_634e070, public_634e070);
extern "C" NAKED register_t __cdecl internal_634e070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        sub eax, ecx
        mov word ptr ds : [ecx+0x18], ax
        mov dword ptr ds : [ecx+0x10], edx
        ret 8
        UNREACHABLE_TRAP(0x634e070)
    }
}
