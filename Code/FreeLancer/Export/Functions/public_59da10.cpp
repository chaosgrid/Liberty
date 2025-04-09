#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_59da27 _public_59da27
#define public_59da3c _public_59da3c
#define public_59da43 _public_59da43
#define public_59da49 _public_59da49

PROC_DECLARE(0x59da10, internal_59da10, public_59da10);
extern "C" NAKED register_t __cdecl internal_59da10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [public_67dbe8]
        test esi, esi
        push edi
        je public_59da43
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_5c6d24]
        public_59da27 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_59da3c
        add eax, 0x18
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_59da49
        public_59da3c : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_59da27
        public_59da43 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_59da49 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59da10)
    }
}

#undef public_59da27
#undef public_59da3c
#undef public_59da43
#undef public_59da49
