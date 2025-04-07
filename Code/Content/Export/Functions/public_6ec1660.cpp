#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec168d _public_6ec168d
#define public_6ec169d _public_6ec169d
#define public_6ec16ac _public_6ec16ac
#define public_6ec16ae _public_6ec16ae

PROC_DECLARE(0x6ec1660, internal_6ec1660, public_6ec1660);
extern "C" NAKED register_t __cdecl internal_6ec1660()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec16ac
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        jne public_6ec168d
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_6ec16ac
        public_6ec168d : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ec169d
        fld dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [esi+0xC]
        public_6ec169d : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        mov al, 1
        test ah, 1
        je public_6ec16ae
        public_6ec16ac : nop
        mov al, bl
        public_6ec16ae : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1660)
    }
}

#undef public_6ec168d
#undef public_6ec169d
#undef public_6ec16ac
#undef public_6ec16ae
