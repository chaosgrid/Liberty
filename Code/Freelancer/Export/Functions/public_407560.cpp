#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_4075b0 _public_4075b0
#define public_4075db _public_4075db
#define public_407614 _public_407614
#define public_40763f _public_40763f
#define public_40766f _public_40766f
#define public_407692 _public_407692
#define public_4076b5 _public_4076b5
#define public_4076f3 _public_4076f3
#define public_407708 _public_407708
#define public_40771c _public_40771c
#define public_40775a _public_40775a
#define public_40776f _public_40776f
#define public_407783 _public_407783
#define public_4077c4 _public_4077c4
#define public_4077d9 _public_4077d9
#define public_4077f0 _public_4077f0
#define public_407816 _public_407816
#define public_40781b _public_40781b

PROC_DECLARE(0x407560, internal_407560, public_407560);
extern "C" NAKED register_t __cdecl internal_407560()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov edi, ecx
        mov byte ptr ss : [esp+0x13], 1
        call public_406dc0
        test al, al
        jne public_40781b
        mov ebp, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c78f0 @0x407583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78f0
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_4075b0
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x58], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_4075b0 : nop
        push offset public_5c78dc @0x4075b0*/
  FIXUP public_4075b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78dc
        call ebp
        test al, al
        mov ecx, esi
        je public_4075db
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x5C], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_4075db : nop
        push offset public_5c78d4 @0x4075db*/
  FIXUP public_4075db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78d4
        call ebp
        test al, al
        mov ecx, esi
        je public_407614
        call dword ptr ds : [public_5c6698]
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call dword ptr ds : [public_5c69a0]
        push 1
        push esi
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi+0x60], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_407614 : nop
        push offset public_5c78c8 @0x407614*/
  FIXUP public_407614 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78c8
        call ebp
        test al, al
        mov ecx, esi
        je public_40763f
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x64], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40763f : nop
        push offset public_5c78b8 @0x40763f*/
  FIXUP public_40763f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c78b8
        call ebp
        test al, al
        mov ecx, esi
        je public_40766f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x68]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x6C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40766f : nop
        push offset public_5c7898 @0x40766f*/
  FIXUP public_40766f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7898
        call ebp
        test al, al
        mov ecx, esi
        je public_407692
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x74]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_407692 : nop
        push offset public_5c787c @0x407692*/
  FIXUP public_407692 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c787c
        call ebp
        test al, al
        mov ecx, esi
        je public_4076b5
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x70]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_4076b5 : nop
        push offset public_5c785c @0x4076b5*/
  FIXUP public_4076b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c785c
        call ebp
        test al, al
        mov ecx, esi
        je public_40771c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4076f3
        mov al, byte ptr ss : [esp+0xF]
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ds : [edi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        public_4076f3 : nop
        fcom dword ptr ds : [public_5c77f0]
        fnstsw ax
        test ah, 0x41
        jne public_407708
        fstp st(0)
        fld dword ptr ds : [public_5c77f0]
        public_407708 : nop
        fmul dword ptr ds : [public_5c77f4]
        mov al, byte ptr ss : [esp+0xF]
        fstp dword ptr ds : [edi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40771c : nop
        push offset public_5c783c @0x40771c*/
  FIXUP public_40771c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c783c
        call ebp
        test al, al
        mov ecx, esi
        je public_407783
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_40775a
        mov al, byte ptr ss : [esp+0xF]
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ds : [edi+0x7C]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        public_40775a : nop
        fcom dword ptr ds : [public_5c77f0]
        fnstsw ax
        test ah, 0x41
        jne public_40776f
        fstp st(0)
        fld dword ptr ds : [public_5c77f0]
        public_40776f : nop
        fmul dword ptr ds : [public_5c77f4]
        mov al, byte ptr ss : [esp+0xF]
        fstp dword ptr ds : [edi+0x7C]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_407783 : nop
        push offset public_5c781c @0x407783*/
  FIXUP public_407783 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c781c
        call ebp
        test al, al
        mov ecx, esi
        je public_4077f0
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4077c4
        mov al, byte ptr ss : [esp+0xF]
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ds : [edi+0x80]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        public_4077c4 : nop
        fcom dword ptr ds : [public_5c77f0]
        fnstsw ax
        test ah, 0x41
        jne public_4077d9
        fstp st(0)
        fld dword ptr ds : [public_5c77f0]
        public_4077d9 : nop
        fmul dword ptr ds : [public_5c77f4]
        mov al, byte ptr ss : [esp+0xF]
        fstp dword ptr ds : [edi+0x80]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_4077f0 : nop
        push offset public_5c77f8 @0x4077f0*/
  FIXUP public_4077f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c77f8
        call ebp
        test al, al
        je public_407816
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x84]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        public_407816 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_40781b : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x407560)
    }
}

#undef public_4075b0
#undef public_4075db
#undef public_407614
#undef public_40763f
#undef public_40766f
#undef public_407692
#undef public_4076b5
#undef public_4076f3
#undef public_407708
#undef public_40771c
#undef public_40775a
#undef public_40776f
#undef public_407783
#undef public_4077c4
#undef public_4077d9
#undef public_4077f0
#undef public_407816
#undef public_40781b
