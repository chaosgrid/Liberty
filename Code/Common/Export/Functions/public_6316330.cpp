#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316330);
CLANG_FORWARD_PROC_SYMBOL(public_6318da0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63968d0);

#define public_63163dd _public_63163dd
#define public_63163e6 _public_63163e6
#define public_6316425 _public_6316425
#define public_6316448 _public_6316448

PROC_DECLARE(0x6316330, internal_6316330, public_6316330);
extern "C" NAKED register_t __cdecl internal_6316330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63968d0 @0x6316332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63968d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        call public_6333e40
        mov al, byte ptr ss : [esp+0x4C]
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        mov cl, byte ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x2C], cl
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_63991a8]
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 1
        call public_6318da0
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_63163e6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63163dd
        cmp cl, 0xFF
        je public_63163dd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63163e6
        public_63163dd : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63163e6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        je public_6316448
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6316425
        cmp cl, 0xFF
        je public_6316425
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        lea eax, ds:[ecx+0x10]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        public_6316425 : nop
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0xC]
        add esp, 4
        pop esi
        lea eax, ds:[edx+0x10]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        public_6316448 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x3C]
        pop esi
        add eax, 0x10
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6316330)
    }
}

#undef public_63163dd
#undef public_63163e6
#undef public_6316425
#undef public_6316448
