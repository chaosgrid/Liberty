#include "Freelancer-PCH.h"


#define public_5474c0 _public_5474c0
#define public_5474e0 _public_5474e0
#define public_5474e2 _public_5474e2
#define public_5474ee _public_5474ee
#define public_5474f4 _public_5474f4

PROC_DECLARE(0x5474a0, internal_5474a0, public_5474a0);
extern "C" NAKED register_t __cdecl internal_5474a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5474f4
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_5474f4
        lea esp, ss:[esp]
        public_5474c0 : nop
        mov cx, word ptr ds : [esi+8]
        mov edx, dword ptr ds : [public_5c65ac]
        cmp cx, word ptr ds : [edx]
        jne public_5474ee
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_5474e0
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        je public_5474e2
        public_5474e0 : nop
        xor ecx, ecx
        public_5474e2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x98]
        public_5474ee : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_5474c0
        public_5474f4 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5474a0)
    }
}

#undef public_5474c0
#undef public_5474e0
#undef public_5474e2
#undef public_5474ee
#undef public_5474f4
