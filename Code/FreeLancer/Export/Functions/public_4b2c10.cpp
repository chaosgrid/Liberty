#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2c10);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd038);

#define public_4b2c61 _public_4b2c61
#define public_4b2c63 _public_4b2c63

PROC_DECLARE(0x4b2c10, internal_4b2c10, public_4b2c10);
extern "C" NAKED register_t __cdecl internal_4b2c10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd038 @0x4b2c12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd038
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
        mov eax, dword ptr ds : [esi+0x334]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call public_5b7e1d
        add esp, 4
        cmp esi, edi
        mov dword ptr ds : [esi+0x334], edi
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x33C], edi
        je public_4b2c61
        lea ecx, ds:[esi+0x32C]
        jmp public_4b2c63
        public_4b2c61 : nop
        xor ecx, ecx
        public_4b2c63 : nop
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4b2c10)
    }
}

#undef public_4b2c61
#undef public_4b2c63
