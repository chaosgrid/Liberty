#include "Server-PCH.h"


#define public_6ceae10 _public_6ceae10
#define public_6ceae28 _public_6ceae28
#define public_6ceae2a _public_6ceae2a
#define public_6ceae50 _public_6ceae50
#define public_6ceae91 _public_6ceae91

PROC_DECLARE(0x6ceadc0, internal_6ceadc0, public_6ceadc0);
extern "C" NAKED register_t __cdecl internal_6ceadc0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_6d642b8]
        test eax, eax
        je public_6ceae91
        cmp eax, 0x100
        jne public_6ceae10
/*FIXUP push offset public_6d655f0 @0x6ceade2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655f0
        push 0x91B
/*FIXUP push offset public_6d654b0 @0x6ceadec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654b0
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6ceadf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6ceae10 : nop
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_6ceae28
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ceae2a
        public_6ceae28 : nop
        xor esi, esi
        public_6ceae2a : nop
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64204]
        mov ebp, dword ptr ds : [public_6d6428c]
        lea edx, ss:[esp+0x14]
        lea ebx, ds:[esi+0xE4]
        push edx
        mov ecx, ebx
        call ebp
        mov esi, eax
        test esi, esi
        je public_6ceae91
        public_6ceae50 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_6d642b4]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x10]
        push eax
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x210]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call ebp
        mov esi, eax
        test esi, esi
        jne public_6ceae50
        public_6ceae91 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6ceadc0)
    }
}

#undef public_6ceae10
#undef public_6ceae28
#undef public_6ceae2a
#undef public_6ceae50
#undef public_6ceae91
