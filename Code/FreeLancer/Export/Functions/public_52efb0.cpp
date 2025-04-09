#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_52efb0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_JUMP_SYMBOL(public_5c05a8);

#define public_52f01b _public_52f01b
#define public_52f038 _public_52f038
#define public_52f03d _public_52f03d
#define public_52f062 _public_52f062

PROC_DECLARE(0x52efb0, internal_52efb0, public_52efb0);
extern "C" NAKED register_t __cdecl internal_52efb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c05a8 @0x52efb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c05a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 1
        mov dword ptr ss : [esp+0xC], esi
        call public_429040
        mov eax, dword ptr ss : [esp+0x1C]
        xor edi, edi
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov byte ptr ds : [esi+0x44], 1
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi], offset public_5ddbfc
        mov ecx, dword ptr ds : [public_5c68e4]
        push ecx
        mov dword ptr ss : [esp+0x18], edi
        call public_42ae40
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [esi+0x4C], eax
        je public_52f01b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52f01b : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        je public_52f038
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_52f038
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_52f03d
        public_52f038 : nop
        call public_54bb00
        public_52f03d : nop
        cmp eax, dword ptr ds : [public_673344]
        jne public_52f062
        mov edx, dword ptr ds : [public_5c68e0]
        push edx
        call public_42ae40
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [esi+0x48], eax
        je public_52f062
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_52f062 : nop
        mov al, byte ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        or al, 1
        mov byte ptr ds : [esi+0xC], al
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x52efb0)
    }
}

#undef public_52f01b
#undef public_52f038
#undef public_52f03d
#undef public_52f062
