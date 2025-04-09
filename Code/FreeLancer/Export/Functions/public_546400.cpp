#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_546400);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0f38);

#define public_54644f _public_54644f
#define public_546465 _public_546465

PROC_DECLARE(0x546400, internal_546400, public_546400);
extern "C" NAKED register_t __cdecl internal_546400()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0f38 @0x546402*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0f38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
/*FIXUP push offset public_5cad80 @0x54642c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_54644f
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_54644f : nop
        mov eax, dword ptr ss : [esp]
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_546465
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_546465 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x546400)
    }
}

#undef public_54644f
#undef public_546465
