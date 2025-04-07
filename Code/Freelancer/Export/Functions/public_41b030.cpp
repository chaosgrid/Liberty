#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_41b590);
CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_41bd90);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);

#define public_41b086 _public_41b086
#define public_41b09e _public_41b09e
#define public_41b0b6 _public_41b0b6
#define public_41b0ce _public_41b0ce
#define public_41b100 _public_41b100
#define public_41b10f _public_41b10f
#define public_41b120 _public_41b120
#define public_41b13c _public_41b13c

PROC_DECLARE(0x41b030, internal_41b030, public_41b030);
extern "C" NAKED register_t __cdecl internal_41b030()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        push edi
        xor edi, edi
        or ebx, 0xFFFFFFFF
        cmp eax, edi
        je public_41b13c
        push esi
/*FIXUP push offset public_6166ec @0x41b04b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        mov esi, dword ptr ss : [ebp]
        cmp esi, edi
        je public_41b120
        mov ecx, dword ptr ds : [esi+0x14]
        dec ecx
        mov eax, ecx
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], ecx
        jg public_41b0ce
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_41b086
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi+4], ebx
        public_41b086 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_41b09e
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov dword ptr ds : [esi+8], ebx
        public_41b09e : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_41b0b6
        mov ecx, dword ptr ds : [public_5c6d7c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x10], edi
        public_41b0b6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edi
        je public_41b0ce
        mov ecx, dword ptr ds : [public_5c6d84]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC], edi
        public_41b0ce : nop
        mov ebx, dword ptr ds : [esi+0x14]
        cmp ebx, edi
        jg public_41b120
        push esi
        mov ecx, offset public_6166d8
        call public_41bd90
        mov edi, eax
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6166d8
        call public_41bd10
        mov esi, dword ptr ds : [eax]
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], esi
        je public_41b10f
        lea esp, ss:[esp]
        public_41b100 : nop
        lea ecx, ss:[esp+0x1C]
        call public_433a00
        cmp dword ptr ss : [esp+0x1C], edi
        jne public_41b100
        public_41b10f : nop
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6166d8
        call public_41b590
/*FIXUP public_41b120 : nop
        push offset public_6166ec @0x41b120*/
  FIXUP public_41b120 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        pop esi
        pop edi
        mov dword ptr ss : [ebp], 0
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 
        public_41b13c : nop
        mov dword ptr ss : [ebp], edi
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x41b030)
    }
}

#undef public_41b086
#undef public_41b09e
#undef public_41b0b6
#undef public_41b0ce
#undef public_41b100
#undef public_41b10f
#undef public_41b120
#undef public_41b13c
