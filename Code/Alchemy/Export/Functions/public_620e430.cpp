#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620be90);
CLANG_FORWARD_PROC_SYMBOL(public_620dde0);
CLANG_FORWARD_PROC_SYMBOL(public_620e430);

#define public_620e46c _public_620e46c

PROC_DECLARE(0x620e430, internal_620e430, public_620e430);
extern "C" NAKED register_t __cdecl internal_620e430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        lea ebx, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257964]
        test eax, eax
        jne public_620e46c
        mov eax, dword ptr ds : [public_6257968]
        mov edi, dword ptr ds : [public_6257958]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257954]
        shr eax, 3
        imul eax, dword ptr ds : [public_625795c]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_620dde0
        public_620e46c : nop
        mov ecx, dword ptr ds : [ebx+0xDC]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, 6
        sub esp, 0x18
        mov edi, esp
        rep movsd
        push ebx
        lea ecx, ds:[ebx+0xE4]
        call public_620be90
        mov al, byte ptr ds : [ebx+0xE1]
        pop edi
        test al, al
        sete cl
        mov byte ptr ds : [ebx+0xE1], cl
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x620e430)
    }
}

#undef public_620e46c
