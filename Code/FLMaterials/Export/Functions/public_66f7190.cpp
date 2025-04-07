#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f7980);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f71cb _public_66f71cb
#define public_66f74d1 _public_66f74d1
#define public_66f74e0 _public_66f74e0

PROC_DECLARE(0x66f7190, internal_66f7190, public_66f7190);
extern "C" NAKED register_t __cdecl internal_66f7190()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67052f8]
        mov al, 1
        test al, cl
        jne public_66f71cb
/*FIXUP push offset _public_66f3cd0 @0x66f719c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f71a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6705300 @0x66f71ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705300
        mov byte ptr ds : [public_67052f8], dl
        call public_6700820
/*FIXUP push offset _public_66f7980 @0x66f71be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f7980
        call public_6700912
        add esp, 4
        public_66f71cb : nop
        mov eax, dword ptr ds : [public_6705310]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f74d1
        push esi
/*FIXUP push offset public_6701d0c @0x66f71dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6705310
        mov dword ptr ds : [public_6705300], edi
        mov dword ptr ds : [public_6705304], offset public_67016d0
        mov dword ptr ds : [public_6705308], offset public_67016c0
        mov dword ptr ds : [public_670530c], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f7212*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_6705324
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f7223*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 3
        mov ecx, offset public_6705338
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f7234*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 3
        mov ecx, offset public_670535c
        mov dword ptr ds : [public_670534c], edi
        mov dword ptr ds : [public_6705350], offset public_67016bc
        mov dword ptr ds : [public_6705354], offset public_67016ac
        mov dword ptr ds : [public_6705358], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f7265*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_6705370
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f7276*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 3
        mov ecx, offset public_6705384
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f7287*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_67053a8
        mov dword ptr ds : [public_6705398], edi
        mov dword ptr ds : [public_670539c], offset public_67016a8
        mov dword ptr ds : [public_67053a0], offset public_6701698
        mov dword ptr ds : [public_67053a4], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f72b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_67053bc
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f72c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 3
        mov ecx, offset public_67053d0
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f72da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_67053f4
        mov dword ptr ds : [public_67053e4], edi
        mov dword ptr ds : [public_67053e8], offset public_6701694
        mov dword ptr ds : [public_67053ec], offset public_6701684
        mov dword ptr ds : [public_67053f0], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f730b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 3
        mov ecx, offset public_6705408
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f731c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 3
        mov ecx, offset public_670541c
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f732d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 2
        mov ecx, offset public_6705440
        mov dword ptr ds : [public_6705430], edi
        mov dword ptr ds : [public_6705434], offset public_6701680
        mov dword ptr ds : [public_6705438], offset public_6701670
        mov dword ptr ds : [public_670543c], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f735e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 2
        mov ecx, offset public_6705454
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f736f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 2
        mov ecx, offset public_6705468
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f7380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 2
        mov ecx, offset public_670548c
        mov dword ptr ds : [public_670547c], edi
        mov dword ptr ds : [public_6705480], offset public_670166c
        mov dword ptr ds : [public_6705484], offset public_6701660
        mov dword ptr ds : [public_6705488], esi
        call public_66f3b30
/*FIXUP push offset public_6701cfc @0x66f73b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701cfc
        push 2
        mov ecx, offset public_67054a0
        call public_66f3b30
/*FIXUP push offset public_6701d0c @0x66f73c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701d0c
        push 2
        mov ecx, offset public_67054b4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f73d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_67054d8
        mov dword ptr ds : [public_67054c8], edi
        mov dword ptr ds : [public_67054cc], offset public_6701658
        mov dword ptr ds : [public_67054d0], offset public_6701648
        mov dword ptr ds : [public_67054d4], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_67054ec
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705500
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6705524
        mov dword ptr ds : [public_6705514], edi
        mov dword ptr ds : [public_6705518], offset public_670163c
        mov dword ptr ds : [public_670551c], offset public_6701628
        mov dword ptr ds : [public_6705520], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705538
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_670554c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705570
        mov dword ptr ds : [public_6705560], 0x20000
        mov dword ptr ds : [public_6705564], offset public_670163c
        mov dword ptr ds : [public_6705568], offset public_6701610
        mov dword ptr ds : [public_670556c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705584
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705598
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f74b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f74ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_67055ac
        call public_66f3de0
        pop esi
        public_66f74d1 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f74e0
        mov dword ptr ds : [eax], offset public_6705300
        public_66f74e0 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f7190)
    }
}

#undef public_66f71cb
#undef public_66f74d1
#undef public_66f74e0
