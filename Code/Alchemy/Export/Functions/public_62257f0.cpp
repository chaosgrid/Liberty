#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62257f0);
CLANG_FORWARD_PROC_SYMBOL(public_62259e0);
CLANG_FORWARD_PROC_SYMBOL(public_623ecf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248f0b);

#define public_6225849 _public_6225849
#define public_6225862 _public_6225862

PROC_DECLARE(0x62257f0, internal_62257f0, public_62257f0);
extern "C" NAKED register_t __cdecl internal_62257f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248f0b @0x62257f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248f0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], 0
        mov esi, dword ptr ss : [esp+0x24]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0xC], esp
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ds : [eax], esi
        lea eax, ss:[esp+0xC]
        push eax
        call public_62259e0
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x30]
        mov byte ptr ss : [esp+0x18], 2
        test eax, eax
        je public_6225849
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6225849 : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov byte ptr ss : [esp+0x18], 1
        test eax, eax
        je public_6225862
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x30], 0
        public_6225862 : nop
        mov ecx, dword ptr ds : [edi+8]
        push esi
        call public_623ecf0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x62257f0)
    }
}

#undef public_6225849
#undef public_6225862
