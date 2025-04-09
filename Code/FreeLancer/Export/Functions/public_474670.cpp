#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6c0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbbc1);

#define public_4746f7 _public_4746f7
#define public_4746f9 _public_4746f9
#define public_474739 _public_474739

PROC_DECLARE(0x474670, internal_474670, public_474670);
extern "C" NAKED register_t __cdecl internal_474670()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbbc1 @0x474672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbbc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push 0x340
        mov ebx, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_4746f7
        mov ecx, esi
        call public_59f860
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        mov byte ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi], offset public_5d0554
        mov dword ptr ds : [esi+0x7C], offset public_5d0548
        mov dword ptr ds : [esi+0x32C], offset public_5d0540
        call public_42d6c0
        inc dword ptr ds : [public_67dccc]
        mov dword ptr ds : [esi+0x330], 0
        mov dword ptr ds : [esi+0x334], 0
        jmp public_4746f9
        public_4746f7 : nop
        xor esi, esi
        public_4746f9 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add ebx, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebx
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_474739
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_474739 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x474670)
    }
}

#undef public_4746f7
#undef public_4746f9
#undef public_474739
