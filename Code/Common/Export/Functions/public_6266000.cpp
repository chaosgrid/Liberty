#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6266033 _public_6266033
#define public_626603b _public_626603b
#define public_6266050 _public_6266050

PROC_DECLARE(0x6266000, internal_6266000, public_6266000);
extern "C" NAKED register_t __cdecl internal_6266000()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_6266033
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6266033
        lea eax, ss:[esp+0xC]
        jmp public_626603b
        public_6266033 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_626603b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x24]
        je public_6266050
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        mov edi, edi
        public_6266050 : nop
        push ecx
        mov ecx, dword ptr ds : [public_6399028]
        push 0x1FC
/*FIXUP push offset public_6399484 @0x626605c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_6399784 @0x6266066*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399784
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6266000)
    }
}

#undef public_6266033
#undef public_626603b
#undef public_6266050
