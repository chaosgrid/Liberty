#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1c50);

PROC_DECLARE(0x5a1c50, internal_5a1c50, public_5a1c50);
extern "C" NAKED register_t __cdecl internal_5a1c50()
{
    __asm
    {
        xor eax, eax
        mov dl, 1
        mov byte ptr ds : [ecx+0xE0], al
        mov byte ptr ds : [ecx+0xE3], al
        mov byte ptr ds : [ecx+0xE1], al
        mov byte ptr ds : [ecx+0xE2], dl
        mov byte ptr ds : [ecx+0xE6], dl
        mov dword ptr ds : [ecx+0xE8], eax
        mov eax, dword ptr ds : [public_5e5f88]
        mov dword ptr ds : [ecx+0xB0], eax
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ecx+0xCC], edx
        mov eax, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [ecx+0xD0], eax
        mov edx, dword ptr ds : [public_679b94]
        mov dword ptr ds : [ecx+0xDC], edx
        ret 
        UNREACHABLE_TRAP(0x5a1c50)
    }
}
