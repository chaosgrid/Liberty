#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f0d0);

#define public_59f115 _public_59f115

PROC_DECLARE(0x59f0d0, internal_59f0d0, public_59f0d0);
extern "C" NAKED register_t __cdecl internal_59f0d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, 0xFFFFFFFF
        je public_59f115
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x64]
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x3F800000
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov al, 1
        pop esi
        ret 4
        public_59f115 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x59f0d0)
    }
}

#undef public_59f115
