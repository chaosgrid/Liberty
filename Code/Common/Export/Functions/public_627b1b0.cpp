#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);

PROC_DECLARE(0x627b1b0, internal_627b1b0, public_627b1b0);
extern "C" NAKED register_t __cdecl internal_627b1b0()
{
    __asm
    {
        xor edx, edx
        or eax, 0xFFFFFFFF
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], dl
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        mov byte ptr ds : [ecx+0x10], dl
        mov dword ptr ds : [ecx+0x20], eax
        ret 
        UNREACHABLE_TRAP(0x627b1b0)
    }
}
