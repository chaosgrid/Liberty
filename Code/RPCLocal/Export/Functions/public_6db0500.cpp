#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db0500);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6db0519 _public_6db0519
#define public_6db052c _public_6db052c
#define public_6db053f _public_6db053f
#define public_6db0552 _public_6db0552

PROC_DECLARE(0x6db0500, internal_6db0500, public_6db0500);
extern "C" NAKED register_t __cdecl internal_6db0500()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6db5d54
        je public_6db0519
        push eax
        call public_6db1dc2
        add esp, 4
        public_6db0519 : nop
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        je public_6db052c
        push eax
        call public_6db1dc2
        add esp, 4
        public_6db052c : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_6db053f
        push eax
        call public_6db1dc2
        add esp, 4
        public_6db053f : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_6db0552
        push eax
        call public_6db1dc2
        add esp, 4
        public_6db0552 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6db0500)
    }
}

#undef public_6db0519
#undef public_6db052c
#undef public_6db053f
#undef public_6db0552
