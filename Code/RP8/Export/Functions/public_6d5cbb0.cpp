#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc20);

#define public_6d5cbdd _public_6d5cbdd

PROC_DECLARE(0x6d5cbb0, internal_6d5cbb0, public_6d5cbb0);
extern "C" NAKED register_t __cdecl internal_6d5cbb0()
{
    __asm
    {
        mov eax, 0x2000
        call public_6d2f270
        push esi
        call public_6d5cc20
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2008]
        test eax, eax
        jl public_6d5cbdd
        cmp eax, 0x16
        jge public_6d5cbdd
        mov eax, dword ptr ds : [esi+eax*4]
        pop esi
        add esp, 0x2000
        ret 
        public_6d5cbdd : nop
        push eax
        lea eax, ss:[esp+8]
/*FIXUP push offset public_6d704c4 @0x6d5cbe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d704c4
        push eax
        call public_6d168f0
        push eax
        push 0x52
        mov ecx, 0x100002
/*FIXUP push offset public_6d70478 @0x6d5cbf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d70478
/*FIXUP push offset public_6d6ade0 @0x6d5cbfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        push ecx
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        add esp, 0x20
        pop esi
        add esp, 0x2000
        ret 
        UNREACHABLE_TRAP(0x6d5cbb0)
    }
}

#undef public_6d5cbdd
