#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299f80);
CLANG_FORWARD_PROC_SYMBOL(public_62b1760);

#define public_629a2a7 _public_629a2a7
#define public_629a2a9 _public_629a2a9
#define public_629a2b9 _public_629a2b9
#define public_629a2be _public_629a2be

PROC_DECLARE(0x629a270, internal_629a270, public_629a270);
extern "C" NAKED register_t __cdecl internal_629a270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_6299f80
        cmp eax, 9
        jne public_629a2be
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_629a2b9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_629a2b9
        test eax, eax
        je public_629a2a7
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, ecx
        cmp edx, ecx
        je public_629a2a9
        public_629a2a7 : nop
        xor eax, eax
        public_629a2a9 : nop
        mov ecx, eax
        call public_62b1760
        test al, al
        mov eax, 6
        jne public_629a2be
        public_629a2b9 : nop
        mov eax, 9
        public_629a2be : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629a270)
    }
}

#undef public_629a2a7
#undef public_629a2a9
#undef public_629a2b9
#undef public_629a2be
