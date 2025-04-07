#include "Shading-PCH.h"


#define public_6ec7447 _public_6ec7447
#define public_6ec7457 _public_6ec7457

PROC_DECLARE(0x6ec7430, internal_6ec7430, public_6ec7430);
extern "C" NAKED register_t __cdecl internal_6ec7430()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        push esi
        jne public_6ec7457
        mov esi, dword ptr ds : [public_6ed57e4]
        test esi, esi
        je public_6ec7457
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ec7447 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_6ec7447
        pop edi
        public_6ec7457 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec7430)
    }
}

#undef public_6ec7447
#undef public_6ec7457
