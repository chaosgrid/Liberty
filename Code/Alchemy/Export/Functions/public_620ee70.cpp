#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620ee9c _public_620ee9c
#define public_620eec5 _public_620eec5

PROC_DECLARE(0x620ee70, internal_620ee70, public_620ee70);
extern "C" NAKED register_t __cdecl internal_620ee70()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_620eec5
        mov eax, dword ptr ds : [public_6255910]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_620ee9c
        mov eax, dword ptr ds : [public_624c018]
        mov dword ptr ds : [esi+8], eax
        public_620ee9c : nop
        mov dword ptr ds : [esi], offset public_624c008
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_6255910]
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
        public_620eec5 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620ee70)
    }
}

#undef public_620ee9c
#undef public_620eec5
