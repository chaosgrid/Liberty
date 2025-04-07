#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_623f979 _public_623f979
#define public_623f98e _public_623f98e
#define public_623f990 _public_623f990

PROC_DECLARE(0x623f960, internal_623f960, public_623f960);
extern "C" NAKED register_t __cdecl internal_623f960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_62572b4]
        push ebx
        push esi
        push edi
        test eax, eax
        mov esi, offset public_62572b0
        je public_623f98e
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        public_623f979 : nop
        push edi
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_623f990
        mov eax, dword ptr ds : [esi+0x18]
        add esi, 0x14
        test eax, eax
        jne public_623f979
        public_623f98e : nop
        xor eax, eax
        public_623f990 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623f960)
    }
}

#undef public_623f979
#undef public_623f98e
#undef public_623f990
