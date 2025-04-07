#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240800);

#define public_6240819 _public_6240819
#define public_624082e _public_624082e
#define public_6240830 _public_6240830

PROC_DECLARE(0x6240800, internal_6240800, public_6240800);
extern "C" NAKED register_t __cdecl internal_6240800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_62572b4]
        push ebx
        push esi
        push edi
        test eax, eax
        mov esi, offset public_62572b0
        je public_624082e
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6240819 : nop
        push edi
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6240830
        mov eax, dword ptr ds : [esi+0x18]
        add esi, 0x14
        test eax, eax
        jne public_6240819
        public_624082e : nop
        xor eax, eax
        public_6240830 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6240800)
    }
}

#undef public_6240819
#undef public_624082e
#undef public_6240830
