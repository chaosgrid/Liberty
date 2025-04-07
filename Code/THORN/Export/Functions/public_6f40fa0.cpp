#include "THORN-PCH.h"


#define public_6f40fc4 _public_6f40fc4
#define public_6f40fda _public_6f40fda
#define public_6f40ff6 _public_6f40ff6
#define public_6f41007 _public_6f41007
#define public_6f4101d _public_6f4101d
#define public_6f4102e _public_6f4102e
#define public_6f41044 _public_6f41044
#define public_6f41055 _public_6f41055
#define public_6f41071 _public_6f41071
#define public_6f41083 _public_6f41083

PROC_DECLARE(0x6f40fa0, internal_6f40fa0, public_6f40fa0);
extern "C" NAKED register_t __cdecl internal_6f40fa0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xCC]
        lea esi, ds:[edi+0xCC]
        or ebp, 0xFFFFFFFF
        test eax, eax
        je public_6f40fc4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f40fc4 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_6f60180 @0x6f40fcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60180
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f40fda
        xor ebp, ebp
        public_6f40fda : nop
        mov eax, dword ptr ds : [edi+0xD0]
        test eax, eax
        lea esi, ds:[edi+0xD0]
        je public_6f40ff6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f40ff6 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_6f60170 @0x6f40ff9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60170
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41007
        xor ebp, ebp
        public_6f41007 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        lea esi, ds:[edi+0x10]
        je public_6f4101d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4101d : nop
        mov edx, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_6f60110 @0x6f41020*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f4102e
        xor ebp, ebp
        public_6f4102e : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f41044
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41044 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_6f60158 @0x6f41047*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41055
        xor ebp, ebp
        public_6f41055 : nop
        mov eax, dword ptr ds : [edi+0xD4]
        test eax, eax
        lea esi, ds:[edi+0xD4]
        je public_6f41071
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41071 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
/*FIXUP push offset public_6f60140 @0x6f41074*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60140
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        pop ebx
        jl public_6f41083
        xor ebp, ebp
        public_6f41083 : nop
        test ebp, ebp
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f40fa0)
    }
}

#undef public_6f40fc4
#undef public_6f40fda
#undef public_6f40ff6
#undef public_6f41007
#undef public_6f4101d
#undef public_6f4102e
#undef public_6f41044
#undef public_6f41055
#undef public_6f41071
#undef public_6f41083
