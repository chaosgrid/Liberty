#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4c70);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_4d4cb0 _public_4d4cb0
#define public_4d4cfa _public_4d4cfa

PROC_DECLARE(0x4d4c70, internal_4d4c70, public_4d4c70);
extern "C" NAKED register_t __cdecl internal_4d4c70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xB0]
        push edi
        push 0
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_4d4cb0
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0xC], 0x107FFDFF
        je public_4d4cb0
        mov al, byte ptr ds : [edi+0xA8]
        test al, al
        jne public_4d4cfa
        public_4d4cb0 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_4d4cfa
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c64f8]
        push 0
        push 0
        lea edx, ss:[esp+0x18]
        mov bl, al
        mov eax, dword ptr ds : [esi+0xB0]
        push edx
        push eax
        mov byte ptr ss : [esp+0x20], 0
        call public_4c4da0
        mov cl, byte ptr ss : [esp+0x20]
        or cl, bl
        add esp, 0x10
        test cl, 1
        pop ebx
        jne public_4d4cfa
        pop edi
        mov al, 1
        pop esi
        ret 
        public_4d4cfa : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d4c70)
    }
}

#undef public_4d4cb0
#undef public_4d4cfa
