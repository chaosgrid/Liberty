#include "Common-PCH.h"

PROC_DECLARE(0x6286050, internal_6286050, public_6286050);
extern "C" NAKED register_t __cdecl internal_6286050()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [ecx], al
        xor eax, eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6286050)
    }
}
