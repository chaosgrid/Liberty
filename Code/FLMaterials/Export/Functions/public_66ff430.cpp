#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff430);

PROC_DECLARE(0x66ff430, internal_66ff430, public_66ff430);
extern "C" NAKED register_t __cdecl internal_66ff430()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x58]
        xor eax, eax
        and dl, 0xF8
        mov dword ptr ds : [ecx+0x24], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+0x5C], eax
        mov byte ptr ds : [ecx+0x58], dl
        mov dword ptr ds : [ecx+0x68], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x64], eax
        mov dword ptr ds : [ecx+0x60], eax
        mov dword ptr ds : [ecx], 0x7FFFFFFF
        ret 
        UNREACHABLE_TRAP(0x66ff430)
    }
}
