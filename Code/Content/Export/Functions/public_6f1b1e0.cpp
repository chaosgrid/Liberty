#include "Content-PCH.h"

PROC_DECLARE(0x6f1b1e0, internal_6f1b1e0, public_6f1b1e0);
extern "C" NAKED register_t __cdecl internal_6f1b1e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        lea esi, ds:[ebx+0x20]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        add ebx, 0x38
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3088]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1b1e0)
    }
}
