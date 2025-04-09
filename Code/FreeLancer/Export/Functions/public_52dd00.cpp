#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d410);
CLANG_FORWARD_PROC_SYMBOL(public_52dde0);

#define public_52dd24 _public_52dd24
#define public_52dd26 _public_52dd26
#define public_52dd38 _public_52dd38

PROC_DECLARE(0x52dd00, internal_52dd00, public_52dd00);
extern "C" NAKED register_t __cdecl internal_52dd00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        call public_52d410
        mov bl, al
        test bl, bl
        je public_52dd38
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_52dd24
        call dword ptr ds : [public_5c6548]
        jmp public_52dd26
        public_52dd24 : nop
        xor eax, eax
        public_52dd26 : nop
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        jne public_52dd38
        push edi
        mov ecx, esi
        call public_52dde0
        public_52dd38 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x52dd00)
    }
}

#undef public_52dd24
#undef public_52dd26
#undef public_52dd38
