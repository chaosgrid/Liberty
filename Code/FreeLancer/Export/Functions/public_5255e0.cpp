#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_5361e0);

#define public_525600 _public_525600
#define public_52561d _public_52561d
#define public_52566a _public_52566a
#define public_525683 _public_525683

PROC_DECLARE(0x5255e0, internal_5255e0, public_5255e0);
extern "C" NAKED register_t __cdecl internal_5255e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov byte ptr ds : [esi+0xAC], 0
        je public_525600
        push 0
        push eax
        call dword ptr ds : [public_5c6810]
        add esp, 8
        public_525600 : nop
        lea eax, ds:[esi+0xB8]
        push eax
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_52561d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_52561d : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+8], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_525683
        cmp dword ptr ds : [eax+0x14], 2
        je public_52566a
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dcea0 @0x525644*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcea0
        push 0x84C
/*FIXUP push offset public_5dc47c @0x52564e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x525658*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop esi
        add esp, 0xC
        ret 4
        public_52566a : nop
        lea edx, ss:[esp+4]
        push edx
        push esi
        push eax
        call public_5361e0
        add esp, 0xC
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c67f4]
        public_525683 : nop
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5255e0)
    }
}

#undef public_525600
#undef public_52561d
#undef public_52566a
#undef public_525683
