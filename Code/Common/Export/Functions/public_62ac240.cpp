#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac240);
CLANG_FORWARD_PROC_SYMBOL(public_62d2220);
CLANG_FORWARD_PROC_SYMBOL(public_62d2830);
CLANG_FORWARD_PROC_SYMBOL(public_62d28b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63940db);

#define public_62ac28e _public_62ac28e
#define public_62ac290 _public_62ac290
#define public_62ac29e _public_62ac29e

PROC_DECLARE(0x62ac240, internal_62ac240, public_62ac240);
extern "C" NAKED register_t __cdecl internal_62ac240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63940db @0x62ac242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63940db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x194]
        test eax, eax
        jne public_62ac29e
        push 0x1CC
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62ac28e
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, eax
        call public_62d2220
        jmp public_62ac290
        public_62ac28e : nop
        xor eax, eax
        public_62ac290 : nop
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x194], eax
        public_62ac29e : nop
        mov edx, dword ptr ds : [esi+0xAC]
        mov ecx, dword ptr ds : [esi+0x194]
        push edx
        call public_62d2830
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x194]
        push 0
        push eax
        call public_62d28b0
        mov eax, dword ptr ds : [esi+0x194]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62ac240)
    }
}

#undef public_62ac28e
#undef public_62ac290
#undef public_62ac29e
