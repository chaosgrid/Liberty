#include "THORN-PCH.h"


#define public_6f4217e _public_6f4217e
#define public_6f42195 _public_6f42195
#define public_6f421ab _public_6f421ab
#define public_6f421be _public_6f421be

PROC_DECLARE(0x6f42160, internal_6f42160, public_6f42160);
extern "C" NAKED register_t __cdecl internal_6f42160()
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
        je public_6f4217e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4217e : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60110 @0x6f42187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60110
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6f42195
        xor ebx, ebx
        public_6f42195 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        lea esi, ds:[edi+0x14]
        je public_6f421ab
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f421ab : nop
        mov edx, dword ptr ss : [ebp]
        push esi
/*FIXUP push offset public_6f60158 @0x6f421af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60158
        push ebp
        call dword ptr ds : [edx]
        test eax, eax
        pop ebp
        jl public_6f421be
        xor ebx, ebx
        public_6f421be : nop
        test ebx, ebx
        sete al
        mov byte ptr ds : [edi+0x6C], al
        mov dword ptr ds : [edi+0x68], 2
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f42160)
    }
}

#undef public_6f4217e
#undef public_6f42195
#undef public_6f421ab
#undef public_6f421be
