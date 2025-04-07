#include "FLServer-PCH.h"

PROC_DECLARE(0x414480, internal_414480, public_414480);
extern "C" NAKED register_t __cdecl internal_414480()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414480)
    }
}
