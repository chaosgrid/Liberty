#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40df40);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8741);

#define public_40df81 _public_40df81

PROC_DECLARE(0x40df40, internal_40df40, public_40df40);
extern "C" NAKED register_t __cdecl internal_40df40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8741 @0x40df42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8741
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_40df81
        mov ecx, esi
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        public_40df81 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40df40)
    }
}

#undef public_40df81
