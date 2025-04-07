#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297070);
CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393856);

#define public_62970bc _public_62970bc

PROC_DECLARE(0x6297070, internal_6297070, public_6297070);
extern "C" NAKED register_t __cdecl internal_6297070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393856 @0x6297072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393856
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639d13c
        mov dword ptr ss : [esp+0x10], 1
        call public_629edf0
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        lea ecx, ds:[esi+0x250]
        mov byte ptr ss : [esp+0x10], 0
        je public_62970bc
        push 0
        call public_6341610
        public_62970bc : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6299380
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6297070)
    }
}

#undef public_62970bc
