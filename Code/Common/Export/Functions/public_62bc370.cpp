#include "Common-PCH.h"


#define public_62bc382 _public_62bc382
#define public_62bc3b4 _public_62bc3b4
#define public_62bc3b6 _public_62bc3b6
#define public_62bc3bd _public_62bc3bd

PROC_DECLARE(0x62bc370, internal_62bc370, public_62bc370);
extern "C" NAKED register_t __cdecl internal_62bc370()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        xor dl, dl
        public_62bc382 : nop
        cmp esi, ebx
        je public_62bc3bd
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edi+0x18]
        fnstsw ax
        test ah, 0x41
        je public_62bc3bd
        mov al, byte ptr ds : [ecx+9]
        test al, al
        je public_62bc3b6
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62bc3b4
        mov dl, 1
        jmp public_62bc3b6
        public_62bc3b4 : nop
        xor dl, dl
        public_62bc3b6 : nop
        add esi, 4
        test dl, dl
        je public_62bc382
        public_62bc3bd : nop
        pop edi
        pop esi
        pop ebp
        mov al, dl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bc370)
    }
}

#undef public_62bc382
#undef public_62bc3b4
#undef public_62bc3b6
#undef public_62bc3bd
