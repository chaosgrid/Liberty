#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425170);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8b5b);

#define public_4251b8 _public_4251b8
#define public_4251d0 _public_4251d0
#define public_42525b _public_42525b
#define public_42527a _public_42527a

PROC_DECLARE(0x425170, internal_425170, public_425170);
extern "C" NAKED register_t __cdecl internal_425170()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8b5b @0x425178*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8b5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        lea eax, ss:[esp-0x104]
        sub esp, 0x28C
        push eax
        call dword ptr ds : [public_5c60b0]
        add esp, 4
        test al, al
        jne public_4251b8
        or eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0x28C]
        mov dword ptr fs : [0], ecx
        add esp, 0x298
        ret 
        public_4251b8 : nop
        push ebx
        mov ebx, dword ptr ds : [public_5c70d0]
        push esi
        mov esi, dword ptr ds : [public_5c71ec]
        push edi
        mov edi, dword ptr ds : [public_5c70b8]
        lea ecx, ds:[ecx]
        public_4251d0 : nop
        mov eax, dword ptr ds : [public_6679fc]
        inc eax
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_5c9948 @0x4251db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9948
        push ecx
        mov dword ptr ds : [public_6679fc], eax
        call esi
/*FIXUP push offset public_5c9944 @0x4251e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9944
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1A8]
        push eax
        lea ecx, ss:[esp+0xA8]
        push 0
        push ecx
        call edi
        lea edx, ss:[esp+0xB0]
        push 0
        push edx
        call ebx
        add esp, 0x28
        cmp eax, 0xFFFFFFFF
        jne public_4251d0
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_5c9934 @0x425230*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9934
        push eax
        mov dword ptr ss : [esp+0x2AC], 0
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_42525b
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x90]
        push edx
        push 0
        push eax
        call dword ptr ds : [ecx+0xC]
        public_42525b : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov esi, dword ptr ds : [public_6679fc]
        mov dword ptr ss : [esp+0x2A0], 0xFFFFFFFF
        je public_42527a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_42527a : nop
        mov ecx, dword ptr ss : [esp+0x298]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x298
        ret 
        UNREACHABLE_TRAP(0x425170)
    }
}

#undef public_4251b8
#undef public_4251d0
#undef public_42525b
#undef public_42527a
