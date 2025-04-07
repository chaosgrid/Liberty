#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31430);

PROC_DECLARE(0x6f31430, internal_6f31430, public_6f31430);
extern "C" NAKED register_t __cdecl internal_6f31430()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], edi
        call ebx
        lea ecx, ds:[esi+0xC]
        call ebx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x40], edi
        lea ecx, ds:[esi+0x48]
        mov dword ptr ds : [esi+0x44], edi
        call ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f31430)
    }
}
