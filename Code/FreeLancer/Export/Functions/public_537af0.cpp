#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_5374e0);
CLANG_FORWARD_PROC_SYMBOL(public_537af0);

#define public_537b0b _public_537b0b
#define public_537b0d _public_537b0d
#define public_537b62 _public_537b62
#define public_537b8d _public_537b8d

PROC_DECLARE(0x537af0, internal_537af0, public_537af0);
extern "C" NAKED register_t __cdecl internal_537af0()
{
    __asm
    {
        push esi
        mov ecx, offset public_6789a4
        call dword ptr ds : [public_5c60c0]
        test eax, eax
        je public_537b0b
        mov ecx, eax
        call public_5374e0
        mov esi, eax
        jmp public_537b0d
        public_537b0b : nop
        xor esi, esi
        public_537b0d : nop
        push 1
        push 1
        mov ecx, esi
        call public_4110c0
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_410ef0
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, esi
        call public_4115b0
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, esi
        call public_411300
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_537b8d
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov eax, ecx
        test eax, eax
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_537b62
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_537b62 : nop
        fld dword ptr ss : [esp+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push 0x203
/*FIXUP push offset public_5de6e4 @0x537b71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de6e4
        mov eax, 0x100002
/*FIXUP push offset public_5de6ac @0x537b7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de6ac
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        xor esi, esi
        call dword ptr ds : [eax]
        add esp, 0x18
        public_537b8d : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x537af0)
    }
}

#undef public_537b0b
#undef public_537b0d
#undef public_537b62
#undef public_537b8d
