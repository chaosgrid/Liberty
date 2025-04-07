#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418bd6);
CLANG_FORWARD_JUMP_SYMBOL(public_419d2a);

#define public_406655 _public_406655

PROC_DECLARE(0x406610, internal_406610, public_406610);
extern "C" NAKED register_t __cdecl internal_406610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419d2a @0x406612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419d2a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x84
        call public_418a9e
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_406655
        push eax
        push eax
        mov ecx, esi
        call public_418bd6
        mov dword ptr ds : [esi], offset public_41c620
        mov eax, esi
        public_406655 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x406610)
    }
}

#undef public_406655
