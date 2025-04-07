#include "Common-PCH.h"

PROC_DECLARE(0x627bde0, internal_627bde0, public_627bde0);
extern "C" NAKED register_t __cdecl internal_627bde0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], offset public_639b59c
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+4], eax
        mov byte ptr ds : [ecx+0xC], al
        ret 
        UNREACHABLE_TRAP(0x627bde0)
    }
}
