#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee6d50);

#define public_6ee6e18 _public_6ee6e18

PROC_DECLARE(0x6ee6d50, internal_6ee6d50, public_6ee6d50);
extern "C" NAKED register_t __cdecl internal_6ee6d50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x128]
        test eax, eax
        je public_6ee6e18
        mov edx, dword ptr ds : [esi+0xBC]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        mov edx, dword ptr ds : [esi+0xB8]
        push edx
        mov edx, dword ptr ds : [esi+0xB4]
        push edx
        mov edx, dword ptr ds : [esi+0xB0]
        push edx
        mov edx, dword ptr ds : [esi+0xAC]
        push edx
        mov edx, dword ptr ds : [esi+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        mov edx, dword ptr ds : [esi+0xD0]
        push edx
        mov edx, dword ptr ds : [esi+0xCC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ds : [esi+0xE0]
        mov eax, dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        mov edx, dword ptr ds : [esi+0xDC]
        push edx
        mov edx, dword ptr ds : [esi+0xD8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [esi+0xE8]
        mov eax, dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [esi+0xEC]
        mov eax, dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_6ee6e18 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee6d50)
    }
}

#undef public_6ee6e18
