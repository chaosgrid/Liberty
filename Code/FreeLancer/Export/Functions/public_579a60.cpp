#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579a60);

PROC_DECLARE(0x579a60, internal_579a60, public_579a60);
extern "C" NAKED register_t __cdecl internal_579a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+0x400]
        mov dword ptr ds : [ecx+0x408], eax
        xor eax, eax
        test dl, dl
        setne al
        mov byte ptr ds : [ecx+0x400], al
        mov byte ptr ds : [ecx+0x401], 1
        ret 4
        UNREACHABLE_TRAP(0x579a60)
    }
}
