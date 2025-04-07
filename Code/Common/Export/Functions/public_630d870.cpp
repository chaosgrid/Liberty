#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d5a0);
CLANG_FORWARD_JUMP_SYMBOL(public_639633b);

#define public_630d8c1 _public_630d8c1
#define public_630d8c9 _public_630d8c9
#define public_630d8cb _public_630d8cb

PROC_DECLARE(0x630d870, internal_630d870, public_630d870);
extern "C" NAKED register_t __cdecl internal_630d870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639633b @0x630d872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639633b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0xC
        mov edi, ecx
        call dword ptr ds : [public_6399328]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], 0
        je public_630d8cb
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        call public_630d5a0
        mov edx, dword ptr ds : [edi]
        test edx, edx
        mov ecx, edi
        je public_630d8c9
        public_630d8c1 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630d8c1
        public_630d8c9 : nop
        mov dword ptr ds : [ecx], esi
        public_630d8cb : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x630d870)
    }
}

#undef public_630d8c1
#undef public_630d8c9
#undef public_630d8cb
