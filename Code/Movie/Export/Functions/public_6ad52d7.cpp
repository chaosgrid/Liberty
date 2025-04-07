#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52d7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5373);

#define public_6ad52fa _public_6ad52fa
#define public_6ad5317 _public_6ad5317
#define public_6ad5319 _public_6ad5319

PROC_DECLARE(0x6ad52d7, internal_6ad52d7, public_6ad52d7);
extern "C" NAKED register_t __cdecl internal_6ad52d7()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ad52fa
        cmp dword ptr ds : [eax+0x10], 3
        jne public_6ad52fa
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_6ad52fa
        jmp public_6ad089c
        public_6ad52fa : nop
        mov eax, dword ptr ds : [public_6ae1094]
        test eax, eax
        je public_6ad5317
        push eax
        call public_6ad5373
        test eax, eax
        pop ecx
        je public_6ad5317
        push esi
        call dword ptr ds : [public_6ae1094]
        jmp public_6ad5319
        public_6ad5317 : nop
        xor eax, eax
        public_6ad5319 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ad52d7)
    }
}

#undef public_6ad52fa
#undef public_6ad5317
#undef public_6ad5319
