#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e7a);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e9f);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48552);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);

#define public_6d48e1b _public_6d48e1b
#define public_6d48e32 _public_6d48e32
#define public_6d48e4a _public_6d48e4a
#define public_6d48e65 _public_6d48e65
#define public_6d48e6f _public_6d48e6f
#define public_6d48e7c _public_6d48e7c
#define public_6d48e87 _public_6d48e87
#define public_6d48e8e _public_6d48e8e
#define public_6d48e90 _public_6d48e90

PROC_DECLARE(0x6d48e08, internal_6d48e08, public_6d48e08);
extern "C" NAKED register_t __cdecl internal_6d48e08()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0xA0]
        jmp public_6d48e32
        public_6d48e1b : nop
        push dword ptr ds : [esi+0xA0]
        push dword ptr ds : [esi+0x9C]
        push esi
        call public_6d48538
        add esp, 0xC
        sub ebx, edi
        public_6d48e32 : nop
        cmp ebx, edi
        ja public_6d48e1b
        test ebx, ebx
        je public_6d48e4a
        push ebx
        push dword ptr ds : [esi+0x9C]
        push esi
        call public_6d48538
        add esp, 0xC
        public_6d48e4a : nop
        push esi
        call public_6d48552
        test eax, eax
        pop ecx
        je public_6d48e8e
        mov al, byte ptr ds : [esi+0x10C]
        and al, 0x20
        je public_6d48e65
        test byte ptr ds : [esi+0x5D], 2
        je public_6d48e6f
        public_6d48e65 : nop
        test al, al
        jne public_6d48e7c
        test byte ptr ds : [esi+0x5D], 4
        je public_6d48e7c
/*FIXUP public_6d48e6f : nop
        push offset public_6d61630 @0x6d48e6f*/
  FIXUP public_6d48e6f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61630
        push esi
        call public_6d41e9f
        jmp public_6d48e87
/*FIXUP public_6d48e7c : nop
        push offset public_6d61630 @0x6d48e7c*/
  FIXUP public_6d48e7c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61630
        push esi
        call public_6d41e7a
        public_6d48e87 : nop
        pop ecx
        xor eax, eax
        pop ecx
        inc eax
        jmp public_6d48e90
        public_6d48e8e : nop
        xor eax, eax
        public_6d48e90 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d48e08)
    }
}

#undef public_6d48e1b
#undef public_6d48e32
#undef public_6d48e4a
#undef public_6d48e65
#undef public_6d48e6f
#undef public_6d48e7c
#undef public_6d48e87
#undef public_6d48e8e
#undef public_6d48e90
