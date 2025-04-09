#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_44dd80);
CLANG_FORWARD_PROC_SYMBOL(public_44e430);
CLANG_FORWARD_PROC_SYMBOL(public_4510f0);
CLANG_FORWARD_PROC_SYMBOL(public_451330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d2b);

#define public_44ddf9 _public_44ddf9
#define public_44de4f _public_44de4f
#define public_44de51 _public_44de51
#define public_44deb1 _public_44deb1

PROC_DECLARE(0x44dd80, internal_44dd80, public_44dd80);
extern "C" NAKED register_t __cdecl internal_44dd80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9d2b @0x44dd88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
/*FIXUP push offset public_5cc3f8 @0x44dda4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc3f8
        push edi
        push eax
        call dword ptr ds : [public_5c625c]
        push eax
        call dword ptr ds : [public_5c6258]
        mov ebx, dword ptr ss : [esp+0x70]
        add esp, 0x10
        cmp eax, 1
        jne public_44ddf9
        mov ecx, dword ptr ds : [public_611000]
        mov edx, dword ptr ds : [ebx+0x3C]
        push ecx
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44ddf9
        call public_446be0
        test eax, eax
        jne public_44ddf9
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        public_44ddf9 : nop
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        mov ecx, esi
        call public_44e430
        push 0x190
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x60], eax
        test eax, eax
        mov dword ptr ss : [esp+0x54], 0
        je public_44de4f
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        mov ecx, eax
        call public_4510f0
        mov edi, eax
        jmp public_44de51
        public_44de4f : nop
        xor edi, edi
        public_44de51 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0x6C], edx
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_451330
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x74], ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x78], edx
        mov al, byte ptr ss : [esp+0x5C]
        mov byte ptr ds : [edi+0x7C], al
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_44deb1
        mov cl, byte ptr ds : [ebx+0x40]
        mov byte ptr ds : [eax+0x15], cl
        mov dl, byte ptr ds : [ebx+0x41]
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x16], dl
        mov ecx, dword ptr ds : [esi+0xA4]
        push ecx
        push ebx
        call dword ptr ds : [public_5c6254]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 8
        mov dword ptr ds : [edx+0x18], eax
        public_44deb1 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x44dd80)
    }
}

#undef public_44ddf9
#undef public_44de4f
#undef public_44de51
#undef public_44deb1
