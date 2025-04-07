#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294520);
CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_JUMP_SYMBOL(public_6393690);

#define public_6294595 _public_6294595
#define public_62945a2 _public_62945a2

PROC_DECLARE(0x6294520, internal_6294520, public_6294520);
extern "C" NAKED register_t __cdecl internal_6294520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393690 @0x6294522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393690
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639c78c
        mov dword ptr ss : [esp+0x10], 0
        call public_629edf0
        mov dword ptr ds : [esi], offset public_639c61c
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_6294595
/*FIXUP push offset public_639c84c @0x6294565*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c84c
        push 0x22
/*FIXUP push offset public_639c81c @0x629456c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x6294576*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x2C]
        add esp, 0x14
        call public_62af640
        mov dword ptr ds : [esi+0x2C], 0
        public_6294595 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_62945a2
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_62945a2 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        call public_62f0d50
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_629ed10
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6294520)
    }
}

#undef public_6294595
#undef public_62945a2
