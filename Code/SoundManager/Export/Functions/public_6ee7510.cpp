#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7510);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee7556 _public_6ee7556

PROC_DECLARE(0x6ee7510, internal_6ee7510, public_6ee7510);
extern "C" NAKED register_t __cdecl internal_6ee7510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_6eeaf58], 0x7FFFFFFF
        jge public_6ee7556
        mov ecx, dword ptr ds : [public_6eeaf4c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6eeaf4c], eax
        inc dword ptr ds : [public_6eeaf58]
        dec dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        public_6ee7556 : nop
        push eax
        call public_6ee8ddc
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee7510)
    }
}

#undef public_6ee7556
