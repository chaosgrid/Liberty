#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c265f0);

PROC_DECLARE(0x6c265f0, internal_6c265f0, public_6c265f0);
extern "C" NAKED register_t __cdecl internal_6c265f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1E4]
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        test eax, eax
        setne dl
        mov dword ptr ds : [ecx], eax
        mov al, dl
        ret 4
        UNREACHABLE_TRAP(0x6c265f0)
    }
}
