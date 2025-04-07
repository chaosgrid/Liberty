#include "Server-PCH.h"


#define public_6cf4b09 _public_6cf4b09
#define public_6cf4b1e _public_6cf4b1e
#define public_6cf4b20 _public_6cf4b20
#define public_6cf4b38 _public_6cf4b38
#define public_6cf4b3f _public_6cf4b3f

PROC_DECLARE(0x6cf4ae0, internal_6cf4ae0, public_6cf4ae0);
extern "C" NAKED register_t __cdecl internal_6cf4ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push eax
        mov edi, ecx
        call dword ptr ds : [public_6d64018]
        add esp, 4
        xor esi, esi
        test eax, eax
        je public_6cf4b09
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cf4b09
        mov esi, dword ptr ds : [eax+0xB0]
        public_6cf4b09 : nop
        mov eax, dword ptr ds : [edi-0x60]
        test eax, eax
        je public_6cf4b1e
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        je public_6cf4b20
        public_6cf4b1e : nop
        xor eax, eax
        public_6cf4b20 : nop
        test esi, esi
        je public_6cf4b38
        cmp esi, dword ptr ds : [eax+0xE4]
        jne public_6cf4b38
        mov ecx, eax
        call dword ptr ds : [public_6d64458]
        test al, al
        jne public_6cf4b3f
        public_6cf4b38 : nop
        mov byte ptr ds : [edi+8], 1
        mov dword ptr ds : [edi+0xC], esi
        public_6cf4b3f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf4ae0)
    }
}

#undef public_6cf4b09
#undef public_6cf4b1e
#undef public_6cf4b20
#undef public_6cf4b38
#undef public_6cf4b3f
