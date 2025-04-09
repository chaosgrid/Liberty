#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a440);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc2d8);

#define public_48a494 _public_48a494

PROC_DECLARE(0x48a440, internal_48a440, public_48a440);
extern "C" NAKED register_t __cdecl internal_48a440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc2d8 @0x48a442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc2d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d24f4
        mov dword ptr ds : [esi+0x7C], offset public_5d24e4
        xor eax, eax
        mov dword ptr ds : [public_671ff4], eax
        cmp byte ptr ds : [esi+0x368], al
        mov dword ptr ss : [esp+0x10], eax
        je public_48a494
        mov byte ptr ds : [esi+0x368], al
        xor eax, eax
        mov al, byte ptr ds : [esi+0x32C]
        push eax
        call public_4a7690
        add esp, 4
        public_48a494 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x48a440)
    }
}

#undef public_48a494
