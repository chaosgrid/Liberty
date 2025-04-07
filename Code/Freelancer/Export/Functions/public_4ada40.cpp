#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ad600);

#define public_4ada90 _public_4ada90
#define public_4adaa4 _public_4adaa4
#define public_4adab1 _public_4adab1

PROC_DECLARE(0x4ada40, internal_4ada40, public_4ada40);
extern "C" NAKED register_t __cdecl internal_4ada40()
{
    __asm
    {
        sub esp, 0x100
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10C]
        mov eax, dword ptr ds : [edi]
        push eax
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
/*FIXUP push offset public_5d50a4 @0x4ada58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50a4
        push ecx
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_5c6f74]
        mov al, byte ptr ds : [esi+0x84C]
        test al, al
        je public_4adab1
        mov eax, dword ptr ds : [edi]
        cmp eax, 0xFFFFFFFF
        jne public_4ada90
        pop edi
        mov al, 1
        pop esi
        add esp, 0x100
        ret 4
        public_4ada90 : nop
        cmp dword ptr ds : [edi+4], 2
        jne public_4adaa4
        push 0
        push eax
        mov ecx, esi
        call public_4ad600
        test al, al
        je public_4adab1
        public_4adaa4 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x100
        ret 4
        public_4adab1 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x4ada40)
    }
}

#undef public_4ada90
#undef public_4adaa4
#undef public_4adab1
