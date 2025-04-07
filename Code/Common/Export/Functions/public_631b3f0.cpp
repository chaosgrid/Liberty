#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);
CLANG_FORWARD_PROC_SYMBOL(public_6312940);
CLANG_FORWARD_PROC_SYMBOL(public_6312ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6312ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6313540);

PROC_DECLARE(0x631b3f0, internal_631b3f0, public_631b3f0);
extern "C" NAKED register_t __cdecl internal_631b3f0()
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
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+8]
        push ecx
        mov ecx, edi
        call public_6312940
        xor edx, edx
        mov dl, byte ptr ds : [esi+9]
        mov ecx, edi
        push edx
        call public_6312940
        mov eax, dword ptr ds : [esi+0xC]
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6312890
        lea edx, ds:[esi+0x10]
        push edx
        mov ecx, edi
        call public_6312ce0
        lea eax, ds:[esi+0x28]
        push eax
        mov ecx, edi
        call public_6312ce0
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, edi
        call public_6312ce0
        mov edx, dword ptr ds : [esi+0x58]
        push edx
        mov ecx, edi
        call public_6312ad0
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        mov ecx, edi
        call public_6313540
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x631b3f0)
    }
}
