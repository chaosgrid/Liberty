#include "THORN-PCH.h"


#define public_6f425d4 _public_6f425d4
#define public_6f425eb _public_6f425eb
#define public_6f42601 _public_6f42601
#define public_6f42613 _public_6f42613
#define public_6f42629 _public_6f42629
#define public_6f4263b _public_6f4263b
#define public_6f42657 _public_6f42657
#define public_6f4266a _public_6f4266a

PROC_DECLARE(0x6f425b0, internal_6f425b0, public_6f425b0);
extern "C" NAKED register_t __cdecl internal_6f425b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xE8]
        lea esi, ds:[edi+0xE8]
        or ebx, 0xFFFFFFFF
        test eax, eax
        je public_6f425d4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f425d4 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f601d8 @0x6f425dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f601d8
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f425eb
        xor ebx, ebx
        public_6f425eb : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        lea esi, ds:[edi+0x10]
        je public_6f42601
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42601 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f42605*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f42613
        xor ebx, ebx
        public_6f42613 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f42629
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42629 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f4262d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f4263b
        xor ebx, ebx
        public_6f4263b : nop
        mov eax, dword ptr ds : [edi+0xEC]
        test eax, eax
        lea esi, ds:[edi+0xEC]
        je public_6f42657
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42657 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60140 @0x6f4265b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60140
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f4266a
        xor ebx, ebx
        public_6f4266a : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f425b0)
    }
}

#undef public_6f425d4
#undef public_6f425eb
#undef public_6f42601
#undef public_6f42613
#undef public_6f42629
#undef public_6f4263b
#undef public_6f42657
#undef public_6f4266a
