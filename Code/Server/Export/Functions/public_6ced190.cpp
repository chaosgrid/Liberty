#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced190);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60661);

#define public_6ced1dc _public_6ced1dc

PROC_DECLARE(0x6ced190, internal_6ced190, public_6ced190);
extern "C" NAKED register_t __cdecl internal_6ced190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60661 @0x6ced192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60661
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
        je public_6ced1dc
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64318]
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        mov cl, byte ptr ds : [edi+0x38]
        mov byte ptr ds : [esi+0x38], cl
        mov dword ptr ds : [esi], offset public_6d65724
        pop edi
        public_6ced1dc : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ced190)
    }
}

#undef public_6ced1dc
