#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ccd0);

PROC_DECLARE(0x634ccd0, internal_634ccd0, public_634ccd0);
extern "C" NAKED register_t __cdecl internal_634ccd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x110]
        mov edx, dword ptr ss : [esp+8]
        inc eax
        mov dword ptr ds : [ecx+0x110], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xF8], eax
        mov dword ptr ds : [ecx+0xFC], edx
        ret 8
        UNREACHABLE_TRAP(0x634ccd0)
    }
}
