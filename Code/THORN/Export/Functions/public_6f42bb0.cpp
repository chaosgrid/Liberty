#include "THORN-PCH.h"


#define public_6f42bce _public_6f42bce
#define public_6f42be5 _public_6f42be5
#define public_6f42c01 _public_6f42c01
#define public_6f42c13 _public_6f42c13
#define public_6f42c29 _public_6f42c29
#define public_6f42c3c _public_6f42c3c

PROC_DECLARE(0x6f42bb0, internal_6f42bb0, public_6f42bb0);
extern "C" NAKED register_t __cdecl internal_6f42bb0()
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
        je public_6f42bce
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42bce : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f42bd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f42be5
        xor ebx, ebx
        public_6f42be5 : nop
        mov eax, dword ptr ds : [edi+0xD0]
        test eax, eax
        lea esi, ds:[edi+0xD0]
        je public_6f42c01
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42c01 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f6002c @0x6f42c05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6002c
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f42c13
        xor ebx, ebx
        public_6f42c13 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f42c29
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f42c29 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f42c2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f42c3c
        xor ebx, ebx
        public_6f42c3c : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f42bb0)
    }
}

#undef public_6f42bce
#undef public_6f42be5
#undef public_6f42c01
#undef public_6f42c13
#undef public_6f42c29
#undef public_6f42c3c
