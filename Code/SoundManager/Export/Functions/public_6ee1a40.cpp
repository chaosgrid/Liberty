#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee18e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1a40);

#define public_6ee1a9e _public_6ee1a9e
#define public_6ee1ab9 _public_6ee1ab9
#define public_6ee1b29 _public_6ee1b29
#define public_6ee1b36 _public_6ee1b36

PROC_DECLARE(0x6ee1a40, internal_6ee1a40, public_6ee1a40);
extern "C" NAKED register_t __cdecl internal_6ee1a40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf6c]
        sub esp, 8
        test eax, eax
        push esi
        push edi
        jne public_6ee1a9e
        lea eax, ss:[esp+8]
        push eax
        push 0
        push 0
/*FIXUP push offset _public_6ee18e0 @0x6ee1a57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ee18e0
        push 0
        push 0
        call dword ptr ds : [public_6ee902c]
        test eax, eax
        mov dword ptr ds : [public_6eeaf6c], eax
        jne public_6ee1a9e
        mov ecx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea1b0 @0x6ee1a75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea1b0
        push 0x347
/*FIXUP push offset public_6eea070 @0x6ee1a7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee1a89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        public_6ee1a9e : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov edi, dword ptr ds : [public_6ee9034]
        je public_6ee1ab9
        push eax
        call edi
        mov dword ptr ds : [esi+0xC], 0
        public_6ee1ab9 : nop
        push 0
        push 0
        push 0
        push 0
        call dword ptr ds : [public_6ee903c]
        test eax, eax
        mov dword ptr ds : [esi+0xC], eax
        je public_6ee1b36
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_6ee918c @0x6ee1ad6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee918c
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6ee1b29
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+8], edx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        test edi, edi
        jl public_6ee1b36
        or dword ptr ds : [esi+0x1C], 2
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_6ee1b29 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call edi
        mov dword ptr ds : [esi+0xC], 0
        public_6ee1b36 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ee1a40)
    }
}

#undef public_6ee1a9e
#undef public_6ee1ab9
#undef public_6ee1b29
#undef public_6ee1b36
