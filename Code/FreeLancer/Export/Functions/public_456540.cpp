#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454920);
CLANG_FORWARD_PROC_SYMBOL(public_454d70);
CLANG_FORWARD_PROC_SYMBOL(public_454e20);
CLANG_FORWARD_PROC_SYMBOL(public_456540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba086);

#define public_456582 _public_456582
#define public_456584 _public_456584
#define public_4565ca _public_4565ca
#define public_4565cc _public_4565cc
#define public_456613 _public_456613
#define public_456627 _public_456627

PROC_DECLARE(0x456540, internal_456540, public_456540);
extern "C" NAKED register_t __cdecl internal_456540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba086 @0x456542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba086
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0x13C
        mov ebp, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_456582
        mov ecx, eax
        call public_454920
        mov esi, eax
        jmp public_456584
        public_456582 : nop
        xor esi, esi
        public_456584 : nop
        push 0x804
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], 1
        je public_4565ca
/*FIXUP push offset _public_454d70 @0x4565a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_454d70
/*FIXUP push offset _public_454e20 @0x4565ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_454e20
        push 0x20
        lea edi, ds:[eax+4]
        push 0x40
        push edi
        mov dword ptr ds : [eax], 0x20
        call public_5b7fba
        mov eax, edi
        jmp public_4565cc
        public_4565ca : nop
        xor eax, eax
        public_4565cc : nop
        mov cl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0xB4], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0xB8], 0x20
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB0], eax
        mov byte ptr ds : [esi+0x2F], cl
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_456613
        mov ebx, eax
        public_456613 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_456627
        mov dword ptr ds : [eax], esi
        public_456627 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        mov dword ptr ss : [ebp+0xC], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x456540)
    }
}

#undef public_456582
#undef public_456584
#undef public_4565ca
#undef public_4565cc
#undef public_456613
#undef public_456627
