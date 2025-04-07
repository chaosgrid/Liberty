#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370660);
CLANG_FORWARD_PROC_SYMBOL(public_6390b10);

#define public_6390b27 _public_6390b27
#define public_6390b3f _public_6390b3f
#define public_6390b48 _public_6390b48

PROC_DECLARE(0x6390b10, internal_6390b10, public_6390b10);
extern "C" NAKED register_t __cdecl internal_6390b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        push edi
        je public_6390b48
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6390b48
        public_6390b27 : nop
        test dword ptr ds : [esi+0x14], 0x10000000
        jne public_6390b3f
        push esi
        call public_6370660
        push esi
        call public_636efc0
        add esp, 8
        public_6390b3f : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6390b27
        public_6390b48 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6390b10)
    }
}

#undef public_6390b27
#undef public_6390b3f
#undef public_6390b48
