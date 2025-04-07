#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d12d5b _public_6d12d5b
#define public_6d12d63 _public_6d12d63
#define public_6d12d7c _public_6d12d7c
#define public_6d12d86 _public_6d12d86

PROC_DECLARE(0x6d12d20, internal_6d12d20, public_6d12d20);
extern "C" NAKED register_t __cdecl internal_6d12d20()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        lea ecx, ss:[esp+0x14]
        add esi, 0x10
        push ecx
        mov ecx, esi
        xor bl, bl
        mov dword ptr ss : [esp+0x18], eax
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6d12d5b
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d12d5b
        lea eax, ss:[esp+8]
        jmp public_6d12d63
        public_6d12d5b : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6d12d63 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_6d12d86
        add eax, 0x10
        test eax, eax
        je public_6d12d86
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d12d7c
        cmp eax, 1
        jne public_6d12d86
        public_6d12d7c : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d12d86 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d12d20)
    }
}

#undef public_6d12d5b
#undef public_6d12d63
#undef public_6d12d7c
#undef public_6d12d86
