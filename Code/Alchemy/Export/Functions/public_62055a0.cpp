#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620be90);
CLANG_FORWARD_PROC_SYMBOL(public_620dde0);

#define public_62055d5 _public_62055d5

PROC_DECLARE(0x62055a0, internal_62055a0, public_62055a0);
extern "C" NAKED register_t __cdecl internal_62055a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257964]
        push ebx
        push esi
        push edi
        test eax, eax
        jne public_62055d5
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
        public_62055d5 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0xDC]
        push eax
        push ecx
        push edx
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
        sete al
        mov byte ptr ds : [ebx+0xE1], al
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62055a0)
    }
}

#undef public_62055d5
