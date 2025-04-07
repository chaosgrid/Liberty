#include "Server-PCH.h"


#define public_6d5ea77 _public_6d5ea77
#define public_6d5ea9b _public_6d5ea9b

PROC_DECLARE(0x6d5ea10, internal_6d5ea10, public_6d5ea10);
extern "C" NAKED register_t __cdecl internal_6d5ea10()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        push edi
        mov ecx, esi
        mov edi, 0xFFFFFFFE
        call dword ptr ds : [public_6d6490c]
        mov eax, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6d5ea9b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_6d644ec]
        add esp, 8
        push 0
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d5ea77
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x104
        ret 
        public_6d5ea77 : nop
        lea edx, ss:[esp+8]
        push edx
        push 0x2B3
/*FIXUP push offset public_6d6b9dc @0x6d5ea81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b9dc
        mov eax, 0x100001
/*FIXUP push offset public_6d6ba7c @0x6d5ea8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ba7c
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d5ea9b : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6d5ea10)
    }
}

#undef public_6d5ea77
#undef public_6d5ea9b
