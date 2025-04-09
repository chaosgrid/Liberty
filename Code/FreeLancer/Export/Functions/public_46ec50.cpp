#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ec50);

PROC_DECLARE(0x46ec50, internal_46ec50, public_46ec50);
extern "C" NAKED register_t __cdecl internal_46ec50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x46ec50)
    }
}
