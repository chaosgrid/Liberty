#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43a860);

#define public_43a890 _public_43a890
#define public_43a8b7 _public_43a8b7
#define public_43a8c2 _public_43a8c2

PROC_DECLARE(0x43a860, internal_43a860, public_43a860);
extern "C" NAKED register_t __cdecl internal_43a860()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x14], eax
        call public_432240
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ecx
        pop esi
        je public_43a890
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43a8b7
        nop 
        public_43a890 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43a8a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43a8aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43a8b7 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43a8c2
        mov byte ptr ds : [eax+0x2C], 1
        public_43a8c2 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x43a860)
    }
}

#undef public_43a890
#undef public_43a8b7
#undef public_43a8c2
