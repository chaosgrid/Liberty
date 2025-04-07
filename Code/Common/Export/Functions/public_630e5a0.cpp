#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e5a0);

#define public_630e5bf _public_630e5bf

PROC_DECLARE(0x630e5a0, internal_630e5a0, public_630e5a0);
extern "C" NAKED register_t __cdecl internal_630e5a0()
{
    __asm
    {
        mov edx, ecx
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ds : [edx+0xC]
        jg public_630e5bf
        test eax, eax
        jl public_630e5bf
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        ret 4
        public_630e5bf : nop
        mov ecx, dword ptr ds : [edx]
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        shr ecx, 2
        mov edi, esi
        mov eax, 0xCDCDCDCD
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [edx+4]
        inc eax
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [esi], ecx
        pop edi
        mov dword ptr ds : [edx+4], esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x630e5a0)
    }
}

#undef public_630e5bf
