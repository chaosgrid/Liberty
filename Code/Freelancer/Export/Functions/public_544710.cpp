#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_544710);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0efb);

#define public_544743 _public_544743
#define public_544753 _public_544753
#define public_544762 _public_544762
#define public_54477c _public_54477c
#define public_54478c _public_54478c
#define public_54479b _public_54479b

PROC_DECLARE(0x544710, internal_544710, public_544710);
extern "C" NAKED register_t __cdecl internal_544710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0efb @0x544712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0efb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov ecx, dword ptr ds : [esi+0x1C]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_544743
        call public_4f7a90
        mov dword ptr ds : [esi+0x1C], edi
        public_544743 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_544753
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x18], edi
        public_544753 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, edi
        je public_544762
        call public_537ad0
        mov dword ptr ds : [esi+0x20], edi
        public_544762 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_54477c
        call public_4f7a90
        mov dword ptr ds : [esi+0xC], edi
        public_54477c : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_54478c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edi
        public_54478c : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edi
        je public_54479b
        call public_537ad0
        mov dword ptr ds : [esi+0x10], edi
        public_54479b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x544710)
    }
}

#undef public_544743
#undef public_544753
#undef public_544762
#undef public_54477c
#undef public_54478c
#undef public_54479b
