#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d36);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396076);

#define public_63062ed _public_63062ed
#define public_6306301 _public_6306301
#define public_6306327 _public_6306327
#define public_6306329 _public_6306329
#define public_630635a _public_630635a
#define public_630635c _public_630635c

PROC_DECLARE(0x63062c0, internal_63062c0, public_63062c0);
extern "C" NAKED register_t __cdecl internal_63062c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396076 @0x63062c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396076
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_63062ed
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], 0
        public_63062ed : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6306301
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_6306301 : nop
        push 0xDC
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6306327
        mov ecx, eax
        call public_6391d3c
        jmp public_6306329
        public_6306327 : nop
        xor eax, eax
        public_6306329 : nop
        push 0xDC
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_630635a
        mov ecx, eax
        call public_6391d3c
        jmp public_630635c
        public_630635a : nop
        xor eax, eax
        public_630635c : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6391d36
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6391d36
        mov ecx, dword ptr ss : [esp+8]
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x63062c0)
    }
}

#undef public_63062ed
#undef public_6306301
#undef public_6306327
#undef public_6306329
#undef public_630635a
#undef public_630635c
