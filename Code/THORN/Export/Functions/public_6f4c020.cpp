#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e040);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6f51100);
CLANG_FORWARD_PROC_SYMBOL(public_6f51140);

#define public_6f4c138 _public_6f4c138

PROC_DECLARE(0x6f4c020, internal_6f4c020, public_6f4c020);
extern "C" NAKED register_t __cdecl internal_6f4c020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push esi
        xor esi, esi
        cmp eax, esi
        jne public_6f4c138
        push 0x7C
        push esi
        call public_6f4fe10
        mov dword ptr ds : [public_6f61e28], eax
        mov dword ptr ds : [eax+0xC], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x10], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x14], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x18], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x1C], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x20], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x24], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x28], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x2C], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x30], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x34], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x38], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x3C], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x40], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x44], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x48], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x4C], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x58], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x5C], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x50], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x54], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x64], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x6C], esi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x70], esi
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x74], 0x96
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 8
        mov dword ptr ds : [eax+0x78], esi
        call public_6f4c220
        call public_6f4ede0
        call public_6f51140
        call public_6f4e040
        call public_6f51100
        public_6f4c138 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4c020)
    }
}

#undef public_6f4c138
