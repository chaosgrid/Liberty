#include "THORN-PCH.h"


#define public_6f4171e _public_6f4171e
#define public_6f41735 _public_6f41735
#define public_6f41751 _public_6f41751
#define public_6f41763 _public_6f41763
#define public_6f41779 _public_6f41779
#define public_6f4178b _public_6f4178b
#define public_6f417a7 _public_6f417a7
#define public_6f417ba _public_6f417ba

PROC_DECLARE(0x6f41700, internal_6f41700, public_6f41700);
extern "C" NAKED register_t __cdecl internal_6f41700()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0x10]
        or ebx, 0xFFFFFFFF
        test eax, eax
        je public_6f4171e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4171e : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f41727*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41735
        xor ebx, ebx
        public_6f41735 : nop
        mov eax, dword ptr ds : [edi+0xE4]
        test eax, eax
        lea esi, ds:[edi+0xE4]
        je public_6f41751
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41751 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60198 @0x6f41755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60198
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41763
        xor ebx, ebx
        public_6f41763 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f41779
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41779 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f4177d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f4178b
        xor ebx, ebx
        public_6f4178b : nop
        mov eax, dword ptr ds : [edi+0xE8]
        test eax, eax
        lea esi, ds:[edi+0xE8]
        je public_6f417a7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f417a7 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60140 @0x6f417ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60140
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f417ba
        xor ebx, ebx
        public_6f417ba : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f41700)
    }
}

#undef public_6f4171e
#undef public_6f41735
#undef public_6f41751
#undef public_6f41763
#undef public_6f41779
#undef public_6f4178b
#undef public_6f417a7
#undef public_6f417ba
