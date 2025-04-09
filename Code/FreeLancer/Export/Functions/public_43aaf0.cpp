#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43aaf0);

#define public_43ab20 _public_43ab20
#define public_43ab47 _public_43ab47
#define public_43ab52 _public_43ab52

PROC_DECLARE(0x43aaf0, internal_43aaf0, public_43aaf0);
extern "C" NAKED register_t __cdecl internal_43aaf0()
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
        je public_43ab20
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43ab47
        nop 
        public_43ab20 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43ab30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43ab3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43ab47 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43ab52
        mov byte ptr ds : [eax+0x14], 1
        public_43ab52 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x43aaf0)
    }
}

#undef public_43ab20
#undef public_43ab47
#undef public_43ab52
