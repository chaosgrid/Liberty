#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4f819a _public_4f819a
#define public_4f81bc _public_4f81bc
#define public_4f81db _public_4f81db
#define public_4f81e7 _public_4f81e7
#define public_4f81fd _public_4f81fd
#define public_4f8259 _public_4f8259
#define public_4f8288 _public_4f8288
#define public_4f8291 _public_4f8291
#define public_4f82a5 _public_4f82a5
#define public_4f82d3 _public_4f82d3
#define public_4f8336 _public_4f8336
#define public_4f8339 _public_4f8339
#define public_4f833e _public_4f833e
#define public_4f8341 _public_4f8341

PROC_DECLARE(0x4f8160, internal_4f8160, public_4f8160);
extern "C" NAKED register_t __cdecl internal_4f8160()
{
    __asm
    {
        mov eax, 0x2000
        call public_5b7e90
        push esi
        mov esi, ecx
        mov dl, byte ptr ds : [esi+8]
        mov cl, byte ptr ds : [esi+0x7C]
        push edi
        mov edi, dword ptr ss : [esp+0x200C]
        or dl, 2
        and cl, 0xEF
        test edi, edi
        mov byte ptr ds : [esi+8], dl
        mov byte ptr ds : [esi+0x7C], cl
        jne public_4f819a
/*FIXUP push offset public_5d9b98 @0x4f818b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b98
        push 0x37C
        jmp public_4f82a5
        public_4f819a : nop
        push 0x26
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f81bc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        pop edi
        xor al, al
        pop esi
        add esp, 0x2000
        ret 4
        public_4f81bc : nop
        mov ecx, dword ptr ds : [public_5c6ddc]
        cmp dword ptr ds : [ecx], 0
        jne public_4f81db
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        xor al, al
        pop esi
        add esp, 0x2000
        ret 4
        public_4f81db : nop
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        jg public_4f81e7
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x5C], eax
        public_4f81e7 : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        push ecx
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_4f81fd
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xC], edx
        public_4f81fd : nop
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_4fd560
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        jne public_4f8259
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0xC]
/*FIXUP push offset public_5d9b78 @0x4f8219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b78
        push ecx
        call public_402180
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x395
/*FIXUP push offset public_5d9b48 @0x4f8230*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov ecx, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4f823a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push ecx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
        add esp, 0x20
        mov ecx, esi
        call dword ptr ds : [eax+4]
        pop edi
        xor al, al
        pop esi
        add esp, 0x2000
        ret 4
        public_4f8259 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_6129c8]
        fnstsw ax
        test ah, 5
        jp public_4f8288
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_6129c8]
        fnstsw ax
        test ah, 1
        jne public_4f8288
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_4f8288
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx+8]
        jmp public_4f8291
        public_4f8288 : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx+4]
        public_4f8291 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+0xC], edx
        jne public_4f82d3
/*FIXUP push offset public_5d9b00 @0x4f829b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b00
        push 0x3B0
/*FIXUP public_4f82a5 : nop
        push offset public_5d9b48 @0x4f82a5*/
  FIXUP public_4f82a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4f82af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        add esp, 0x14
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        xor al, al
        pop esi
        add esp, 0x2000
        ret 4
        public_4f82d3 : nop
        mov al, byte ptr ds : [esi+0x7C]
        mov dl, byte ptr ds : [esi+8]
        or al, 0x10
        and dl, 0xFD
        mov byte ptr ds : [esi+8], dl
        mov edx, dword ptr ds : [esi]
        mov byte ptr ds : [esi+0x7C], al
        mov eax, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [esi+0x78], eax
        mov ecx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi+0x74], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_4f8341
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        jne public_4f8341
        test byte ptr ds : [esi+8], 2
        jne public_4f8341
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        test eax, eax
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], esi
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f833e
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_4f8336
        mov dword ptr ds : [edx], eax
        jmp public_4f8339
        public_4f8336 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f8339 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f833e : nop
        inc dword ptr ds : [esi+0x58]
        public_4f8341 : nop
        mov al, byte ptr ds : [esi+0x7C]
        shr al, 4
        pop edi
        and al, 1
        pop esi
        add esp, 0x2000
        ret 4
        UNREACHABLE_TRAP(0x4f8160)
    }
}

#undef public_4f819a
#undef public_4f81bc
#undef public_4f81db
#undef public_4f81e7
#undef public_4f81fd
#undef public_4f8259
#undef public_4f8288
#undef public_4f8291
#undef public_4f82a5
#undef public_4f82d3
#undef public_4f8336
#undef public_4f8339
#undef public_4f833e
#undef public_4f8341
