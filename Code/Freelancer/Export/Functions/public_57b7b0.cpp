#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d91);

#define public_57b868 _public_57b868

PROC_DECLARE(0x57b7b0, internal_57b7b0, public_57b7b0);
extern "C" NAKED register_t __cdecl internal_57b7b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3d91 @0x57b7b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d91
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [esi+0x330], edx
        mov dword ptr ds : [esi+0x334], eax
        call dword ptr ds : [public_5c6c44]
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        mov ebp, dword ptr ds : [esi+0x48C]
        mov eax, dword ptr ss : [ebp+4]
        lea edi, ds:[esi+0x488]
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x30]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        mov byte ptr ss : [esp+0x28], 0
        je public_57b868
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], 0
        public_57b868 : nop
        mov esi, dword ptr ds : [esi+0x48C]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+8]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_5c6c40]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x57b7b0)
    }
}

#undef public_57b868
