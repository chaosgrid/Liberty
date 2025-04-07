#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_65ffc20);
CLANG_FORWARD_PROC_SYMBOL(public_65ffc50);
CLANG_FORWARD_PROC_SYMBOL(public_66002c0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bee);

#define public_65ff770 _public_65ff770
#define public_65ff78a _public_65ff78a
#define public_65ffa8f _public_65ffa8f
#define public_65ffa9f _public_65ffa9f

PROC_DECLARE(0x65ff750, internal_65ff750, public_65ff750);
extern "C" NAKED register_t __cdecl internal_65ff750()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66033f4]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_65ff78a
        or cl, al
        mov byte ptr ds : [public_66033f4], cl
        mov esi, offset public_6603400
        mov edi, 0xA
        public_65ff770 : nop
        mov ecx, esi
        call public_65ffc20
        add esi, 0x4C
        dec edi
        jne public_65ff770
/*FIXUP push offset _public_66002c0 @0x65ff77d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66002c0
        call public_6600bee
        add esp, 4
        public_65ff78a : nop
        mov eax, dword ptr ds : [public_6603410]
        xor edi, edi
        cmp eax, edi
        jne public_65ffa8f
/*FIXUP push offset public_660140c @0x65ff799*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        mov esi, offset public_66031ac
        push 3
        mov ecx, offset public_6603410
        mov dword ptr ds : [public_6603400], edi
        mov dword ptr ds : [public_6603404], offset public_6602c10
        mov dword ptr ds : [public_6603408], offset public_6602c00
        mov dword ptr ds : [public_660340c], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff7cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_6603424
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff7e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 3
        mov ecx, offset public_6603438
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff7f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 3
        mov ecx, offset public_660345c
        mov dword ptr ds : [public_660344c], edi
        mov dword ptr ds : [public_6603450], offset public_6602bfc
        mov dword ptr ds : [public_6603454], offset public_6602bec
        mov dword ptr ds : [public_6603458], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff822*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_6603470
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff833*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 3
        mov ecx, offset public_6603484
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_66034a8
        mov dword ptr ds : [public_6603498], edi
        mov dword ptr ds : [public_660349c], offset public_6602be8
        mov dword ptr ds : [public_66034a0], offset public_6602bd8
        mov dword ptr ds : [public_66034a4], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff875*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_66034bc
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff886*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 3
        mov ecx, offset public_66034d0
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_66034f4
        mov dword ptr ds : [public_66034e4], edi
        mov dword ptr ds : [public_66034e8], offset public_6602bd4
        mov dword ptr ds : [public_66034ec], offset public_6602bc4
        mov dword ptr ds : [public_66034f0], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff8c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 3
        mov ecx, offset public_6603508
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff8d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 3
        mov ecx, offset public_660351c
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff8ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 2
        mov ecx, offset public_6603540
        mov dword ptr ds : [public_6603530], edi
        mov dword ptr ds : [public_6603534], offset public_6602bc0
        mov dword ptr ds : [public_6603538], offset public_6602bb0
        mov dword ptr ds : [public_660353c], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff91b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 2
        mov ecx, offset public_6603554
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff92c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 2
        mov ecx, offset public_6603568
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff93d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 2
        mov ecx, offset public_660358c
        mov dword ptr ds : [public_660357c], edi
        mov dword ptr ds : [public_6603580], offset public_6602bac
        mov dword ptr ds : [public_6603584], offset public_6602ba0
        mov dword ptr ds : [public_6603588], esi
        call public_65ffab0
/*FIXUP push offset public_66013fc @0x65ff96e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66013fc
        push 2
        mov ecx, offset public_66035a0
        call public_65ffab0
/*FIXUP push offset public_660140c @0x65ff97f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660140c
        push 2
        mov ecx, offset public_66035b4
        call public_65ffab0
/*FIXUP push offset public_6602b30 @0x65ff990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602b30
        push 7
        mov ecx, offset public_66035d8
        mov dword ptr ds : [public_66035c8], edi
        mov dword ptr ds : [public_66035cc], offset public_6602b98
        mov dword ptr ds : [public_66035d0], offset public_6602b88
        mov dword ptr ds : [public_66035d4], esi
        call public_65ffab0
        push edi
        push 7
        mov ecx, offset public_66035ec
        call public_65ffab0
        push edi
        push 7
        mov ecx, offset public_6603600
        call public_65ffab0
        push 4
        push 8
        mov ecx, offset public_6603624
        mov dword ptr ds : [public_6603614], edi
        mov dword ptr ds : [public_6603618], offset public_6602b7c
        mov dword ptr ds : [public_660361c], offset public_6602b68
        mov dword ptr ds : [public_6603620], esi
        call public_65ffab0
        push edi
        push 8
        mov ecx, offset public_6603638
        call public_65ffab0
        push edi
        push 8
        mov ecx, offset public_660364c
        call public_65ffab0
        push 2
        push 9
        mov ecx, offset public_6603670
        mov dword ptr ds : [public_6603660], 0x20000
        mov dword ptr ds : [public_6603664], offset public_6602b7c
        mov dword ptr ds : [public_6603668], offset public_6602b50
        mov dword ptr ds : [public_660366c], esi
        call public_65ffab0
        push edi
        push 9
        mov ecx, offset public_6603684
        call public_65ffab0
        push edi
        push 9
        mov ecx, offset public_6603698
        call public_65ffab0
        push edi
        push edi
        push 2
        push esi
/*FIXUP push offset public_6602b38 @0x65ffa74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602b38
/*FIXUP push offset public_6602b7c @0x65ffa79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602b7c
        push 0x40000
        push 9
        mov ecx, offset public_66036ac
        call public_65ffc50
        public_65ffa8f : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_65ffa9f
        mov dword ptr ds : [eax], offset public_6603400
        public_65ffa9f : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x65ff750)
    }
}

#undef public_65ff770
#undef public_65ff78a
#undef public_65ffa8f
#undef public_65ffa9f
