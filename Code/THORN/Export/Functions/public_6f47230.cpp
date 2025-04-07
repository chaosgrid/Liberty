#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47230);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59488);

#define public_6f47268 _public_6f47268

PROC_DECLARE(0x6f47230, internal_6f47230, public_6f47230);
extern "C" NAKED register_t __cdecl internal_6f47230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59488 @0x6f47232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59488
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6f5b2ec
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f47268
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f47268 : nop
        mov ecx, esi
        call public_6f439a0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f47230)
    }
}

#undef public_6f47268
