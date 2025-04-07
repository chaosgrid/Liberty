#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3afd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b500);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a0f8);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6ab69);

#define public_6b4ec64 _public_6b4ec64
#define public_6b4ec90 _public_6b4ec90
#define public_6b4ec99 _public_6b4ec99

PROC_DECLARE(0x6b4ebf0, internal_6b4ebf0, public_6b4ebf0);
extern "C" NAKED register_t __cdecl internal_6b4ebf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6ab69 @0x6b4ebf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6ab69
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_6b3afd0
        cmp eax, ebx
        je public_6b4ec64
        mov edx, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov ecx, eax
        call public_6b3b500
        test eax, eax
        jne public_6b4ec64
        mov ecx, dword ptr ss : [esp+0x28]
/*FIXUP push offset public_6b6bf74 @0x6b4ec47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call public_6b6a0f8
        add esp, 8
        push eax
        call dword ptr ds : [public_6b6b134]
        add esp, 8
        public_6b4ec64 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6b4ec99
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6b4ec90
        cmp cl, 0xFF
        je public_6b4ec90
        dec cl
        pop esi
        mov byte ptr ds : [eax], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_6b4ec90 : nop
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4ec99 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6b4ebf0)
    }
}

#undef public_6b4ec64
#undef public_6b4ec90
#undef public_6b4ec99
