#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6eab080, internal_6eab080, public_6eab080);
extern "C" NAKED register_t __cdecl internal_6eab080()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x8C]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x94], edi
        mov ecx, dword ptr ds : [esi+0x7C]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x84], edi
        mov edx, dword ptr ds : [esi+0x6C]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        call public_6fa8fe0
        add esp, 0x14
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eab080)
    }
}
