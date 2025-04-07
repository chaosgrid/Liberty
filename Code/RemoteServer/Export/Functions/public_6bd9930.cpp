#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd1000);
CLANG_FORWARD_PROC_SYMBOL(public_6be12a0);
CLANG_FORWARD_PROC_SYMBOL(public_6be4130);
CLANG_FORWARD_PROC_SYMBOL(public_6be8150);
CLANG_FORWARD_PROC_SYMBOL(public_6be9250);
CLANG_FORWARD_PROC_SYMBOL(public_6c0990c);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a3db);

#define public_6bd99a9 _public_6bd99a9
#define public_6bd99ab _public_6bd99ab
#define public_6bd99f7 _public_6bd99f7
#define public_6bd99f9 _public_6bd99f9

PROC_DECLARE(0x6bd9930, internal_6bd9930, public_6bd9930);
extern "C" NAKED register_t __cdecl internal_6bd9930()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6c0a3db @0x6bd9938*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a3db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        mov edi, ecx
        call public_6bd1000
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6c13a04], eax
        je public_6bd99f7
        mov ecx, dword ptr ds : [esi+0x20C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [esi+0x208]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        push 0x90
        mov bl, al
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6bd99a9
        mov ecx, esi
        call public_6c0990c
        mov dword ptr ds : [esi], offset public_6c0ba4c
        jmp public_6bd99ab
        public_6bd99a9 : nop
        xor esi, esi
        public_6bd99ab : nop
        test bl, bl
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [edi+0xC], esi
        je public_6bd99f9
        call public_6be12a0
        test eax, eax
        mov dword ptr ds : [edi+8], eax
        je public_6bd99f9
        push eax
        call public_6be9250
        add esp, 4
        test eax, eax
        jne public_6bd99f9
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_6be8150
        add esp, 4
        test eax, eax
        jne public_6bd99f9
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6be4130
        add esp, 4
        test eax, eax
        jne public_6bd99f9
        mov bl, 1
        jmp public_6bd99f9
        public_6bd99f7 : nop
        xor bl, bl
        public_6bd99f9 : nop
        add edi, 0x10
        push edi
        call dword ptr ds : [public_6c0b13c]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov al, bl
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6bd9930)
    }
}

#undef public_6bd99a9
#undef public_6bd99ab
#undef public_6bd99f7
#undef public_6bd99f9
