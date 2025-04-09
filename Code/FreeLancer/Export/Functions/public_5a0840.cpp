#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_5a085e _public_5a085e
#define public_5a0868 _public_5a0868
#define public_5a0879 _public_5a0879

PROC_DECLARE(0x5a0840, internal_5a0840, public_5a0840);
extern "C" NAKED register_t __cdecl internal_5a0840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF01
        push esi
        mov esi, ecx
        jne public_5a0868
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5a085e
        mov edx, dword ptr ds : [esi]
        add eax, 0x60
        push eax
        call dword ptr ds : [edx+0x14]
        public_5a085e : nop
        or byte ptr ds : [esi+0x6C], 3
        mov al, 1
        pop esi
        ret 0xC
        public_5a0868 : nop
        cmp eax, 0xEF02
        jne public_5a0879
        and byte ptr ds : [esi+0x6C], 0xFC
        mov al, 1
        pop esi
        ret 0xC
        public_5a0879 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5a0840)
    }
}

#undef public_5a085e
#undef public_5a0868
#undef public_5a0879
