#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d580);
CLANG_FORWARD_PROC_SYMBOL(public_48c720);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9cb8);

#define public_44d5c3 _public_44d5c3

PROC_DECLARE(0x44d580, internal_44d580, public_44d580);
extern "C" NAKED register_t __cdecl internal_44d580()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9cb8 @0x44d582*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9cb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5cc0a4
/*FIXUP push offset public_5cb6a0 @0x44d5a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        mov dword ptr ss : [esp+0x14], 0
        call public_59da10
        add esp, 4
        test eax, eax
        je public_44d5c3
        mov ecx, eax
        call public_48c720
        public_44d5c3 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_5cc084
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x44d580)
    }
}

#undef public_44d5c3
