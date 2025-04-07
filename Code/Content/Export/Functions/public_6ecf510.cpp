#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf190);
CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ecf53a _public_6ecf53a
#define public_6ecf53c _public_6ecf53c
#define public_6ecf545 _public_6ecf545
#define public_6ecf547 _public_6ecf547
#define public_6ecf562 _public_6ecf562
#define public_6ecf579 _public_6ecf579
#define public_6ecf580 _public_6ecf580
#define public_6ecf587 _public_6ecf587
#define public_6ecf58c _public_6ecf58c
#define public_6ecf59b _public_6ecf59b

PROC_DECLARE(0x6ecf510, internal_6ecf510, public_6ecf510);
extern "C" NAKED register_t __cdecl internal_6ecf510()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+8]
        push edi
        push eax
        call public_6f49b00
        lea ebx, ds:[esi+4]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        test eax, 0x3FFFFFFF
        je public_6ecf53a
        mov ecx, dword ptr ds : [esi+0x34]
        push ebx
        call public_6f156b0
        jmp public_6ecf53c
        public_6ecf53a : nop
        xor eax, eax
        public_6ecf53c : nop
        test edi, edi
        je public_6ecf545
        mov ecx, dword ptr ds : [edi+0x10]
        jmp public_6ecf547
        public_6ecf545 : nop
        xor ecx, ecx
        public_6ecf547 : nop
        test eax, eax
        je public_6ecf562
        test ecx, ecx
        je public_6ecf562
        mov eax, dword ptr ds : [eax+0x154]
        cmp eax, dword ptr ds : [ecx+0x154]
        jne public_6ecf562
        cmp eax, 0xFFFFFFFF
        jne public_6ecf58c
        public_6ecf562 : nop
        mov al, byte ptr ds : [esi+0x60]
        test al, al
        je public_6ecf580
        mov al, byte ptr ds : [esi+0x63]
        test al, al
        mov ecx, esi
        jne public_6ecf579
/*FIXUP push offset public_6fb46d0 @0x6ecf572*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46d0
        jmp public_6ecf587
/*FIXUP public_6ecf579 : nop
        push offset public_6fb46d8 @0x6ecf579*/
  FIXUP public_6ecf579 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46d8
        jmp public_6ecf587
        public_6ecf580 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        public_6ecf587 : nop
        call public_6ecf190
        public_6ecf58c : nop
        test dword ptr ds : [ebx], 0x3FFFFFFF
        jne public_6ecf59b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        public_6ecf59b : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecf510)
    }
}

#undef public_6ecf53a
#undef public_6ecf53c
#undef public_6ecf545
#undef public_6ecf547
#undef public_6ecf562
#undef public_6ecf579
#undef public_6ecf580
#undef public_6ecf587
#undef public_6ecf58c
#undef public_6ecf59b
