#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66fd850 _public_66fd850
#define public_66fd874 _public_66fd874
#define public_66fd878 _public_66fd878
#define public_66fd87d _public_66fd87d
#define public_66fd8d2 _public_66fd8d2
#define public_66fd8db _public_66fd8db
#define public_66fd8dd _public_66fd8dd
#define public_66fd8f3 _public_66fd8f3
#define public_66fd92a _public_66fd92a
#define public_66fd93d _public_66fd93d
#define public_66fd950 _public_66fd950
#define public_66fd95c _public_66fd95c
#define public_66fd990 _public_66fd990
#define public_66fd9c9 _public_66fd9c9
#define public_66fd9d8 _public_66fd9d8

PROC_DECLARE(0x66fd830, internal_66fd830, public_66fd830);
extern "C" NAKED register_t __cdecl internal_66fd830()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x18
        jne public_66fd9d8
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_66fd850 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fd878
        test cl, cl
        je public_66fd874
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fd878
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fd850
        public_66fd874 : nop
        xor eax, eax
        jmp public_66fd87d
        public_66fd878 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fd87d : nop
        test eax, eax
        jne public_66fd9d8
        push 0x34
        call public_6700810
        add esp, 4
        test eax, eax
        je public_66fd8db
        mov dword ptr ds : [eax+4], offset public_6702d50
        mov dword ptr ds : [eax+0x20], 0
        lea ecx, ds:[eax+0x28]
        mov dword ptr ds : [ecx], offset public_6702d44
        mov dword ptr ds : [ecx+4], 1
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], offset public_6702d0c
        mov dword ptr ds : [eax+4], offset public_6702cd8
        mov edx, dword ptr ss : [ebp+8]
        test edx, edx
        mov dword ptr ds : [eax+0x24], edx
        jne public_66fd8d2
        mov dword ptr ds : [eax+0x24], ecx
        mov edi, eax
        jmp public_66fd8dd
        public_66fd8d2 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], ecx
        mov edi, eax
        jmp public_66fd8dd
        public_66fd8db : nop
        xor edi, edi
        public_66fd8dd : nop
        test edi, edi
        jne public_66fd8f3
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66fd8f3 : nop
        mov edx, dword ptr ds : [edi]
        lea esi, ds:[edi+8]
        push esi
/*FIXUP push offset public_6702cc8 @0x66fd8f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702cc8
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_66fd990
/*FIXUP push offset public_6702c78 @0x66fd909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702c78
        push 0xCA
/*FIXUP push offset public_6702b2c @0x66fd913*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov eax, 0x100001
/*FIXUP push offset public_6702b10 @0x66fd91d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push eax
        mov eax, dword ptr ds : [public_6701000]
        call dword ptr ds : [eax]
        public_66fd92a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        add esp, 0x14
        or ebx, 0xFFFFFFFF
        test eax, eax
        je public_66fd93d
        mov dword ptr ds : [eax], 0
        public_66fd93d : nop
        mov dword ptr ds : [edi], offset public_6702c3c
        mov dword ptr ds : [edi+4], offset public_6702c08
        mov esi, offset public_6704608
        nop 
        public_66fd950 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66fd95c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66fd95c : nop
        mov dword ptr ds : [esi], 0
        add esi, 4
        cmp esi, offset public_670462c
        jl public_66fd950
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        call public_6700710
        push edi
        call public_6700710
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ds : [ecx], eax
        pop ebp
        mov eax, ebx
        pop ebx
        ret 0xC
        public_66fd990 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov dword ptr ds : [edi+0xC], eax
        jne public_66fd9c9
        mov edx, dword ptr ds : [public_6701000]
/*FIXUP push offset public_6702bb8 @0x66fd9a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702bb8
        push 0xD1
/*FIXUP push offset public_6702b2c @0x66fd9b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b2c
        mov eax, 0x100001
/*FIXUP push offset public_6702b10 @0x66fd9bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702b10
        push eax
        call dword ptr ds : [edx]
        jmp public_66fd92a
        public_66fd9c9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66fd9d8 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66fd830)
    }
}

#undef public_66fd850
#undef public_66fd874
#undef public_66fd878
#undef public_66fd87d
#undef public_66fd8d2
#undef public_66fd8db
#undef public_66fd8dd
#undef public_66fd8f3
#undef public_66fd92a
#undef public_66fd93d
#undef public_66fd950
#undef public_66fd95c
#undef public_66fd990
#undef public_66fd9c9
#undef public_66fd9d8
