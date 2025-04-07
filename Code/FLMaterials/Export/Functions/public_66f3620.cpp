#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3620);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f364c _public_66f364c
#define public_66f3675 _public_66f3675

PROC_DECLARE(0x66f3620, internal_66f3620, public_66f3620);
extern "C" NAKED register_t __cdecl internal_66f3620()
{
    __asm
    {
        push esi
        push 0xC
        call public_6700810
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_66f3675
        mov eax, dword ptr ds : [public_6704020]
        test eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        jne public_66f364c
        mov eax, dword ptr ds : [public_6701568]
        mov dword ptr ds : [esi+8], eax
        public_66f364c : nop
        mov dword ptr ds : [esi], offset public_6701558
        call dword ptr ds : [public_6701008]
        mov edx, dword ptr ds : [public_6704020]
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
        public_66f3675 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f3620)
    }
}

#undef public_66f364c
#undef public_66f3675
