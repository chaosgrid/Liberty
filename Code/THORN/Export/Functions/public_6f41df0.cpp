#include "THORN-PCH.h"


#define public_6f41e0e _public_6f41e0e
#define public_6f41e25 _public_6f41e25
#define public_6f41e41 _public_6f41e41
#define public_6f41e53 _public_6f41e53
#define public_6f41e6f _public_6f41e6f
#define public_6f41e81 _public_6f41e81
#define public_6f41e97 _public_6f41e97
#define public_6f41eaa _public_6f41eaa

PROC_DECLARE(0x6f41df0, internal_6f41df0, public_6f41df0);
extern "C" NAKED register_t __cdecl internal_6f41df0()
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
        je public_6f41e0e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41e0e : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f41e17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41e25
        xor ebx, ebx
        public_6f41e25 : nop
        mov eax, dword ptr ds : [edi+0x158]
        test eax, eax
        lea esi, ds:[edi+0x158]
        je public_6f41e41
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41e41 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f601c4 @0x6f41e45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f601c4
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41e53
        xor ebx, ebx
        public_6f41e53 : nop
        mov eax, dword ptr ds : [edi+0x15C]
        test eax, eax
        lea esi, ds:[edi+0x15C]
        je public_6f41e6f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41e6f : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f601ac @0x6f41e73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f601ac
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f41e81
        xor ebx, ebx
        public_6f41e81 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f41e97
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f41e97 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f41e9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f41eaa
        xor ebx, ebx
        public_6f41eaa : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f41df0)
    }
}

#undef public_6f41e0e
#undef public_6f41e25
#undef public_6f41e41
#undef public_6f41e53
#undef public_6f41e6f
#undef public_6f41e81
#undef public_6f41e97
#undef public_6f41eaa
