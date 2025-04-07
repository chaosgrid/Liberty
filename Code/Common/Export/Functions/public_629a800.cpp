#include "Common-PCH.h"

PROC_DECLARE(0x629a800, internal_629a800, public_629a800);
extern "C" NAKED register_t __cdecl internal_629a800()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        mov ecx, eax
        and ecx, 0xC40
        xor edx, edx
        cmp eax, ecx
        sete dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x629a800)
    }
}
