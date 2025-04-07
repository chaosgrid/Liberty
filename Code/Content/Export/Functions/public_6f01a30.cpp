#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01a30);

PROC_DECLARE(0x6f01a30, internal_6f01a30, public_6f01a30);
extern "C" NAKED register_t __cdecl internal_6f01a30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6fb303c]
        push esi
        push edi
        lea esi, ds:[ebx+0x240]
        push 0x3EFE
        mov ecx, esi
        call ebp
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb307c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        lea esi, ds:[ebx+0x228]
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, 0x3EFD
        push eax
        mov ecx, esi
        call ebp
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb307c]
        mov edx, dword ptr ds : [edi]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb3148]
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        jmp dword ptr ds : [public_6fb3038]
        UNREACHABLE_TRAP(0x6f01a30)
    }
}
