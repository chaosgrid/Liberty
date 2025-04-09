#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d7400);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_JUMP_SYMBOL(public_5be278);

#define public_4d7430 _public_4d7430

PROC_DECLARE(0x4d7400, internal_4d7400, public_4d7400);
extern "C" NAKED register_t __cdecl internal_4d7400()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be278 @0x4d7402*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be278
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0
        je public_4d7430
        call public_59eee0
        public_4d7430 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59ef20
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4d7400)
    }
}

#undef public_4d7430
