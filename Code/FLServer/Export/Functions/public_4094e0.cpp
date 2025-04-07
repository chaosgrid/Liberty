#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402770);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418930);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c7e);
CLANG_FORWARD_JUMP_SYMBOL(public_419ee0);

#define public_4095c6 _public_4095c6
#define public_4095d2 _public_4095d2
#define public_4095de _public_4095de

PROC_DECLARE(0x4094e0, internal_4094e0, public_4094e0);
extern "C" NAKED register_t __cdecl internal_4094e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419ee0 @0x4094e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419ee0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_402770
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x8C], ebx
        call public_41899c
        cmp eax, 1
        jne public_4095de
        mov eax, dword ptr ds : [esi+0xC4]
        mov ebp, dword ptr ds : [public_41bbe8]
        push ebx
        push ebx
        push 0x188
        push eax
        call ebp
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jle public_4095de
        call public_40cdc0
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov edx, dword ptr ds : [esi+0xA0]
        lea eax, ss:[esp+0x14]
        lea ecx, ds:[esi+0xA0]
        push eax
        push edi
        mov byte ptr ss : [esp+0x94], 1
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        call public_418930
        call public_40ce70
        mov edx, dword ptr ds : [esi+0xC4]
        push ebx
        push edi
        push 0x182
        push edx
        call ebp
        push ebx
        lea ecx, ds:[esi+0x140]
        call public_418c7e
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_4095d2
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4095c6
        cmp cl, 0xFF
        je public_4095c6
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_4095d2
        public_4095c6 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_4095d2 : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_4095de : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x84]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4094e0)
    }
}

#undef public_4095c6
#undef public_4095d2
#undef public_4095de
