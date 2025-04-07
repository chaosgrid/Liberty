#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bab30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bab8b _public_62bab8b
#define public_62baba2 _public_62baba2
#define public_62babc0 _public_62babc0

PROC_DECLARE(0x62bab30, internal_62bab30, public_62bab30);
extern "C" NAKED register_t __cdecl internal_62bab30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [esi+0x4D]
        test al, al
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x10], edi
        jne public_62babc0
        mov al, byte ptr ds : [esi+0x4C]
        push ebp
        push 0x50
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x14]
        mov ebp, eax
        lea eax, ss:[ebp+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+4], ecx
        mov byte ptr ss : [ebp+0x4C], dl
        mov byte ptr ss : [ebp+0x4D], 0
        je public_62bab8b
        add esi, 0xC
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        public_62bab8b : nop
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        cmp edi, dword ptr ds : [ebx+8]
        jne public_62baba2
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, ebp
        public_62baba2 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push edx
        mov ecx, ebx
        call public_62bab30
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        mov ecx, ebx
        call public_62bab30
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        public_62babc0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62bab30)
    }
}

#undef public_62bab8b
#undef public_62baba2
#undef public_62babc0
