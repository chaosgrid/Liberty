#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bd40);
CLANG_FORWARD_PROC_SYMBOL(public_418d92);

#define public_40d4ee _public_40d4ee
#define public_40d50b _public_40d50b
#define public_40d517 _public_40d517

PROC_DECLARE(0x40d4a0, internal_40d4a0, public_40d4a0);
extern "C" NAKED register_t __cdecl internal_40d4a0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBA0]
        test eax, eax
        je public_40d517
        mov edx, dword ptr ds : [eax+0x2C]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov byte ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_41b150]
        test eax, eax
        je public_40d50b
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x103
        je public_40d517
        mov ecx, dword ptr ds : [esi+0xBA0]
        cmp eax, 1
        sete al
        test ecx, ecx
        mov byte ptr ss : [esp+4], al
        je public_40d4ee
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_40d4ee : nop
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        mov ecx, esi
        mov dword ptr ds : [esi+0xBA0], 0
        call dword ptr ds : [eax+0x98]
        mov byte ptr ds : [esi+0xBA8], 0
        public_40d50b : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, esi
        call public_40bd40
        public_40d517 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov ecx, esi
        call public_418d92
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x40d4a0)
    }
}

#undef public_40d4ee
#undef public_40d50b
#undef public_40d517
