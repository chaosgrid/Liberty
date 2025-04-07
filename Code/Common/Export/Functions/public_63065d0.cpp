#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d48);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396076);

#define public_63065fc _public_63065fc
#define public_630660c _public_630660c
#define public_630662e _public_630662e
#define public_6306630 _public_6306630
#define public_6306661 _public_6306661
#define public_6306663 _public_6306663
#define public_630668e _public_630668e
#define public_63066b1 _public_63066b1
#define public_63066cf _public_63066cf
#define public_6306705 _public_6306705

PROC_DECLARE(0x63065d0, internal_63065d0, public_63065d0);
extern "C" NAKED register_t __cdecl internal_63065d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396076 @0x63065d2*/
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
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_63065fc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], edi
        public_63065fc : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_630660c
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], edi
        public_630660c : nop
        push 0xDC
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_630662e
        mov ecx, eax
        call public_6391d3c
        jmp public_6306630
        public_630662e : nop
        xor eax, eax
        public_6306630 : nop
        push 0xDC
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 1
        je public_6306661
        mov ecx, eax
        call public_6391d3c
        jmp public_6306663
        public_6306661 : nop
        xor eax, eax
        public_6306663 : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6306720
        add esp, 4
        test al, al
        jne public_63066b1
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        je public_630668e
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+4], edi
        public_630668e : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_6306705
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_63066b1 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, edi
        je public_63066cf
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        call public_6391d4e
        public_63066cf : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6391d48
        mov ecx, dword ptr ds : [esi+4]
        call public_6391d42
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6391d42
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_6391d4e
        mov ecx, dword ptr ds : [esi+8]
        call public_6391d48
        public_6306705 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63065d0)
    }
}

#undef public_63065fc
#undef public_630660c
#undef public_630662e
#undef public_6306630
#undef public_6306661
#undef public_6306663
#undef public_630668e
#undef public_63066b1
#undef public_63066cf
#undef public_6306705
