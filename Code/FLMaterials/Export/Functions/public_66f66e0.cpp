#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f6dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f671b _public_66f671b
#define public_66f6a21 _public_66f6a21
#define public_66f6a30 _public_66f6a30

PROC_DECLARE(0x66f66e0, internal_66f66e0, public_66f66e0);
extern "C" NAKED register_t __cdecl internal_66f66e0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67055f8]
        mov al, 1
        test al, cl
        jne public_66f671b
/*FIXUP push offset _public_66f3cd0 @0x66f66ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f66f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6705600 @0x66f66fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705600
        mov byte ptr ds : [public_67055f8], dl
        call public_6700820
/*FIXUP push offset _public_66f6dd0 @0x66f670e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f6dd0
        call public_6700912
        add esp, 4
        public_66f671b : nop
        mov eax, dword ptr ds : [public_6705610]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f6a21
        push esi
/*FIXUP push offset public_6701ba8 @0x66f672c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6705610
        mov dword ptr ds : [public_6705600], edi
        mov dword ptr ds : [public_6705604], offset public_67016d0
        mov dword ptr ds : [public_6705608], offset public_67016c0
        mov dword ptr ds : [public_670560c], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f6762*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_6705624
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f6773*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 3
        mov ecx, offset public_6705638
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f6784*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 3
        mov ecx, offset public_670565c
        mov dword ptr ds : [public_670564c], edi
        mov dword ptr ds : [public_6705650], offset public_67016bc
        mov dword ptr ds : [public_6705654], offset public_67016ac
        mov dword ptr ds : [public_6705658], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f67b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_6705670
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f67c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 3
        mov ecx, offset public_6705684
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f67d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_67056a8
        mov dword ptr ds : [public_6705698], edi
        mov dword ptr ds : [public_670569c], offset public_67016a8
        mov dword ptr ds : [public_67056a0], offset public_6701698
        mov dword ptr ds : [public_67056a4], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f6808*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_67056bc
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f6819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 3
        mov ecx, offset public_67056d0
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f682a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_67056f4
        mov dword ptr ds : [public_67056e4], edi
        mov dword ptr ds : [public_67056e8], offset public_6701694
        mov dword ptr ds : [public_67056ec], offset public_6701684
        mov dword ptr ds : [public_67056f0], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f685b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 3
        mov ecx, offset public_6705708
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f686c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 3
        mov ecx, offset public_670571c
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f687d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 2
        mov ecx, offset public_6705740
        mov dword ptr ds : [public_6705730], edi
        mov dword ptr ds : [public_6705734], offset public_6701680
        mov dword ptr ds : [public_6705738], offset public_6701670
        mov dword ptr ds : [public_670573c], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f68ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 2
        mov ecx, offset public_6705754
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f68bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 2
        mov ecx, offset public_6705768
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f68d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 2
        mov ecx, offset public_670578c
        mov dword ptr ds : [public_670577c], edi
        mov dword ptr ds : [public_6705780], offset public_670166c
        mov dword ptr ds : [public_6705784], offset public_6701660
        mov dword ptr ds : [public_6705788], esi
        call public_66f3b30
/*FIXUP push offset public_6701b98 @0x66f6901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701b98
        push 2
        mov ecx, offset public_67057a0
        call public_66f3b30
/*FIXUP push offset public_6701ba8 @0x66f6912*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701ba8
        push 2
        mov ecx, offset public_67057b4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f6923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_67057d8
        mov dword ptr ds : [public_67057c8], edi
        mov dword ptr ds : [public_67057cc], offset public_6701658
        mov dword ptr ds : [public_67057d0], offset public_6701648
        mov dword ptr ds : [public_67057d4], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_67057ec
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705800
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6705824
        mov dword ptr ds : [public_6705814], edi
        mov dword ptr ds : [public_6705818], offset public_670163c
        mov dword ptr ds : [public_670581c], offset public_6701628
        mov dword ptr ds : [public_6705820], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705838
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_670584c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705870
        mov dword ptr ds : [public_6705860], 0x20000
        mov dword ptr ds : [public_6705864], offset public_670163c
        mov dword ptr ds : [public_6705868], offset public_6701610
        mov dword ptr ds : [public_670586c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705884
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705898
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f6a05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f6a0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_67058ac
        call public_66f3de0
        pop esi
        public_66f6a21 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f6a30
        mov dword ptr ds : [eax], offset public_6705600
        public_66f6a30 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f66e0)
    }
}

#undef public_66f671b
#undef public_66f6a21
#undef public_66f6a30
