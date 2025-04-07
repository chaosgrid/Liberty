#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b190);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626b1eb _public_626b1eb
#define public_626b202 _public_626b202
#define public_626b220 _public_626b220

PROC_DECLARE(0x626b190, internal_626b190, public_626b190);
extern "C" NAKED register_t __cdecl internal_626b190()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [esi+0x2D]
        test al, al
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x10], edi
        jne public_626b220
        mov al, byte ptr ds : [esi+0x2C]
        push ebp
        push 0x30
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x14]
        mov ebp, eax
        lea eax, ss:[ebp+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+4], ecx
        mov byte ptr ss : [ebp+0x2C], dl
        mov byte ptr ss : [ebp+0x2D], 0
        je public_626b1eb
        add esi, 0xC
        mov ecx, 8
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        public_626b1eb : nop
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        cmp edi, dword ptr ds : [ebx+8]
        jne public_626b202
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, ebp
        public_626b202 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push edx
        mov ecx, ebx
        call public_626b190
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        mov ecx, ebx
        call public_626b190
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        public_626b220 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x626b190)
    }
}

#undef public_626b1eb
#undef public_626b202
#undef public_626b220
