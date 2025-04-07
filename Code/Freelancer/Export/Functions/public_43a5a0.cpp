#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a5d8 _public_43a5d8
#define public_43a5e0 _public_43a5e0
#define public_43a5f0 _public_43a5f0
#define public_43a613 _public_43a613
#define public_43a621 _public_43a621

PROC_DECLARE(0x43a5a0, internal_43a5a0, public_43a5a0);
extern "C" NAKED register_t __cdecl internal_43a5a0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_43a5d8
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a5d8
        lea eax, ss:[esp+8]
        jmp public_43a5e0
        public_43a5d8 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_43a5e0 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_43a5f0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43a613
        public_43a5f0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43a5fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43a606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43a613 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43a621
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x48], ecx
        public_43a621 : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x43a5a0)
    }
}

#undef public_43a5d8
#undef public_43a5e0
#undef public_43a5f0
#undef public_43a613
#undef public_43a621
