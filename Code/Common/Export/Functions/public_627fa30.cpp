#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);

#define public_627fa4c _public_627fa4c
#define public_627fa70 _public_627fa70
#define public_627fa7e _public_627fa7e

PROC_DECLARE(0x627fa30, internal_627fa30, public_627fa30);
extern "C" NAKED register_t __cdecl internal_627fa30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        cmp eax, edi
        mov byte ptr ds : [esi], 1
        je public_627fa4c
        push eax
        call public_6343ff0
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        public_627fa4c : nop
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x14], edi
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, edx
        cmp eax, edx
        je public_627fa7e
        lea ebx, ds:[ebx]
        public_627fa70 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_627fa70
        public_627fa7e : nop
        pop edi
        mov dword ptr ds : [esi+0x28], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627fa30)
    }
}

#undef public_627fa4c
#undef public_627fa70
#undef public_627fa7e
