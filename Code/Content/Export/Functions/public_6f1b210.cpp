#include "Content-PCH.h"

PROC_DECLARE(0x6f1b210, internal_6f1b210, public_6f1b210);
extern "C" NAKED register_t __cdecl internal_6f1b210()
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
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ds : [ebx+0x38]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3148]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1b210)
    }
}
