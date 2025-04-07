#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b0d0);

PROC_DECLARE(0x630b0d0, internal_630b0d0, public_630b0d0);
extern "C" NAKED register_t __cdecl internal_630b0d0()
{
    __asm
    {
        xor al, al
        mov dword ptr ds : [ecx+8], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0xC], 0x64
        mov byte ptr ds : [ecx+0x10], al
        mov byte ptr ds : [ecx+0x11], al
        mov byte ptr ds : [ecx+0x12], al
        mov byte ptr ds : [ecx+4], 1
        ret 
        UNREACHABLE_TRAP(0x630b0d0)
    }
}
