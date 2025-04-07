#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c36b0);
CLANG_FORWARD_PROC_SYMBOL(public_65c41f0);

PROC_DECLARE(0x65c36b0, internal_65c36b0, public_65c36b0);
extern "C" NAKED register_t __cdecl internal_65c36b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x10]
        mov dword ptr ds : [esi], offset public_65c7460
        call public_65c41f0
        xor edi, edi
        mov dword ptr ds : [esi], offset public_65c74bc
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov byte ptr ds : [esi+0x60], 1
        mov eax, 0x3E8
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov ecx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ds : [esi+0x50], ecx
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c36b0)
    }
}
