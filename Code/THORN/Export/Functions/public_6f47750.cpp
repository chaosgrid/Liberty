#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47750);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f594d4);

#define public_6f47788 _public_6f47788
#define public_6f477a2 _public_6f477a2
#define public_6f477ab _public_6f477ab

PROC_DECLARE(0x6f47750, internal_6f47750, public_6f47750);
extern "C" NAKED register_t __cdecl internal_6f47750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f594d4 @0x6f47752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f594d4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6f5b30c
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_6f47788
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f47788 : nop
        mov eax, dword ptr ds : [esi+0x74]
        test eax, eax
        je public_6f477ab
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f477a2
        cmp cl, 0xFF
        je public_6f477a2
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f477ab
        public_6f477a2 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f477ab : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x74], 0
        mov dword ptr ds : [esi+0x78], 0
        mov dword ptr ds : [esi+0x7C], 0
        call public_6f439a0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f47750)
    }
}

#undef public_6f47788
#undef public_6f477a2
#undef public_6f477ab
