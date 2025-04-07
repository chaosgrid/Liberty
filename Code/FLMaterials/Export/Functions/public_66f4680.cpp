#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f50b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f46b9 _public_66f46b9
#define public_66f49da _public_66f49da
#define public_66f49e9 _public_66f49e9

PROC_DECLARE(0x66f4680, internal_66f4680, public_66f4680);
extern "C" NAKED register_t __cdecl internal_66f4680()
{
    __asm
    {
        mov al, byte ptr ds : [public_6705c18]
        test al, 1
        jne public_66f46b9
/*FIXUP push offset _public_66f3cd0 @0x66f4689*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f468e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xB
        mov dl, al
        push 0x4C
        or dl, 1
/*FIXUP push offset public_6705c20 @0x66f469c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705c20
        mov byte ptr ds : [public_6705c18], dl
        call public_6700820
/*FIXUP push offset _public_66f50b0 @0x66f46ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f50b0
        call public_6700912
        add esp, 4
        public_66f46b9 : nop
        mov eax, dword ptr ds : [public_6705c30]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f49da
        push esi
/*FIXUP push offset public_6701708 @0x66f46ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        mov esi, offset public_67016d4
        push 4
        mov ecx, offset public_6705c30
        mov dword ptr ds : [public_6705c20], edi
        mov dword ptr ds : [public_6705c24], offset public_67016d0
        mov dword ptr ds : [public_6705c28], offset public_67016c0
        mov dword ptr ds : [public_6705c2c], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f4700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 4
        mov ecx, offset public_6705c44
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f4711*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 4
        mov ecx, offset public_6705c58
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f4722*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 3
        mov ecx, offset public_6705c7c
        mov dword ptr ds : [public_6705c6c], edi
        mov dword ptr ds : [public_6705c70], offset public_67016bc
        mov dword ptr ds : [public_6705c74], offset public_67016ac
        mov dword ptr ds : [public_6705c78], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f4753*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 3
        mov ecx, offset public_6705c90
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f4764*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 3
        mov ecx, offset public_6705ca4
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f4775*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 3
        mov ecx, offset public_6705cc8
        mov dword ptr ds : [public_6705cb8], edi
        mov dword ptr ds : [public_6705cbc], offset public_67016a8
        mov dword ptr ds : [public_6705cc0], offset public_6701698
        mov dword ptr ds : [public_6705cc4], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f47a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 3
        mov ecx, offset public_6705cdc
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f47b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 3
        mov ecx, offset public_6705cf0
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f47c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 3
        mov ecx, offset public_6705d14
        mov dword ptr ds : [public_6705d04], edi
        mov dword ptr ds : [public_6705d08], offset public_6701694
        mov dword ptr ds : [public_6705d0c], offset public_6701684
        mov dword ptr ds : [public_6705d10], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f47f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 3
        mov ecx, offset public_6705d28
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f480a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 3
        mov ecx, offset public_6705d3c
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f481b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 2
        mov ecx, offset public_6705d60
        mov dword ptr ds : [public_6705d50], edi
        mov dword ptr ds : [public_6705d54], offset public_6701680
        mov dword ptr ds : [public_6705d58], offset public_6701670
        mov dword ptr ds : [public_6705d5c], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f484c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 2
        mov ecx, offset public_6705d74
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f485d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 2
        mov ecx, offset public_6705d88
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f486e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 2
        mov ecx, offset public_6705dac
        mov dword ptr ds : [public_6705d9c], edi
        mov dword ptr ds : [public_6705da0], offset public_670166c
        mov dword ptr ds : [public_6705da4], offset public_6701660
        mov dword ptr ds : [public_6705da8], esi
        call public_66f3b30
/*FIXUP push offset public_67016f8 @0x66f489f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67016f8
        push 2
        mov ecx, offset public_6705dc0
        call public_66f3b30
/*FIXUP push offset public_6701708 @0x66f48b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701708
        push 2
        mov ecx, offset public_6705dd4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f48c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6705df8
        mov dword ptr ds : [public_6705de8], edi
        mov dword ptr ds : [public_6705dec], offset public_6701658
        mov dword ptr ds : [public_6705df0], offset public_6701648
        mov dword ptr ds : [public_6705df4], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705e0c
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705e20
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6705e44
        mov dword ptr ds : [public_6705e34], edi
        mov dword ptr ds : [public_6705e38], offset public_670163c
        mov dword ptr ds : [public_6705e3c], offset public_6701628
        mov dword ptr ds : [public_6705e40], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705e58
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705e6c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705e90
        mov dword ptr ds : [public_6705e80], 0x20000
        mov dword ptr ds : [public_6705e84], offset public_670163c
        mov dword ptr ds : [public_6705e88], offset public_6701610
        mov dword ptr ds : [public_6705e8c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705ea4
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705eb8
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f49a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f49a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_6705ecc
        call public_66f3de0
        push edi
        push edi
        push edi
/*FIXUP push offset public_6701854 @0x66f49c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701854
/*FIXUP push offset public_6701840 @0x66f49c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701840
        push edi
        push edi
        push 1
        mov ecx, offset public_6705f18
        call public_66f3de0
        pop esi
        public_66f49da : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f49e9
        mov dword ptr ds : [eax], offset public_6705c20
        public_66f49e9 : nop
        mov eax, 0xB
        ret 4
        UNREACHABLE_TRAP(0x66f4680)
    }
}

#undef public_66f46b9
#undef public_66f49da
#undef public_66f49e9
