#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a630);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a668 _public_43a668
#define public_43a670 _public_43a670
#define public_43a690 _public_43a690

PROC_DECLARE(0x43a630, internal_43a630, public_43a630);
extern "C" NAKED register_t __cdecl internal_43a630()
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
        je public_43a668
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a668
        lea eax, ss:[esp+8]
        jmp public_43a670
        public_43a668 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_43a670 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_43a690
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x18
        add esp, 8
        ret 4
        lea ebx, ds:[ebx]
        public_43a690 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43a69c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43a6a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        xor eax, eax
        mov eax, dword ptr ds : [eax+4]
        add esp, 0x14
        add eax, 0x18
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43a630)
    }
}

#undef public_43a668
#undef public_43a670
#undef public_43a690
