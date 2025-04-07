#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62954b0);
CLANG_FORWARD_PROC_SYMBOL(public_6295990);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393718);

#define public_62954e7 _public_62954e7

PROC_DECLARE(0x62954b0, internal_62954b0, public_62954b0);
extern "C" NAKED register_t __cdecl internal_62954b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393718 @0x62954b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393718
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639cd4c
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_62954e7
        call public_6295990
        public_62954e7 : nop
        mov ecx, esi
        call public_629af40
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_629f2f0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62954b0)
    }
}

#undef public_62954e7
