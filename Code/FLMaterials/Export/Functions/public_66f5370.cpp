#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3de0);
CLANG_FORWARD_PROC_SYMBOL(public_66f5810);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f53ab _public_66f53ab
#define public_66f56b1 _public_66f56b1
#define public_66f56c0 _public_66f56c0

PROC_DECLARE(0x66f5370, internal_66f5370, public_66f5370);
extern "C" NAKED register_t __cdecl internal_66f5370()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6705900]
        mov al, 1
        test al, cl
        jne public_66f53ab
/*FIXUP push offset _public_66f3cd0 @0x66f537c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f5381*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 0xA
        mov dl, cl
        push 0x4C
        or dl, al
/*FIXUP push offset public_6705920 @0x66f538e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6705920
        mov byte ptr ds : [public_6705900], dl
        call public_6700820
/*FIXUP push offset _public_66f5810 @0x66f539e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f5810
        call public_6700912
        add esp, 4
        public_66f53ab : nop
        mov eax, dword ptr ds : [public_6705930]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f56b1
        push esi
/*FIXUP push offset public_6701870 @0x66f53bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6705930
        mov dword ptr ds : [public_6705920], edi
        mov dword ptr ds : [public_6705924], offset public_67016d0
        mov dword ptr ds : [public_6705928], offset public_67016c0
        mov dword ptr ds : [public_670592c], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f53f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_6705944
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f5403*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 3
        mov ecx, offset public_6705958
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f5414*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 3
        mov ecx, offset public_670597c
        mov dword ptr ds : [public_670596c], edi
        mov dword ptr ds : [public_6705970], offset public_67016bc
        mov dword ptr ds : [public_6705974], offset public_67016ac
        mov dword ptr ds : [public_6705978], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f5445*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_6705990
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f5456*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 3
        mov ecx, offset public_67059a4
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f5467*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_67059c8
        mov dword ptr ds : [public_67059b8], edi
        mov dword ptr ds : [public_67059bc], offset public_67016a8
        mov dword ptr ds : [public_67059c0], offset public_6701698
        mov dword ptr ds : [public_67059c4], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f5498*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_67059dc
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f54a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 3
        mov ecx, offset public_67059f0
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f54ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_6705a14
        mov dword ptr ds : [public_6705a04], edi
        mov dword ptr ds : [public_6705a08], offset public_6701694
        mov dword ptr ds : [public_6705a0c], offset public_6701684
        mov dword ptr ds : [public_6705a10], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f54eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 3
        mov ecx, offset public_6705a28
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f54fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 3
        mov ecx, offset public_6705a3c
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f550d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 2
        mov ecx, offset public_6705a60
        mov dword ptr ds : [public_6705a50], edi
        mov dword ptr ds : [public_6705a54], offset public_6701680
        mov dword ptr ds : [public_6705a58], offset public_6701670
        mov dword ptr ds : [public_6705a5c], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f553e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 2
        mov ecx, offset public_6705a74
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f554f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 2
        mov ecx, offset public_6705a88
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f5560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 2
        mov ecx, offset public_6705aac
        mov dword ptr ds : [public_6705a9c], edi
        mov dword ptr ds : [public_6705aa0], offset public_670166c
        mov dword ptr ds : [public_6705aa4], offset public_6701660
        mov dword ptr ds : [public_6705aa8], esi
        call public_66f3b30
/*FIXUP push offset public_6701860 @0x66f5591*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701860
        push 2
        mov ecx, offset public_6705ac0
        call public_66f3b30
/*FIXUP push offset public_6701870 @0x66f55a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701870
        push 2
        mov ecx, offset public_6705ad4
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f55b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6705af8
        mov dword ptr ds : [public_6705ae8], edi
        mov dword ptr ds : [public_6705aec], offset public_6701658
        mov dword ptr ds : [public_6705af0], offset public_6701648
        mov dword ptr ds : [public_6705af4], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705b0c
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6705b20
        call public_66f3b30
        push 4
        push 8
        mov ecx, offset public_6705b44
        mov dword ptr ds : [public_6705b34], edi
        mov dword ptr ds : [public_6705b38], offset public_670163c
        mov dword ptr ds : [public_6705b3c], offset public_6701628
        mov dword ptr ds : [public_6705b40], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705b58
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6705b6c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705b90
        mov dword ptr ds : [public_6705b80], 0x20000
        mov dword ptr ds : [public_6705b84], offset public_670163c
        mov dword ptr ds : [public_6705b88], offset public_6701610
        mov dword ptr ds : [public_6705b8c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705ba4
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6705bb8
        call public_66f3b30
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_67015f8 @0x66f5695*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67015f8
/*FIXUP push offset public_670163c @0x66f569a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670163c
        push 0x40000
        push 9
        mov ecx, offset public_6705bcc
        call public_66f3de0
        pop esi
        public_66f56b1 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f56c0
        mov dword ptr ds : [eax], offset public_6705920
        public_66f56c0 : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x66f5370)
    }
}

#undef public_66f53ab
#undef public_66f56b1
#undef public_66f56c0
