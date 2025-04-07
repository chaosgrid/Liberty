#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d09b0);

PROC_DECLARE(0x62d09b0, internal_62d09b0, public_62d09b0);
extern "C" NAKED register_t __cdecl internal_62d09b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x80], eax
        xor al, al
        mov dword ptr ds : [ecx+0x84], edx
        mov byte ptr ds : [ecx+0x7D], al
        mov byte ptr ds : [ecx+0x7C], al
        mov byte ptr ds : [ecx+0x7E], al
        mov byte ptr ds : [ecx+0x7F], al
        ret 8
        UNREACHABLE_TRAP(0x62d09b0)
    }
}
