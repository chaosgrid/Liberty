#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_434d10);

#define public_434d41 _public_434d41
#define public_434d4c _public_434d4c
#define public_434d72 _public_434d72
#define public_434d9e _public_434d9e
#define public_434da2 _public_434da2
#define public_434de0 _public_434de0
#define public_434e00 _public_434e00

PROC_DECLARE(0x434d10, internal_434d10, public_434d10);
extern "C" NAKED register_t __cdecl internal_434d10()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, ecx
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x10]
        je public_434d41
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_434d4c
        public_434d41 : nop
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xC
        ret 4
        public_434d4c : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        jne public_434e00
        mov eax, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [public_5c7078]
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_434d72
        mov edi, eax
        public_434d72 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        call dword ptr ds : [public_5c607c]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        test ecx, ecx
        je public_434de0
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_434d9e
        mov edx, dword ptr ds : [public_5c7078]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_434da2
        public_434d9e : nop
        mov dword ptr ss : [esp+0xC], eax
        public_434da2 : nop
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 1
        lea edi, ss:[esp+0x10]
        push edi
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x78]
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6074]
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 4
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [ebx+0x2C]
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        lea esp, ss:[esp]
        public_434de0 : nop
        push edi
        push 0x92
/*FIXUP push offset public_5caddc @0x434de6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caddc
        mov eax, 0x100002
/*FIXUP push offset public_5cadb0 @0x434df0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cadb0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_434e00 : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [ebx+0x2C]
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x434d10)
    }
}

#undef public_434d41
#undef public_434d4c
#undef public_434d72
#undef public_434d9e
#undef public_434da2
#undef public_434de0
#undef public_434e00
