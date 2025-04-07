#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3afd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b46ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6b49670);
CLANG_FORWARD_PROC_SYMBOL(public_6b4d510);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d1a);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d20);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d26);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d2c);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d32);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a6ab);

#define public_6b397a4 _public_6b397a4
#define public_6b397a6 _public_6b397a6
#define public_6b39832 _public_6b39832
#define public_6b39839 _public_6b39839
#define public_6b39840 _public_6b39840
#define public_6b39845 _public_6b39845

PROC_DECLARE(0x6b39750, internal_6b39750, public_6b39750);
extern "C" NAKED register_t __cdecl internal_6b39750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a6ab @0x6b39752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a6ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0x99C
        mov dword ptr ds : [esi+0x210], 0
        call public_6b6a134
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_6b397a4
        mov ecx, edi
        call public_6b69d32
        mov dword ptr ds : [edi], offset public_6b6bea8
        mov ecx, edi
        jmp public_6b397a6
        public_6b397a4 : nop
        xor ecx, ecx
        public_6b397a6 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], ecx
        call public_6b69d2c
        mov ecx, dword ptr ds : [esi+0xC]
/*FIXUP push offset public_6b6be68 @0x6b397be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6be68
        call public_6b69d26
        mov ecx, dword ptr ds : [esi+0xC]
/*FIXUP push offset public_6b6be60 @0x6b397cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6be60
        call public_6b69d20
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6b69d1a
        call public_6b3afd0
        push eax
        mov dword ptr ds : [esi+8], eax
        call public_6b4d510
        add esp, 4
        test eax, eax
        jne public_6b39840
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_6b49670
        add esp, 4
        test eax, eax
        jne public_6b39839
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6b46ad0
        add esp, 4
        test eax, eax
        jne public_6b39832
        mov al, 1
        pop edi
        mov byte ptr ds : [esi+0x218], al
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
/*FIXUP public_6b39832 : nop
        push offset public_6b6be34 @0x6b39832*/
  FIXUP public_6b39832 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6be34
        jmp public_6b39845
/*FIXUP public_6b39839 : nop
        push offset public_6b6be08 @0x6b39839*/
  FIXUP public_6b39839 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6be08
        jmp public_6b39845
/*FIXUP public_6b39840 : nop
        push offset public_6b6bddc @0x6b39840*/
  FIXUP public_6b39840 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bddc
        public_6b39845 : nop
        mov eax, 0x100004
        push eax
        call dword ptr ds : [public_6b73700]
        add esp, 8
        mov eax, 0x100004
/*FIXUP push offset public_6b6bdac @0x6b39859*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bdac
        push eax
        call dword ptr ds : [public_6b73700]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6b39750)
    }
}

#undef public_6b397a4
#undef public_6b397a6
#undef public_6b39832
#undef public_6b39839
#undef public_6b39840
#undef public_6b39845
