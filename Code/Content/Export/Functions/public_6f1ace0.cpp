#include "Content-PCH.h"

PROC_DECLARE(0x6f1ace0, internal_6f1ace0, public_6f1ace0);
extern "C" NAKED register_t __cdecl internal_6f1ace0()
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
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb307c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1ace0)
    }
}
