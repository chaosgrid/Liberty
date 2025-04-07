#include "Content-PCH.h"

PROC_DECLARE(0x6f1ac50, internal_6f1ac50, public_6f1ac50);
extern "C" NAKED register_t __cdecl internal_6f1ac50()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3068]
        lea esi, ds:[ebx+0x20]
        mov ecx, esi
        call edi
        mov ecx, esi
        call edi
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        add ebx, 0x38
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3174]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1ac50)
    }
}
