#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_431517 _public_431517
#define public_43151f _public_43151f
#define public_43153a _public_43153a
#define public_43156d _public_43156d
#define public_431572 _public_431572

PROC_DECLARE(0x4314e0, internal_4314e0, public_4314e0);
extern "C" NAKED register_t __cdecl internal_4314e0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        jne public_43153a
        push edi
        lea eax, ss:[esp+0x14]
        lea edi, ds:[esi+0x3C]
        push eax
        mov ecx, edi
        call public_52c7a0
        mov edi, dword ptr ds : [edi+4]
        cmp eax, edi
        mov dword ptr ss : [esp+8], eax
        je public_431517
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_431517
        lea eax, ss:[esp+8]
        jmp public_43151f
        public_431517 : nop
        mov dword ptr ss : [esp+0xC], edi
        lea eax, ss:[esp+0xC]
        public_43151f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x40]
        pop edi
        je public_43156d
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_431572
        mov eax, dword ptr ds : [public_5c7078]
        pop esi
        add esp, 8
        ret 4
        public_43153a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_43156d
        mov ecx, dword ptr ds : [eax+4]
        push ecx
/*FIXUP push offset public_5cad38 @0x43154e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad38
/*FIXUP push offset public_67eda0 @0x431553*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67eda0
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        mov eax, offset public_67eda0
        pop esi
        add esp, 8
        ret 4
        public_43156d : nop
        mov eax, offset public_5c865c
        public_431572 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4314e0)
    }
}

#undef public_431517
#undef public_43151f
#undef public_43153a
#undef public_43156d
#undef public_431572
