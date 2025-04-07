#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0cd9);

#define public_6f87df8 _public_6f87df8

PROC_DECLARE(0x6f87dc0, internal_6f87dc0, public_6f87dc0);
extern "C" NAKED register_t __cdecl internal_6f87dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0cd9 @0x6f87dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0cd9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fbc6d0
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6f87df8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f87df8 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb7730
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f87dc0)
    }
}

#undef public_6f87df8
