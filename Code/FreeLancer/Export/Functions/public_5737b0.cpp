#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5737b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c39c3);

#define public_5737c0 _public_5737c0
#define public_573803 _public_573803
#define public_57381c _public_57381c

PROC_DECLARE(0x5737b0, internal_5737b0, public_5737b0);
extern "C" NAKED register_t __cdecl internal_5737b0()
{
    __asm
    {
        mov ecx, offset public_67a598
        jmp public_5737c0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5737c0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c39c3 @0x5737c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c39c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        lea esi, ds:[ecx+0x210]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e2718
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_573803
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], 0
        public_573803 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov byte ptr ss : [esp+0x10], 0
        je public_57381c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], 0
        public_57381c : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_5e2708
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5737b0)
    }
}

#undef public_5737c0
#undef public_573803
#undef public_57381c
