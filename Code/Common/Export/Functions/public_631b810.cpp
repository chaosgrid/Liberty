#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);
CLANG_FORWARD_PROC_SYMBOL(public_6312940);
CLANG_FORWARD_PROC_SYMBOL(public_6312ad0);

PROC_DECLARE(0x631b810, internal_631b810, public_631b810);
extern "C" NAKED register_t __cdecl internal_631b810()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 4
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+4]
        push 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call public_6312890
        mov ecx, dword ptr ds : [esi+8]
        push 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, edi
        call public_6312890
        xor eax, eax
        mov al, byte ptr ds : [esi+0xC]
        mov ecx, edi
        push eax
        call public_6312940
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        mov ecx, edi
        call public_6312ad0
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x631b810)
    }
}
