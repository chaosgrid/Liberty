#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63608a0);
CLANG_FORWARD_PROC_SYMBOL(public_63609c0);
CLANG_FORWARD_PROC_SYMBOL(public_6362ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639835b);

#define public_63608dd _public_63608dd
#define public_63608df _public_63608df
#define public_6360906 _public_6360906
#define public_6360908 _public_6360908
#define public_6360929 _public_6360929
#define public_636092b _public_636092b

PROC_DECLARE(0x63608a0, internal_63608a0, public_63608a0);
extern "C" NAKED register_t __cdecl internal_63608a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639835b @0x63608a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639835b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        xor eax, eax
        mov ecx, 7
        mov edi, esi
        push 8
        rep stosd
        call public_6391d9c
        xor edi, edi
        add esp, 4
        cmp eax, edi
        je public_63608dd
        mov dword ptr ds : [eax], offset public_63a558c
        jmp public_63608df
        public_63608dd : nop
        xor eax, eax
        public_63608df : nop
        mov dword ptr ds : [esi+4], eax
        push 0x14
        mov dword ptr ds : [eax+4], edi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6360906
        push 0x10
        mov ecx, eax
        call public_6362ef0
        jmp public_6360908
        public_6360906 : nop
        xor eax, eax
        public_6360908 : nop
        push 8
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi+8], eax
        call public_6391d9c
        add esp, 4
        cmp eax, edi
        je public_6360929
        mov dword ptr ds : [eax], offset public_63a574c
        jmp public_636092b
        public_6360929 : nop
        xor eax, eax
        public_636092b : nop
        mov dword ptr ds : [esi+0xC], eax
        sub esp, 8
        mov eax, esp
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x10], esp
        push eax
        mov ecx, esi
        call public_63609c0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63608a0)
    }
}

#undef public_63608dd
#undef public_63608df
#undef public_6360906
#undef public_6360908
#undef public_6360929
#undef public_636092b
