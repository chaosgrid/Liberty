#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63165f0);
CLANG_FORWARD_PROC_SYMBOL(public_631a680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639694a);

#define public_631663e _public_631663e
#define public_6316647 _public_6316647
#define public_6316661 _public_6316661
#define public_6316672 _public_6316672
#define public_63166a1 _public_63166a1
#define public_63166aa _public_63166aa
#define public_63166c1 _public_63166c1
#define public_63166d0 _public_63166d0
#define public_6316701 _public_6316701
#define public_631670a _public_631670a

PROC_DECLARE(0x63165f0, internal_63165f0, public_63165f0);
extern "C" NAKED register_t __cdecl internal_63165f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639694a @0x63165f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639694a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        mov dword ptr ss : [esp+8], esi
        push 1
        lea ecx, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x18], 4
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+0x48]
        xor ebx, ebx
        cmp eax, ebx
        je public_6316647
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_631663e
        cmp cl, 0xFF
        je public_631663e
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6316647
        public_631663e : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6316647 : nop
        push ebp
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov ebp, dword ptr ds : [esi+0x3C]
        push edi
        mov edi, dword ptr ds : [esi+0x38]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], 2
        je public_6316672
        public_6316661 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_63991b8]
        add edi, 0x10
        cmp edi, ebp
        jne public_6316661
        public_6316672 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6391d5a
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp eax, ebx
        je public_63166aa
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_63166a1
        cmp cl, 0xFF
        je public_63166a1
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_63166aa
        public_63166a1 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_63166aa : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [esi+0x18]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], bl
        je public_63166d0
        public_63166c1 : nop
        push ebx
        mov ecx, edi
        call public_631a680
        add edi, 0x10
        cmp edi, ebp
        jne public_63166c1
        public_63166d0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        pop edi
        pop ebp
        je public_631670a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6316701
        cmp cl, 0xFF
        je public_6316701
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_631670a
        public_6316701 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_631670a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63165f0)
    }
}

#undef public_631663e
#undef public_6316647
#undef public_6316661
#undef public_6316672
#undef public_63166a1
#undef public_63166aa
#undef public_63166c1
#undef public_63166d0
#undef public_6316701
#undef public_631670a
