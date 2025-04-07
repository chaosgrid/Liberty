#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);
CLANG_FORWARD_PROC_SYMBOL(public_66f3ca0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66f9590);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

#define public_66f84d9 _public_66f84d9
#define public_66f8789 _public_66f8789
#define public_66f8798 _public_66f8798

PROC_DECLARE(0x66f84a0, internal_66f84a0, public_66f84a0);
extern "C" NAKED register_t __cdecl internal_66f84a0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6704d38]
        mov al, 1
        test al, cl
        jne public_66f84d9
/*FIXUP push offset _public_66f3cd0 @0x66f84ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3cd0
/*FIXUP push offset _public_66f3ca0 @0x66f84b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f3ca0
        push 9
        push 0x4C
        or cl, al
/*FIXUP push offset public_6704d40 @0x66f84bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6704d40
        mov byte ptr ds : [public_6704d38], cl
        call public_6700820
/*FIXUP push offset _public_66f9590 @0x66f84cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f9590
        call public_6700912
        add esp, 4
        public_66f84d9 : nop
        mov eax, dword ptr ds : [public_6704d50]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_66f8789
        push ebx
        push esi
/*FIXUP push offset public_6702084 @0x66f84eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702084
        mov esi, offset public_67016d4
        push 3
        mov ecx, offset public_6704d50
        mov dword ptr ds : [public_6704d40], edi
        mov dword ptr ds : [public_6704d44], offset public_67016bc
        mov dword ptr ds : [public_6704d48], offset public_67016ac
        mov dword ptr ds : [public_6704d4c], esi
        call public_66f3b30
/*FIXUP push offset public_6702074 @0x66f8521*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702074
        push 3
        mov ecx, offset public_6704d64
        call public_66f3b30
/*FIXUP push offset public_6702084 @0x66f8532*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702084
        push 3
        mov ecx, offset public_6704d78
        call public_66f3b30
/*FIXUP push offset public_67013d4 @0x66f8543*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013d4
        push 7
        mov ecx, offset public_6704d9c
        mov dword ptr ds : [public_6704d8c], edi
        mov dword ptr ds : [public_6704d90], offset public_6701658
        mov dword ptr ds : [public_6704d94], offset public_67022b4
        mov dword ptr ds : [public_6704d98], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704db0
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704dc4
        call public_66f3b30
        push 4
        mov ebx, offset public_670163c
        push 8
        mov ecx, offset public_6704de8
        mov dword ptr ds : [public_6704dd8], edi
        mov dword ptr ds : [public_6704ddc], ebx
        mov dword ptr ds : [public_6704de0], offset public_67022a0
        mov dword ptr ds : [public_6704de4], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704dfc
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704e10
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704e34
        mov dword ptr ds : [public_6704e24], 0x20000
        mov dword ptr ds : [public_6704e28], ebx
        mov dword ptr ds : [public_6704e2c], offset public_6702288
        mov dword ptr ds : [public_6704e30], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704e48
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704e5c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704e80
        mov dword ptr ds : [public_6704e70], 0x40000
        mov dword ptr ds : [public_6704e74], ebx
        mov dword ptr ds : [public_6704e78], offset public_6702270
        mov dword ptr ds : [public_6704e7c], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704e94
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704ea8
        call public_66f3b30
/*FIXUP push offset public_6702258 @0x66f8665*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702258
        push 7
        mov ecx, offset public_6704ecc
        mov dword ptr ds : [public_6704ebc], edi
        mov dword ptr ds : [public_6704ec0], offset public_6702250
        mov dword ptr ds : [public_6704ec4], offset public_670223c
        mov dword ptr ds : [public_6704ec8], esi
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704ee0
        call public_66f3b30
        push edi
        push 7
        mov ecx, offset public_6704ef4
        call public_66f3b30
        push 5
        mov ebx, offset public_6702230
        push 8
        mov ecx, offset public_6704f18
        mov dword ptr ds : [public_6704f08], edi
        mov dword ptr ds : [public_6704f0c], ebx
        mov dword ptr ds : [public_6704f10], offset public_6702218
        mov dword ptr ds : [public_6704f14], esi
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704f2c
        call public_66f3b30
        push edi
        push 8
        mov ecx, offset public_6704f40
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704f64
        mov dword ptr ds : [public_6704f54], 0x20000
        mov dword ptr ds : [public_6704f58], ebx
        mov dword ptr ds : [public_6704f5c], offset public_67021fc
        mov dword ptr ds : [public_6704f60], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704f78
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704f8c
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704fb0
        mov dword ptr ds : [public_6704fa0], 0x40000
        mov dword ptr ds : [public_6704fa4], ebx
        mov dword ptr ds : [public_6704fa8], offset public_67021e0
        mov dword ptr ds : [public_6704fac], esi
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704fc4
        call public_66f3b30
        push edi
        push 9
        mov ecx, offset public_6704fd8
        call public_66f3b30
        pop esi
        pop ebx
        public_66f8789 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        pop edi
        je public_66f8798
        mov dword ptr ds : [eax], offset public_6704d40
        public_66f8798 : nop
        mov eax, 9
        ret 4
        UNREACHABLE_TRAP(0x66f84a0)
    }
}

#undef public_66f84d9
#undef public_66f8789
#undef public_66f8798
