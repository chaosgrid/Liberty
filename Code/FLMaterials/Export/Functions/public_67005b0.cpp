#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1000);
CLANG_FORWARD_PROC_SYMBOL(public_67005b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);
CLANG_FORWARD_JUMP_SYMBOL(public_6700eb8);

#define public_67005e5 _public_67005e5
#define public_6700600 _public_6700600
#define public_670061f _public_670061f
#define public_670062c _public_670062c
#define public_6700651 _public_6700651

PROC_DECLARE(0x67005b0, internal_67005b0, public_67005b0);
extern "C" NAKED register_t __cdecl internal_67005b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700eb8 @0x67005b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700eb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x68]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_67005e5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x68], ebx
        public_67005e5 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        push ebp
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6701428
        jbe public_670062c
        lea ecx, ds:[ecx]
        public_6700600 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+ebx+4]
        mov ecx, dword ptr ds : [esi+8]
        add edi, ebx
        cmp eax, 0xFFFFFFFF
        je public_670061f
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_670061f : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add ebx, 0x2C
        cmp ebp, eax
        jb public_6700600
        xor ebx, ebx
        public_670062c : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        pop ebp
        je public_6700651
        mov ecx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_66f1000 @0x670063a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f1000
        push ecx
        push 0x2C
        push eax
        call public_670071b
        push edi
        call public_6700710
        add esp, 4
        public_6700651 : nop
        mov edx, dword ptr ds : [esi+0x14]
        push edx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6700710
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x67005b0)
    }
}

#undef public_67005e5
#undef public_6700600
#undef public_670061f
#undef public_670062c
#undef public_6700651
