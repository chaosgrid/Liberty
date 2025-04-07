#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f50);

PROC_DECLARE(0x6eb5f50, internal_6eb5f50, public_6eb5f50);
extern "C" NAKED register_t __cdecl internal_6eb5f50()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3068]
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        lea edi, ds:[esi+0xC]
        mov ecx, edi
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+4], bl
        mov byte ptr ds : [esi+5], bl
        mov dword ptr ds : [esi+8], ebx
        call ebp
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x24]
        mov ecx, edi
        call ebp
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        call ebp
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb5f50)
    }
}
