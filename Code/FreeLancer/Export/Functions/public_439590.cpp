#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_439590);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_4395c0 _public_4395c0
#define public_4395c8 _public_4395c8
#define public_4395e0 _public_4395e0

PROC_DECLARE(0x439590, internal_439590, public_439590);
extern "C" NAKED register_t __cdecl internal_439590()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_4395c0
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_4395c0
        lea eax, ss:[esp+8]
        jmp public_4395c8
        public_4395c0 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_4395c8 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_4395e0
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        lea esp, ss:[esp]
        public_4395e0 : nop
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x100
/*FIXUP push offset public_5caf30 @0x4395ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x4395f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x439590)
    }
}

#undef public_4395c0
#undef public_4395c8
#undef public_4395e0
