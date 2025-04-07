#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44af60);
CLANG_FORWARD_PROC_SYMBOL(public_44b370);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_44755b _public_44755b
#define public_447564 _public_447564

PROC_DECLARE(0x447500, internal_447500, public_447500);
extern "C" NAKED register_t __cdecl internal_447500()
{
    __asm
    {
        push esi
        push 0x1B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_447564
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_447564
        push 0x3E
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_447564
        cmp dword ptr ds : [esi+0x70], 0xFFFFFFFF
        je public_447564
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_447564
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        je public_44755b
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_44b370
        public_44755b : nop
        mov ecx, dword ptr ds : [esi+8]
        push esi
        call public_44af60
        public_447564 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x447500)
    }
}

#undef public_44755b
#undef public_447564
