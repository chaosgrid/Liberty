#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04ab0);

PROC_DECLARE(0x6f04ab0, internal_6f04ab0, public_6f04ab0);
extern "C" NAKED register_t __cdecl internal_6f04ab0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3068]
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        lea edi, ds:[esi+0x10]
        mov ecx, edi
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call ebx
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x28]
        mov ecx, edi
        call ebx
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x40]
        mov ecx, edi
        call ebx
        mov ecx, 6
        xor eax, eax
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x5C], ebp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f04ab0)
    }
}
