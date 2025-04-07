#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1b70);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c94);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfedb);

#define public_65d1c0c _public_65d1c0c

PROC_DECLARE(0x65d1b70, internal_65d1b70, public_65d1b70);
extern "C" NAKED register_t __cdecl internal_65d1b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dfedb @0x65d1b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfedb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        push 0xC
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+4], al
        call public_65d6f71
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov edx, dword ptr ds : [public_65e60e0]
        mov dword ptr ds : [esi+0x14], edx
        mov edx, dword ptr ds : [public_65e60e0]
        mov dword ptr ss : [esp+0x14], eax
        inc edx
        lea eax, ss:[esp+4]
        mov dword ptr ds : [public_65e60e0], edx
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0x8004667E
        push ecx
        mov dword ptr ss : [esp+0x10], 1
        call public_65d6c94
        cmp eax, 0xFFFFFFFF
        jne public_65d1c0c
        call public_65d1330
        public_65d1c0c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x65d1b70)
    }
}

#undef public_65d1c0c
