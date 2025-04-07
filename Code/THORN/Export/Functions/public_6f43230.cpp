#include "THORN-PCH.h"


#define public_6f4324e _public_6f4324e
#define public_6f43264 _public_6f43264
#define public_6f43280 _public_6f43280
#define public_6f43291 _public_6f43291
#define public_6f432a7 _public_6f432a7
#define public_6f432b8 _public_6f432b8
#define public_6f432d4 _public_6f432d4
#define public_6f432e5 _public_6f432e5
#define public_6f43301 _public_6f43301
#define public_6f43312 _public_6f43312
#define public_6f4332e _public_6f4332e
#define public_6f4333f _public_6f4333f
#define public_6f4335b _public_6f4335b
#define public_6f4336d _public_6f4336d
#define public_6f4339c _public_6f4339c
#define public_6f433b5 _public_6f433b5

PROC_DECLARE(0x6f43230, internal_6f43230, public_6f43230);
extern "C" NAKED register_t __cdecl internal_6f43230()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        lea edi, ds:[esi+0x10]
        or ebp, 0xFFFFFFFF
        test eax, eax
        je public_6f4324e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f4324e : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f60110 @0x6f43256*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f43264
        xor ebp, ebp
        public_6f43264 : nop
        mov eax, dword ptr ds : [esi+0x104]
        test eax, eax
        lea edi, ds:[esi+0x104]
        je public_6f43280
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f43280 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f601c4 @0x6f43283*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f601c4
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f43291
        xor ebp, ebp
        public_6f43291 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        lea edi, ds:[esi+0x14]
        je public_6f432a7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f432a7 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f60158 @0x6f432aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f432b8
        xor ebp, ebp
        public_6f432b8 : nop
        mov eax, dword ptr ds : [esi+0x108]
        test eax, eax
        lea edi, ds:[esi+0x108]
        je public_6f432d4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f432d4 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f600fc @0x6f432d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f600fc
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f432e5
        xor ebp, ebp
        public_6f432e5 : nop
        mov eax, dword ptr ds : [esi+0x10C]
        test eax, eax
        lea edi, ds:[esi+0x10C]
        je public_6f43301
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f43301 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f60200 @0x6f43304*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60200
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f43312
        xor ebp, ebp
        public_6f43312 : nop
        mov eax, dword ptr ds : [esi+0x110]
        test eax, eax
        lea edi, ds:[esi+0x110]
        je public_6f4332e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f4332e : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f601ec @0x6f43331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f601ec
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f4333f
        xor ebp, ebp
        public_6f4333f : nop
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        lea edi, ds:[esi+0x114]
        je public_6f4335b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6f4335b : nop
        mov edx, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6f60140 @0x6f4335e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60140
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        pop ebx
        jl public_6f4336d
        xor ebp, ebp
        public_6f4336d : nop
        test ebp, ebp
        sete al
        mov byte ptr ds : [esi+0x6C], al
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, 6
        cmp eax, ecx
        mov dword ptr ds : [esi+0x68], 2
        jne public_6f4339c
        mov eax, 5
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0x134], eax
        public_6f4339c : nop
        cmp dword ptr ds : [esi+0xDC], ecx
        jne public_6f433b5
        mov eax, 1
        mov dword ptr ds : [esi+0xDC], eax
        mov dword ptr ds : [esi+0x130], eax
        public_6f433b5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f43230)
    }
}

#undef public_6f4324e
#undef public_6f43264
#undef public_6f43280
#undef public_6f43291
#undef public_6f432a7
#undef public_6f432b8
#undef public_6f432d4
#undef public_6f432e5
#undef public_6f43301
#undef public_6f43312
#undef public_6f4332e
#undef public_6f4333f
#undef public_6f4335b
#undef public_6f4336d
#undef public_6f4339c
#undef public_6f433b5
