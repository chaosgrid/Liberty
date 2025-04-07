#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346960);

PROC_DECLARE(0x6346960, internal_6346960, public_6346960);
extern "C" NAKED register_t __cdecl internal_6346960()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x78], eax
        mov dword ptr ds : [ecx+0x7C], eax
        mov dword ptr ds : [ecx+0x84], eax
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+0x8C], eax
        ret 
        UNREACHABLE_TRAP(0x6346960)
    }
}
