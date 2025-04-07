#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_6700480);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66ffbab _public_66ffbab
#define public_66ffeb1 _public_66ffeb1
#define public_66ffec0 _public_66ffec0

PROC_DECLARE(0x66ffb70, internal_66ffb70, public_66ffb70);
extern "C" NAKED register_t __cdecl internal_66ffb70()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6704660]
        mov al, 1
        test al, cl
        jne public_66ffbab
/*FIXUP push offset _public_66f3cd0 @0x66ffb7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66ffb81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6704680 @0x66ffb8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704680
        mov byte ptr ds : [public_6704660], dl
        call public_6700820
/*FIXUP push offset _public_6700480 @0x66ffb9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6700480
        call public_6700912
        add esp, 4
        public_66ffbab : nop
        mov eax, dword ptr ds : [public_6704690]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66ffeb1
        push esi
/*FIXUP push offset public_6703064 @0x66ffbbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6704690
        mov dword ptr ds : [public_6704680], edi
        mov dword ptr ds : [public_6704684], offset public_67016d0
        mov dword ptr ds : [public_6704688], offset public_67016c0
        mov dword ptr ds : [public_670468c], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffbf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_67046a4
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffc03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 3
        mov ecx, offset public_67046b8
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffc14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 3
        mov ecx, offset public_67046dc
        mov dword ptr ds : [public_67046cc], edi
        mov dword ptr ds : [public_67046d0], offset public_67016bc
        mov dword ptr ds : [public_67046d4], offset public_67016ac
        mov dword ptr ds : [public_67046d8], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffc45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_67046f0
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffc56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 3
        mov ecx, offset public_6704704
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffc67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_6704728
        mov dword ptr ds : [public_6704718], edi
        mov dword ptr ds : [public_670471c], offset public_67016a8
        mov dword ptr ds : [public_6704720], offset public_6701698
        mov dword ptr ds : [public_6704724], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffc98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_670473c
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 3
        mov ecx, offset public_6704750
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffcba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_6704774
        mov dword ptr ds : [public_6704764], edi
        mov dword ptr ds : [public_6704768], offset public_6701694
        mov dword ptr ds : [public_670476c], offset public_6701684
        mov dword ptr ds : [public_6704770], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 3
        mov ecx, offset public_6704788
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffcfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 3
        mov ecx, offset public_670479c
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffd0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 2
        mov ecx, offset public_67047c0
        mov dword ptr ds : [public_67047b0], edi
        mov dword ptr ds : [public_67047b4], offset public_6701680
        mov dword ptr ds : [public_67047b8], offset public_6701670
        mov dword ptr ds : [public_67047bc], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffd3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 2
        mov ecx, offset public_67047d4
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffd4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 2
        mov ecx, offset public_67047e8
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffd60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 2
        mov ecx, offset public_670480c
        mov dword ptr ds : [public_67047fc], edi
        mov dword ptr ds : [public_6704800], offset public_670166c
        mov dword ptr ds : [public_6704804], offset public_6701660
        mov dword ptr ds : [public_6704808], esi
        call public_66f3b30
/*FIXUP push offset public_6703054 @0x66ffd91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703054
        push 2
        mov ecx, offset public_6704820
        call public_66f3b30
/*FIXUP push offset public_6703064 @0x66ffda2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703064
        push 2
        mov ecx, offset public_6704834
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66ffdb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6704858
        mov dword ptr ds : [public_6704848], edi
        mov dword ptr ds : [public_670484c], offset public_6701658
        mov dword ptr ds : [public_6704850], offset public_6701648
        mov dword ptr ds : [public_6704854], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_670486c
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704880
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_67048a4
        mov dword ptr ds : [public_6704894], edi
        mov dword ptr ds : [public_6704898], offset public_670163c
        mov dword ptr ds : [public_670489c], offset public_6701628
        mov dword ptr ds : [public_67048a0], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_67048b8
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_67048cc
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_67048f0
        mov dword ptr ds : [public_67048e0], 0x20000
        mov dword ptr ds : [public_67048e4], offset public_670163c
        mov dword ptr ds : [public_67048e8], offset public_6701610
        mov dword ptr ds : [public_67048ec], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704904
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704918
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66ffe95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66ffe9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_670492c
        call public_66f3de0
        pop esi
        public_66ffeb1 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66ffec0
        mov dword ptr ds : [eax], offset public_6704680
        public_66ffec0 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66ffb70)
    }
}

#undef public_66ffbab
#undef public_66ffeb1
#undef public_66ffec0
