#include "Content-PCH.h"


#define public_6f84c13 _public_6f84c13
#define public_6f84c28 _public_6f84c28
#define public_6f84c2d _public_6f84c2d

PROC_DECLARE(0x6f84c00, internal_6f84c00, public_6f84c00);
extern "C" NAKED register_t __cdecl internal_6f84c00()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        je public_6f84c2d
        mov esi, dword ptr ds : [edi+8]
        cmp esi, dword ptr ds : [edi+0xC]
        je public_6f84c28
        public_6f84c13 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f84c2d
        mov eax, dword ptr ds : [edi+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6f84c13
        public_6f84c28 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        public_6f84c2d : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f84c00)
    }
}

#undef public_6f84c13
#undef public_6f84c28
#undef public_6f84c2d
