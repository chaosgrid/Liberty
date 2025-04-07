#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6eab000, internal_6eab000, public_6eab000);
extern "C" NAKED register_t __cdecl internal_6eab000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x88]
        push edi
        push eax
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov ecx, dword ptr ds : [esi+0x78]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov edx, dword ptr ds : [esi+0x68]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov eax, dword ptr ds : [esi+0x58]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov ecx, dword ptr ds : [esi+0x48]
        push ecx
        call public_6fa8fe0
        add esp, 0x14
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eab000)
    }
}
