#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7330);

#define public_4c7338 _public_4c7338
#define public_4c7344 _public_4c7344
#define public_4c7347 _public_4c7347
#define public_4c7355 _public_4c7355

PROC_DECLARE(0x4c7330, internal_4c7330, public_4c7330);
extern "C" NAKED register_t __cdecl internal_4c7330()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        public_4c7338 : nop
        test esi, esi
        jne public_4c7344
        mov esi, dword ptr ds : [public_673518]
        jmp public_4c7347
        public_4c7344 : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c7347 : nop
        test esi, esi
        je public_4c7355
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        jmp public_4c7338
        public_4c7355 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c7330)
    }
}

#undef public_4c7338
#undef public_4c7344
#undef public_4c7347
#undef public_4c7355
