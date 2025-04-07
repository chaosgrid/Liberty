#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);

#define public_62d0af4 _public_62d0af4
#define public_62d0b27 _public_62d0b27

PROC_DECLARE(0x62d0ae0, internal_62d0ae0, public_62d0ae0);
extern "C" NAKED register_t __cdecl internal_62d0ae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_62d0af4
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        public_62d0af4 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0x44]
        fadd dword ptr ds : [esi+0x1C]
        fst dword ptr ds : [esi+0x44]
        fcomp dword ptr ds : [esi+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_62d0b27
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        push 0x14
        mov dword ptr ds : [esi+0x44], 0xCCBEBC20
        call public_62d29a0
        public_62d0b27 : nop
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62d0ae0)
    }
}

#undef public_62d0af4
#undef public_62d0b27
