#include "ReadFile-PCH.h"


#define public_6b73368 _public_6b73368
#define public_6b7336e _public_6b7336e
#define public_6b73394 _public_6b73394
#define public_6b7339c _public_6b7339c

PROC_DECLARE(0x6b73350, internal_6b73350, public_6b73350);
extern "C" NAKED register_t __cdecl internal_6b73350()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov eax, dword ptr ds : [ebx+0x230]
        test eax, eax
        je public_6b73368
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b7336e
        public_6b73368 : nop
        mov esi, dword ptr ds : [ebx+0x238]
        public_6b7336e : nop
        test esi, esi
        je public_6b7339c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        mov edi, eax
        test edi, edi
        jne public_6b73394
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6b73394 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6b7339c : nop
        mov dword ptr ds : [ebx+0x1C], 2
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b73350)
    }
}

#undef public_6b73368
#undef public_6b7336e
#undef public_6b73394
#undef public_6b7339c
