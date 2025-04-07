#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66fc7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66fbd59 _public_66fbd59
#define public_66fbde1 _public_66fbde1
#define public_66fbe2a _public_66fbe2a
#define public_66fbe38 _public_66fbe38

PROC_DECLARE(0x66fbd20, internal_66fbd20, public_66fbd20);
extern "C" NAKED register_t __cdecl internal_66fbd20()
{
    __asm
    {
        mov al, byte ptr ds : [public_6704978]
        test al, 1
        jne public_66fbd59
/*FIXUP push offset _public_66f3cd0 @0x66fbd29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66fbd2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 1
        mov cl, al
        push 0x4C
        or cl, 1
/*FIXUP push offset public_6704980 @0x66fbd3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704980
        mov byte ptr ds : [public_6704978], cl
        call public_6700820
/*FIXUP push offset _public_66fc7f0 @0x66fbd4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66fc7f0
        call public_6700912
        add esp, 4
        public_66fbd59 : nop
        mov eax, dword ptr ds : [public_6704990]
        test eax, eax
        jne public_66fbe2a
        mov ecx, offset public_6704990
        mov dword ptr ds : [public_6704980], 0
        mov dword ptr ds : [public_6704984], offset public_67016bc
        mov dword ptr ds : [public_6704988], offset public_6702808
        mov dword ptr ds : [public_670498c], offset public_67016d4
        call public_66f1ac0
        mov eax, dword ptr ds : [public_6702874]
        mov ecx, dword ptr ds : [public_6702870]
        mov edx, dword ptr ds : [public_670286c]
        mov dword ptr ds : [public_67049a0], eax
        mov eax, dword ptr ds : [public_6702868]
        mov dword ptr ds : [public_6704994], eax
        cmp dword ptr ds : [public_67049a4], 4
        mov dword ptr ds : [public_6704990], 4
        mov dword ptr ds : [public_670499c], ecx
        mov dword ptr ds : [public_6704998], edx
        je public_66fbde1
        mov ecx, offset public_67049a4
        call public_66f1ac0
        public_66fbde1 : nop
        mov ecx, dword ptr ds : [public_6702864]
        mov edx, dword ptr ds : [public_6702860]
        mov eax, dword ptr ds : [public_670285c]
        mov dword ptr ds : [public_67049b4], ecx
        mov ecx, dword ptr ds : [public_6702858]
/*FIXUP push offset public_6702868 @0x66fbdfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702868
        mov dword ptr ds : [public_67049a8], ecx
        push 4
        mov ecx, offset public_67049b8
        mov dword ptr ds : [public_67049a4], 4
        mov dword ptr ds : [public_67049b0], edx
        mov dword ptr ds : [public_67049ac], eax
        call public_66f3b30
        public_66fbe2a : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66fbe38
        mov dword ptr ds : [eax], offset public_6704980
        public_66fbe38 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x66fbd20)
    }
}

#undef public_66fbd59
#undef public_66fbde1
#undef public_66fbe2a
#undef public_66fbe38
