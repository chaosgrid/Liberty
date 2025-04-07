#include "Common-PCH.h"


#define public_62bc858 _public_62bc858
#define public_62bc876 _public_62bc876
#define public_62bc878 _public_62bc878
#define public_62bc87f _public_62bc87f

PROC_DECLARE(0x62bc840, internal_62bc840, public_62bc840);
extern "C" NAKED register_t __cdecl internal_62bc840()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        xor al, al
        cmp edx, 4
        push edi
        jne public_62bc87f
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ss : [esp+0x10]
        public_62bc858 : nop
        cmp esi, ebx
        je public_62bc87f
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc876
        mov al, 1
        jmp public_62bc878
        public_62bc876 : nop
        xor al, al
        public_62bc878 : nop
        add esi, 4
        test al, al
        je public_62bc858
        public_62bc87f : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62bc840)
    }
}

#undef public_62bc858
#undef public_62bc876
#undef public_62bc878
#undef public_62bc87f
