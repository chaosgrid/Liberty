#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661acd0);

PROC_DECLARE(0x661acd0, internal_661acd0, public_661acd0);
extern "C" NAKED register_t __cdecl internal_661acd0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x34]
        xor eax, eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov dword ptr ds : [ecx+0x20], eax
        mov eax, 0x3F800000
        and edx, 0xFFFFFFF8
        mov dword ptr ds : [ecx+0x28], eax
        mov dword ptr ds : [ecx+0x2C], eax
        mov dword ptr ds : [ecx+0x34], edx
        mov dword ptr ds : [ecx+0x30], eax
        ret 
        UNREACHABLE_TRAP(0x661acd0)
    }
}
