#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5d00);
CLANG_FORWARD_PROC_SYMBOL(public_6303250);
CLANG_FORWARD_PROC_SYMBOL(public_6391fb6);

#define public_62b5d6b _public_62b5d6b
#define public_62b5d84 _public_62b5d84
#define public_62b5d9b _public_62b5d9b
#define public_62b5dd5 _public_62b5dd5
#define public_62b5de3 _public_62b5de3
#define public_62b5de9 _public_62b5de9

PROC_DECLARE(0x62b5d00, internal_62b5d00, public_62b5d00);
extern "C" NAKED register_t __cdecl internal_62b5d00()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xAC]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_62b5de3
        call public_6303250
        test al, al
        je public_62b5d84
        cmp dword ptr ds : [esi+0xB4], edi
        je public_62b5d84
        mov eax, dword ptr ds : [esi+0x60]
        push edi
/*FIXUP push offset public_63eadf4 @0x62b5d2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eadf4
/*FIXUP push offset public_63eacf0 @0x62b5d31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eacf0
        push edi
        push eax
        call public_6391fb6
        add esp, 0x14
        cmp eax, edi
        je public_62b5d6b
        cmp dword ptr ds : [eax+0x388], edi
        je public_62b5de9
        add eax, 0xE0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_62b5d9b
        public_62b5d6b : nop
        lea ecx, ds:[esi+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_62b5d9b
        public_62b5d84 : nop
        lea edx, ds:[esi+0x2C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], edx
        public_62b5d9b : nop
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        cmp eax, edi
        mov dword ptr ds : [esi+0xA4], eax
        je public_62b5dd5
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        fstp dword ptr ds : [esi+0xA8]
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        public_62b5dd5 : nop
        mov dword ptr ds : [esi+0xA8], edi
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        public_62b5de3 : nop
        mov dword ptr ds : [esi+0xA8], edi
        public_62b5de9 : nop
        mov dword ptr ds : [esi+0xA4], edi
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62b5d00)
    }
}

#undef public_62b5d6b
#undef public_62b5d84
#undef public_62b5d9b
#undef public_62b5dd5
#undef public_62b5de3
#undef public_62b5de9
