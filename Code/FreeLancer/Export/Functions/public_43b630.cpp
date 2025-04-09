#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43b667 _public_43b667
#define public_43b66f _public_43b66f
#define public_43b683 _public_43b683

PROC_DECLARE(0x43b630, internal_43b630, public_43b630);
extern "C" NAKED register_t __cdecl internal_43b630()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        lea ecx, ss:[esp+8]
        lea edi, ds:[esi+0x20]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], eax
        call public_52c7a0
        mov edi, dword ptr ds : [edi+4]
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], eax
        je public_43b667
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43b667
        lea eax, ss:[esp+0xC]
        jmp public_43b66f
        public_43b667 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ss:[esp+0x10]
        public_43b66f : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_43b683
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        add esp, 0xC
        ret 
        public_43b683 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43b68f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43b699*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        mov eax, dword ptr ds : [eax]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x43b630)
    }
}

#undef public_43b667
#undef public_43b66f
#undef public_43b683
