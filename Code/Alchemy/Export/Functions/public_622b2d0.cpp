#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622b2fc _public_622b2fc
#define public_622b325 _public_622b325

PROC_DECLARE(0x622b2d0, internal_622b2d0, public_622b2d0);
extern "C" NAKED register_t __cdecl internal_622b2d0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_622b325
        mov eax, dword ptr ds : [public_62565b0]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_622b2fc
        mov eax, dword ptr ds : [public_624e134]
        mov dword ptr ds : [esi+8], eax
        public_622b2fc : nop
        mov dword ptr ds : [esi], offset public_624e124
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_62565b0]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, 1
        pop esi
        ret 
        public_622b325 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x622b2d0)
    }
}

#undef public_622b2fc
#undef public_622b325
