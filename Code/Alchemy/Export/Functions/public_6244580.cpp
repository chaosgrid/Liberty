#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244580);

#define public_6244597 _public_6244597
#define public_62445ad _public_62445ad

PROC_DECLARE(0x6244580, internal_6244580, public_6244580);
extern "C" NAKED register_t __cdecl internal_6244580()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebx
        je public_62445ad
        public_6244597 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0x18]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        add esi, 4
        cmp esi, ebx
        jne public_6244597
        public_62445ad : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6244580)
    }
}

#undef public_6244597
#undef public_62445ad
