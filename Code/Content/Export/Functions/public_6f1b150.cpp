#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f1b1ba _public_6f1b1ba

PROC_DECLARE(0x6f1b150, internal_6f1b150, public_6f1b150);
extern "C" NAKED register_t __cdecl internal_6f1b150()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3068]
        lea esi, ds:[ebx+0x20]
        mov ecx, esi
        call edi
        mov ecx, esi
        call edi
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        lea ecx, ds:[ebx+0x3C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3134]
        mov edx, dword ptr ds : [ebx+0x14]
        add edx, 0xC
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1b1ba
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f1b1ba
        mov ecx, dword ptr ds : [ebx+0x38]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[ebx+0x38]
        je public_6f1b1ba
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb3178]
        public_6f1b1ba : nop
        add ebx, 0x40
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3174]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1b150)
    }
}

#undef public_6f1b1ba
