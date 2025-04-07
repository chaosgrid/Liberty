#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bc90);

#define public_6d5bcc0 _public_6d5bcc0
#define public_6d5bcc8 _public_6d5bcc8
#define public_6d5bcd9 _public_6d5bcd9

PROC_DECLARE(0x6d5bc90, internal_6d5bc90, public_6d5bc90);
extern "C" NAKED register_t __cdecl internal_6d5bc90()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x1C]
        push eax
        mov ecx, esi
        call public_6d59ea0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6d5bcc0
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d5bcc0
        lea eax, ss:[esp+8]
        jmp public_6d5bcc8
        public_6d5bcc0 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6d5bcc8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x20]
        jne public_6d5bcd9
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        public_6d5bcd9 : nop
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6ce3ea0
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5bc90)
    }
}

#undef public_6d5bcc0
#undef public_6d5bcc8
#undef public_6d5bcd9
