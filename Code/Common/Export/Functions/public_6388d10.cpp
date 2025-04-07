#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_63862c0);
CLANG_FORWARD_PROC_SYMBOL(public_6388d10);

#define public_6388d56 _public_6388d56
#define public_6388da9 _public_6388da9

PROC_DECLARE(0x6388d10, internal_6388d10, public_6388d10);
extern "C" NAKED register_t __cdecl internal_6388d10()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6388da9
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call public_63862c0
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [public_63991e8]
        add esp, 0x10
        test eax, eax
        je public_6388d56
/*FIXUP push offset public_63f82d8 @0x6388d4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82d8
        push esi
        call edi
        add esp, 8
        public_6388d56 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
/*FIXUP push offset public_63f82ac @0x6388d7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82ac
        push esi
        call edi
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0x3C]
        push eax
        push ecx
        call public_6377fe0
        mov edx, dword ptr ds : [public_658b804]
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        push eax
        call public_6377fe0
        add esp, 0x38
        pop edi
        public_6388da9 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6388d10)
    }
}

#undef public_6388d56
#undef public_6388da9
