#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3e29);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3e85);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ad842c);

PROC_DECLARE(0x6ad3e29, internal_6ad3e29, public_6ad3e29);
extern "C" NAKED register_t __cdecl internal_6ad3e29()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push esi
        lea eax, ss:[ebp+8]
        push edi
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3e85
        pop ecx
        lea eax, ss:[ebp-0x28]
        pop ecx
        lea esi, ss:[ebp-0xC]
        push eax
        push 0
        push 0x11
        sub esp, 0xC
        mov edi, esp
        movsd 
        movsd 
        movsw 
        call public_6ad842c
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+8], eax
        movsx eax, byte ptr ss : [ebp-0x26]
        mov dword ptr ds : [esi], eax
        movsx eax, word ptr ss : [ebp-0x28]
        mov dword ptr ds : [esi+4], eax
        lea eax, ss:[ebp-0x24]
        push eax
        push edi
        call public_6ad3f40
        add esp, 0x20
        mov dword ptr ds : [esi+0xC], edi
        mov eax, esi
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3e29)
    }
}
