#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);

PROC_DECLARE(0x6ef2b50, internal_6ef2b50, public_6ef2b50);
extern "C" NAKED register_t __cdecl internal_6ef2b50()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_6efc1a4
        mov dword ptr ds : [esi+4], offset public_6efc194
        call public_6ef2bb0
        mov eax, dword ptr ds : [esi+0x68]
        push eax
        call dword ptr ds : [public_6efc044]
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        call public_6ef4507
        xor edi, edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
        call public_6ef4507
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x44], edi
        add esp, 8
        add esi, 0x20
        push esi
        call dword ptr ds : [public_6efc040]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef2b50)
    }
}
