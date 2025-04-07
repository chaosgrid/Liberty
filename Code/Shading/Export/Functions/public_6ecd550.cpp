#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);

#define public_6ecd59c _public_6ecd59c
#define public_6ecd5af _public_6ecd5af

PROC_DECLARE(0x6ecd550, internal_6ecd550, public_6ecd550);
extern "C" NAKED register_t __cdecl internal_6ecd550()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        xor ebx, ebx
        call dword ptr ds : [public_6ed1000]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6ecc4e0
        test eax, eax
        jne public_6ecd59c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 1
        push edx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x68]
        test eax, eax
        jne public_6ecd59c
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x14
        public_6ecd59c : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        je public_6ecd5af
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6ecd5af : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ecd550)
    }
}

#undef public_6ecd59c
#undef public_6ecd5af
