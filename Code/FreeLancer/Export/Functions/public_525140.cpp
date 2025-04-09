#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_525140);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0168);

#define public_525179 _public_525179
#define public_52518f _public_52518f
#define public_5251a4 _public_5251a4

PROC_DECLARE(0x525140, internal_525140, public_525140);
extern "C" NAKED register_t __cdecl internal_525140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0168 @0x525142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0168
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov ecx, dword ptr ds : [esi+0xB4]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_525179
        call public_4f7a90
        mov dword ptr ds : [esi+0xB4], edi
        public_525179 : nop
        mov eax, dword ptr ds : [esi+0xB0]
        cmp eax, edi
        je public_52518f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xB0], edi
        public_52518f : nop
        mov ecx, dword ptr ds : [esi+0xB8]
        cmp ecx, edi
        je public_5251a4
        call public_537ad0
        mov dword ptr ds : [esi+0xB8], edi
        public_5251a4 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_5394b0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x525140)
    }
}

#undef public_525179
#undef public_52518f
#undef public_5251a4
