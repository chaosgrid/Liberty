#include "Common-PCH.h"


#define public_62bc288 _public_62bc288
#define public_62bc2b9 _public_62bc2b9
#define public_62bc2be _public_62bc2be
#define public_62bc2c7 _public_62bc2c7

PROC_DECLARE(0x62bc270, internal_62bc270, public_62bc270);
extern "C" NAKED register_t __cdecl internal_62bc270()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov dword ptr ds : [ebx], 0xBF800000
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_62bc288 : nop
        cmp esi, ebp
        je public_62bc2c7
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc2b9
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62bc2be
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ebx], eax
        public_62bc2b9 : nop
        add esi, 4
        jmp public_62bc288
        public_62bc2be : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_62bc2c7 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62bc270)
    }
}

#undef public_62bc288
#undef public_62bc2b9
#undef public_62bc2be
#undef public_62bc2c7
