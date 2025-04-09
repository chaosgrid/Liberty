#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);

#define public_4f9633 _public_4f9633
#define public_4f9677 _public_4f9677
#define public_4f967a _public_4f967a
#define public_4f967f _public_4f967f
#define public_4f9682 _public_4f9682
#define public_4f96ba _public_4f96ba
#define public_4f96d5 _public_4f96d5
#define public_4f96e4 _public_4f96e4
#define public_4f9708 _public_4f9708
#define public_4f9773 _public_4f9773
#define public_4f9776 _public_4f9776
#define public_4f977b _public_4f977b
#define public_4f977e _public_4f977e
#define public_4f9789 _public_4f9789
#define public_4f9792 _public_4f9792

PROC_DECLARE(0x4f9600, internal_4f9600, public_4f9600);
extern "C" NAKED register_t __cdecl internal_4f9600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        sub esp, 0x1C
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x6C], eax
        je public_4f9789
        push 0x2C
        mov dword ptr ds : [esi+0x5C], 0x2C
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_4f9633
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xC], ecx
        public_4f9633 : nop
        mov dl, byte ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x68]
        and dl, 0xFD
        test ecx, ecx
        mov byte ptr ds : [esi+8], dl
        mov al, dl
        jne public_4f9682
        test al, 2
        jne public_4f9682
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        test eax, eax
        lea edx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], esi
        lea ecx, ds : [edx*4+public_674ce0]
        je public_4f967f
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_4f9677
        mov dword ptr ds : [edx], eax
        jmp public_4f967a
        public_4f9677 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f967a : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f967f : nop
        inc dword ptr ds : [esi+0x58]
        public_4f9682 : nop
        mov eax, dword ptr ds : [public_674f54]
        test eax, eax
        jne public_4f9792
        push edi
/*FIXUP push offset public_5d9e00 @0x4f9690*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9e00
        lea ecx, ss:[esp+0xC]
        xor edi, edi
        call public_4205c0
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_674f24
        call public_420690
        test al, al
        je public_4f96ba
        mov eax, dword ptr ds : [public_674f38]
        jmp public_4f96d5
        public_4f96ba : nop
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, offset public_674f24
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_674f38], eax
        public_4f96d5 : nop
        cmp eax, dword ptr ds : [public_674f28]
        je public_4f96e4
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_4f9708
/*FIXUP public_4f96e4 : nop
        push offset public_5d9e00 @0x4f96e4*/
  FIXUP public_4f96e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9e00
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x4f96ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x4f96f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4f9708 : nop
        mov dword ptr ds : [public_674f54], edi
        test edi, edi
        pop edi
        jne public_4f9792
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d9dd0 @0x4f9719*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9dd0
        push 0x5DF
/*FIXUP push offset public_5d9b48 @0x4f9723*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4f972d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 0x14
        test eax, eax
        jne public_4f977e
        test byte ptr ds : [esi+8], 2
        jne public_4f977e
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        test eax, eax
        lea edx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], esi
        lea ecx, ds : [edx*4+public_674ce0]
        je public_4f977b
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_4f9773
        mov dword ptr ds : [edx], eax
        jmp public_4f9776
        public_4f9773 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f9776 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f977b : nop
        inc dword ptr ds : [esi+0x58]
        public_4f977e : nop
        mov ecx, esi
        call public_4f7db0
        or byte ptr ds : [esi+8], 2
        public_4f9789 : nop
        xor al, al
        pop esi
        add esp, 0x1C
        ret 4
        public_4f9792 : nop
        mov al, 1
        pop esi
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x4f9600)
    }
}

#undef public_4f9633
#undef public_4f9677
#undef public_4f967a
#undef public_4f967f
#undef public_4f9682
#undef public_4f96ba
#undef public_4f96d5
#undef public_4f96e4
#undef public_4f9708
#undef public_4f9773
#undef public_4f9776
#undef public_4f977b
#undef public_4f977e
#undef public_4f9789
#undef public_4f9792
