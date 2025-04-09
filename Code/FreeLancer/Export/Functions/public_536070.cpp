#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_536070);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0981);

#define public_5360b6 _public_5360b6

PROC_DECLARE(0x536070, internal_536070, public_536070);
extern "C" NAKED register_t __cdecl internal_536070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0981 @0x536072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0981
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
        je public_5360b6
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6974]
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi], offset public_5dd328
        pop edi
        public_5360b6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x536070)
    }
}

#undef public_5360b6
