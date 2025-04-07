#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802830);
CLANG_FORWARD_PROC_SYMBOL(public_6803340);
CLANG_FORWARD_PROC_SYMBOL(public_6804de0);
CLANG_FORWARD_PROC_SYMBOL(public_68055f0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);
CLANG_FORWARD_PROC_SYMBOL(public_680a790);
CLANG_FORWARD_PROC_SYMBOL(public_680a7d0);

#define public_6803458 _public_6803458

PROC_DECLARE(0x6803340, internal_6803340, public_6803340);
extern "C" NAKED register_t __cdecl internal_6803340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push esi
        xor esi, esi
        cmp eax, esi
        jne public_6803458
        push 0x7C
        push esi
        call public_68065d0
        mov dword ptr ds : [public_680e604], eax
        mov dword ptr ds : [eax+0xC], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x10], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x14], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x18], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x1C], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x20], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x24], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x28], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x2C], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x30], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x34], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x38], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x3C], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x40], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x44], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x48], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x4C], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x58], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x5C], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x50], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x54], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x64], esi
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x6C], esi
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x70], esi
        mov edx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [edx+0x74], 0x96
        mov eax, dword ptr ds : [public_680e604]
        add esp, 8
        mov dword ptr ds : [eax+0x78], esi
        call public_6802830
        call public_68055f0
        call public_680a7d0
        call public_6804de0
        call public_680a790
        public_6803458 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6803340)
    }
}

#undef public_6803458
