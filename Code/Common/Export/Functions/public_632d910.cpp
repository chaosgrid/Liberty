#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);
CLANG_FORWARD_PROC_SYMBOL(public_63129a0);
CLANG_FORWARD_PROC_SYMBOL(public_6312ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6313590);

PROC_DECLARE(0x632d910, internal_632d910, public_632d910);
extern "C" NAKED register_t __cdecl internal_632d910()
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
        mov eax, dword ptr ds : [esi+0xC]
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+0x10]
        push 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call public_6312890
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, edi
        call public_63129a0
        lea edx, ds:[esi+0x24]
        push edx
        mov ecx, edi
        call public_6313590
        mov eax, dword ptr ds : [esi+0x58]
        push eax
        mov ecx, edi
        call public_6312ad0
        mov ecx, dword ptr ds : [esi+0x5C]
        push 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, edi
        call public_6312890
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        mov ecx, edi
        call public_6312ad0
        mov ecx, dword ptr ds : [esi+0x1C]
        push 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, edi
        call public_6312890
        mov eax, dword ptr ds : [esi+0x20]
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+0x60]
        push 4
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        push eax
        mov ecx, edi
        call public_6312890
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x632d910)
    }
}
