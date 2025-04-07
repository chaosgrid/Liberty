#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004010);
CLANG_FORWARD_PROC_SYMBOL(public_10004c90);

PROC_DECLARE(0x10004c90, internal_10004c90, public_10004c90);
extern "C" NAKED register_t __cdecl internal_10004c90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        push esi
        push edi
        call public_10004010
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push ecx
        call dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [esi+0x28]
        push edx
        push eax
        call dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x28]
        push edi
        push ecx
        call dword ptr ds : [esi+0x24]
        add esp, 0x24
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10004c90)
    }
}
