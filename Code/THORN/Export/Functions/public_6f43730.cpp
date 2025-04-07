#include "THORN-PCH.h"


#define public_6f4374e _public_6f4374e
#define public_6f43765 _public_6f43765
#define public_6f43781 _public_6f43781
#define public_6f43793 _public_6f43793
#define public_6f437a9 _public_6f437a9
#define public_6f437bc _public_6f437bc

PROC_DECLARE(0x6f43730, internal_6f43730, public_6f43730);
extern "C" NAKED register_t __cdecl internal_6f43730()
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
        je public_6f4374e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4374e : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f43757*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f43765
        xor ebx, ebx
        public_6f43765 : nop
        mov eax, dword ptr ds : [edi+0xCC]
        test eax, eax
        lea esi, ds:[edi+0xCC]
        je public_6f43781
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f43781 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60214 @0x6f43785*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60214
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f43793
        xor ebx, ebx
        public_6f43793 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f437a9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f437a9 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f437ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f437bc
        xor ebx, ebx
        public_6f437bc : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f43730)
    }
}

#undef public_6f4374e
#undef public_6f43765
#undef public_6f43781
#undef public_6f43793
#undef public_6f437a9
#undef public_6f437bc
