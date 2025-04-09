#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_588540);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_43d253 _public_43d253

PROC_DECLARE(0x43d170, internal_43d170, public_43d170);
extern "C" NAKED register_t __cdecl internal_43d170()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push 0
        mov esi, ecx
        push 0
/*FIXUP push offset public_5cb118 @0x43d17a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb118
/*FIXUP push offset public_5cb100 @0x43d17f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb100
        mov byte ptr ds : [esi+4], 1
        mov byte ptr ds : [esi+0xC], 0
        mov byte ptr ds : [esi+0xD], 0
        mov dword ptr ds : [esi+0x10], 0
        mov byte ptr ds : [esi+0x14], 1
        call public_59db20
        add esp, 0x10
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_43d253
        lea ecx, ss:[esp+4]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5cb0d0 @0x43d1d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb0d0
        mov ecx, eax
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        call public_588540
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], 0xBF1EB852
        mov dword ptr ss : [esp+0x20], 0x3E99999A
        mov dword ptr ss : [esp+0x24], 0xBFA00000
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [esi+8]
        and byte ptr ds : [esi+0x6C], 0xFC
        public_43d253 : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x43d170)
    }
}

#undef public_43d253
