#include "Common-PCH.h"


#define public_62bc218 _public_62bc218
#define public_62bc25b _public_62bc25b
#define public_62bc25d _public_62bc25d
#define public_62bc264 _public_62bc264

PROC_DECLARE(0x62bc200, internal_62bc200, public_62bc200);
extern "C" NAKED register_t __cdecl internal_62bc200()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [ebx], 0xBF800000
        mov esi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [edi+0xC]
        xor cl, cl
        public_62bc218 : nop
        cmp esi, ebp
        je public_62bc264
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [edi+0x14]
        fnstsw ax
        test ah, 0x41
        je public_62bc264
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc25b
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [edx+0xC]
        mov cl, 1
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test cl, ah
        jne public_62bc25d
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx], eax
        public_62bc25b : nop
        xor cl, cl
        public_62bc25d : nop
        add esi, 4
        test cl, cl
        je public_62bc218
        public_62bc264 : nop
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62bc200)
    }
}

#undef public_62bc218
#undef public_62bc25b
#undef public_62bc25d
#undef public_62bc264
