#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);
CLANG_FORWARD_PROC_SYMBOL(public_66fca80);
CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_66fcafb _public_66fcafb
#define public_66fcb18 _public_66fcb18
#define public_66fcb6c _public_66fcb6c
#define public_66fcb89 _public_66fcb89
#define public_66fcbdd _public_66fcbdd
#define public_66fcbfa _public_66fcbfa
#define public_66fcc4d _public_66fcc4d
#define public_66fcc6a _public_66fcc6a
#define public_66fccbe _public_66fccbe
#define public_66fccdb _public_66fccdb
#define public_66fcd2f _public_66fcd2f
#define public_66fcd4c _public_66fcd4c
#define public_66fcd9f _public_66fcd9f
#define public_66fcdbc _public_66fcdbc
#define public_66fce10 _public_66fce10
#define public_66fce2d _public_66fce2d
#define public_66fce81 _public_66fce81
#define public_66fce9e _public_66fce9e

PROC_DECLARE(0x66fca80, internal_66fca80, public_66fca80);
extern "C" NAKED register_t __cdecl internal_66fca80()
{
    __asm
    {
        mov eax, 0x2008
        call public_67008b0
        mov eax, dword ptr ss : [esp+0x200C]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2018]
        push edi
/*FIXUP push offset public_6704608 @0x66fca9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704608
        xor ebx, ebx
        push ebx
/*FIXUP push offset public_67016e0 @0x66fcaa3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016e0
/*FIXUP push offset public_67016e0 @0x66fcaa8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016e0
        mov dword ptr ds : [public_6704630], eax
        mov dword ptr ds : [public_6704608], ebx
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        mov edi, dword ptr ds : [public_6701004]
/*FIXUP push offset public_67016e0 @0x66fcac6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016e0
        je public_66fcafb
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcad1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push edx
        call public_66f14c0
        push eax
        mov eax, dword ptr ds : [public_6701000]
        push 0x49
/*FIXUP push offset public_6702b2c @0x66fcae4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcaee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        jmp public_66fcb18
        public_66fcafb : nop
        mov dword ptr ss : [esp+0x10], offset public_67016e0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+0x48]
/*FIXUP public_66fcb18 : nop
        push offset public_670460c @0x66fcb18*/
  FIXUP public_66fcb18 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_670460c
        push ebx
/*FIXUP push offset public_6702b00 @0x66fcb1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b00
/*FIXUP push offset public_6702b00 @0x66fcb23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b00
        mov dword ptr ds : [public_670460c], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x3C]
        test eax, eax
/*FIXUP push offset public_6702b00 @0x66fcb36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b00
        je public_66fcb6c
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcb41*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push ecx
        call public_66f14c0
        mov edx, dword ptr ds : [public_6701000]
        push eax
        push 0x4A
/*FIXUP push offset public_6702b2c @0x66fcb55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcb5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        jmp public_66fcb89
        public_66fcb6c : nop
        mov dword ptr ss : [esp+0x10], offset public_6702b00
        call edi
        add esp, 4
        lea ecx, ss:[esp+0xC]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x48]
/*FIXUP public_66fcb89 : nop
        push offset public_6704610 @0x66fcb89*/
  FIXUP public_66fcb89 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704610
        push ebx
/*FIXUP push offset public_6702af0 @0x66fcb8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702af0
/*FIXUP push offset public_6702af0 @0x66fcb94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702af0
        mov dword ptr ds : [public_6704610], ebx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x3C]
        test eax, eax
/*FIXUP push offset public_6702af0 @0x66fcba7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702af0
        je public_66fcbdd
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcbb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push eax
        call public_66f14c0
        push eax
        push 0x4B
/*FIXUP push offset public_6702b2c @0x66fcbc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcbca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        mov ecx, dword ptr ds : [public_6701000]
        call dword ptr ds : [ecx]
        add esp, 0x20
        jmp public_66fcbfa
        public_66fcbdd : nop
        mov dword ptr ss : [esp+0x10], offset public_6702af0
        call edi
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0xC]
        push eax
        push ebx
        push esi
        call dword ptr ds : [edx+0x48]
/*FIXUP public_66fcbfa : nop
        push offset public_6704614 @0x66fcbfa*/
  FIXUP public_66fcbfa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704614
        push ebx
/*FIXUP push offset public_670149c @0x66fcc00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670149c
/*FIXUP push offset public_670149c @0x66fcc05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670149c
        mov dword ptr ds : [public_6704614], ebx
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
/*FIXUP push offset public_670149c @0x66fcc18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670149c
        je public_66fcc4d
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcc23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push edx
        call public_66f14c0
        push eax
        mov eax, dword ptr ds : [public_6701000]
        push 0x4C
/*FIXUP push offset public_6702b2c @0x66fcc36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcc40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        jmp public_66fcc6a
        public_66fcc4d : nop
        mov dword ptr ss : [esp+0x10], offset public_670149c
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+0x48]
/*FIXUP public_66fcc6a : nop
        push offset public_6704618 @0x66fcc6a*/
  FIXUP public_66fcc6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704618
        push ebx
/*FIXUP push offset public_6702ae0 @0x66fcc70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ae0
/*FIXUP push offset public_6702ae0 @0x66fcc75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ae0
        mov dword ptr ds : [public_6704618], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x3C]
        test eax, eax
/*FIXUP push offset public_6702ae0 @0x66fcc88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ae0
        je public_66fccbe
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcc93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push ecx
        call public_66f14c0
        mov edx, dword ptr ds : [public_6701000]
        push eax
        push 0x4D
/*FIXUP push offset public_6702b2c @0x66fcca7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fccb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        jmp public_66fccdb
        public_66fccbe : nop
        mov dword ptr ss : [esp+0x10], offset public_6702ae0
        call edi
        add esp, 4
        lea ecx, ss:[esp+0xC]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x48]
/*FIXUP public_66fccdb : nop
        push offset public_670461c @0x66fccdb*/
  FIXUP public_66fccdb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_670461c
        push ebx
/*FIXUP push offset public_6702acc @0x66fcce1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702acc
/*FIXUP push offset public_6702acc @0x66fcce6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702acc
        mov dword ptr ds : [public_670461c], ebx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x3C]
        test eax, eax
/*FIXUP push offset public_6702acc @0x66fccf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702acc
        je public_66fcd2f
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcd04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push eax
        call public_66f14c0
        push eax
        push 0x4E
/*FIXUP push offset public_6702b2c @0x66fcd12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcd1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        mov ecx, dword ptr ds : [public_6701000]
        call dword ptr ds : [ecx]
        add esp, 0x20
        jmp public_66fcd4c
        public_66fcd2f : nop
        mov dword ptr ss : [esp+0x10], offset public_6702acc
        call edi
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0xC]
        push eax
        push ebx
        push esi
        call dword ptr ds : [edx+0x48]
/*FIXUP public_66fcd4c : nop
        push offset public_6704620 @0x66fcd4c*/
  FIXUP public_66fcd4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704620
        push ebx
/*FIXUP push offset public_6702ab8 @0x66fcd52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ab8
/*FIXUP push offset public_6702ab8 @0x66fcd57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ab8
        mov dword ptr ds : [public_6704620], ebx
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
/*FIXUP push offset public_6702ab8 @0x66fcd6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702ab8
        je public_66fcd9f
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcd75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push edx
        call public_66f14c0
        push eax
        mov eax, dword ptr ds : [public_6701000]
        push 0x4F
/*FIXUP push offset public_6702b2c @0x66fcd88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fcd92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        jmp public_66fcdbc
        public_66fcd9f : nop
        mov dword ptr ss : [esp+0x10], offset public_6702ab8
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+0x48]
/*FIXUP public_66fcdbc : nop
        push offset public_6704624 @0x66fcdbc*/
  FIXUP public_66fcdbc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704624
        push ebx
/*FIXUP push offset public_6702aa8 @0x66fcdc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702aa8
/*FIXUP push offset public_6702aa8 @0x66fcdc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702aa8
        mov dword ptr ds : [public_6704624], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x3C]
        test eax, eax
/*FIXUP push offset public_6702aa8 @0x66fcdda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702aa8
        je public_66fce10
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fcde5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push ecx
        call public_66f14c0
        mov edx, dword ptr ds : [public_6701000]
        push eax
        push 0x50
/*FIXUP push offset public_6702b2c @0x66fcdf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fce03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        jmp public_66fce2d
        public_66fce10 : nop
        mov dword ptr ss : [esp+0x10], offset public_6702aa8
        call edi
        add esp, 4
        lea ecx, ss:[esp+0xC]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x48]
/*FIXUP public_66fce2d : nop
        push offset public_6704628 @0x66fce2d*/
  FIXUP public_66fce2d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704628
        push ebx
/*FIXUP push offset public_6702a90 @0x66fce33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702a90
/*FIXUP push offset public_6702a90 @0x66fce38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702a90
        mov dword ptr ds : [public_6704628], ebx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x3C]
        test eax, eax
/*FIXUP push offset public_6702a90 @0x66fce4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702a90
        je public_66fce81
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6702b60 @0x66fce56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b60
        push eax
        call public_66f14c0
        push eax
        push 0x51
/*FIXUP push offset public_6702b2c @0x66fce64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov ecx, 0x100001
/*FIXUP push offset public_6702b10 @0x66fce6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push ecx
        mov ecx, dword ptr ds : [public_6701000]
        call dword ptr ds : [ecx]
        add esp, 0x20
        jmp public_66fce9e
        public_66fce81 : nop
        mov dword ptr ss : [esp+0x10], offset public_6702a90
        call edi
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0xC]
        push eax
        push ebx
        push esi
        call dword ptr ds : [edx+0x48]
        public_66fce9e : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC]
        push edx
        push 4
        push esi
        mov dword ptr ss : [esp+0x18], 1
        call dword ptr ds : [ecx+0x5C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2008
        ret 
        UNREACHABLE_TRAP(0x66fca80)
    }
}

#undef public_66fcafb
#undef public_66fcb18
#undef public_66fcb6c
#undef public_66fcb89
#undef public_66fcbdd
#undef public_66fcbfa
#undef public_66fcc4d
#undef public_66fcc6a
#undef public_66fccbe
#undef public_66fccdb
#undef public_66fcd2f
#undef public_66fcd4c
#undef public_66fcd9f
#undef public_66fcdbc
#undef public_66fce10
#undef public_66fce2d
#undef public_66fce81
#undef public_66fce9e
