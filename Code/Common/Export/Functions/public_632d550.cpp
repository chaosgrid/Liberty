#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_JUMP_SYMBOL(public_6397411);

#define public_632d588 _public_632d588

PROC_DECLARE(0x632d550, internal_632d550, public_632d550);
extern "C" NAKED register_t __cdecl internal_632d550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397411 @0x632d552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397411
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
        je public_632d588
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi], eax
        public_632d588 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x632d550)
    }
}

#undef public_632d588
