#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418996);
CLANG_FORWARD_PROC_SYMBOL(public_418c5a);

PROC_DECLARE(0x415d00, internal_415d00, public_415d00);
extern "C" NAKED register_t __cdecl internal_415d00()
{
    __asm
    {
        sub esp, 0x20
        push esi
        push edi
        mov esi, ecx
        call public_418996
        mov eax, dword ptr ds : [esi+0x20]
        push 0
        push 0x3E8
        push 0x3001
        push eax
        call dword ptr ds : [public_41bc18]
        mov edx, dword ptr ds : [public_427828]
        mov eax, dword ptr ds : [edx+0x20]
        mov edi, dword ptr ds : [public_41bc14]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        call edi
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edi
        mov edi, dword ptr ss : [esp+0x10]
        add eax, edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        cdq 
        sub eax, edx
        mov edx, dword ptr ss : [esp+8]
        push 5
        sar eax, 1
        push 0
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        sub eax, edi
        add eax, edx
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        push 0
        mov ecx, esi
        call public_418c5a
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x415d00)
    }
}
