#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecc00);

#define public_62ecc40 _public_62ecc40

PROC_DECLARE(0x62ecc00, internal_62ecc00, public_62ecc00);
extern "C" NAKED register_t __cdecl internal_62ecc00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62ecc40
        mov al, byte ptr ds : [esi+0xC0]
        test al, al
        je public_62ecc40
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [eax+0x181C]
        fnstsw ax
        test ah, 5
        jp public_62ecc40
        mov al, 1
        pop esi
        ret 
        public_62ecc40 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ecc00)
    }
}

#undef public_62ecc40
