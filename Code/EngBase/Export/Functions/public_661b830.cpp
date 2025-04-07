#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661adc0);

#define public_661b865 _public_661b865

PROC_DECLARE(0x661b830, internal_661b830, public_661b830);
extern "C" NAKED register_t __cdecl internal_661b830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push eax
        push edi
        mov esi, ecx
        call public_661adc0
        mov bl, al
        test bl, bl
        je public_661b865
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC4]
        test eax, eax
        je public_661b865
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x40], eax
        public_661b865 : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x661b830)
    }
}

#undef public_661b865
