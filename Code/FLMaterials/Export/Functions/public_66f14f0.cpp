#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);
CLANG_FORWARD_PROC_SYMBOL(public_66f24a0);
CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_66f1527 _public_66f1527
#define public_66f1559 _public_66f1559
#define public_66f159e _public_66f159e
#define public_66f15b7 _public_66f15b7

PROC_DECLARE(0x66f14f0, internal_66f14f0, public_66f14f0);
extern "C" NAKED register_t __cdecl internal_66f14f0()
{
    __asm
    {
        mov eax, 0x200C
        call public_67008b0
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2018]
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        xor ebp, ebp
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0xC], ebp
        jbe public_66f15b7
        push ebx
        xor ebx, ebx
        public_66f1527 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [ebx+edx]
        lea eax, ds:[ebx+edx]
        not cl
        test cl, 1
        je public_66f159e
        mov edx, dword ptr ss : [esp+0x2024]
        push ebp
        push eax
        push edx
        mov ecx, esi
        call public_66f24a0
        test al, al
        jne public_66f159e
        mov edi, dword ptr ds : [esi+0x14]
        test edi, edi
        jne public_66f1559
        mov edi, offset public_6701358
        public_66f1559 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+ecx+8]
        push eax
        push edi
        push edx
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6701364 @0x66f156f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701364
        push eax
        call public_66f14c0
        push eax
        push 0x119
/*FIXUP push offset public_670117c @0x66f1580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670117c
        mov ecx, 0x100004
/*FIXUP push offset public_6701160 @0x66f158a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701160
        push ecx
        mov ecx, dword ptr ds : [public_6701000]
        call dword ptr ds : [ecx]
        add esp, 0x28
        or edi, 0xFFFFFFFF
        public_66f159e : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        add ebx, 0x4C
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], ebp
        jb public_66f1527
        pop ebx
        public_66f15b7 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x200C
        ret 8
        UNREACHABLE_TRAP(0x66f14f0)
    }
}

#undef public_66f1527
#undef public_66f1559
#undef public_66f159e
#undef public_66f15b7
