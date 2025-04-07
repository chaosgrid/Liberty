#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63487a0);

#define public_63487cf _public_63487cf
#define public_63487e2 _public_63487e2
#define public_63487eb _public_63487eb

PROC_DECLARE(0x63487a0, internal_63487a0, public_63487a0);
extern "C" NAKED register_t __cdecl internal_63487a0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_658a9e0]
        mov al, 1
        test al, cl
        jne public_63487eb
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_658a9ec]
        cmp eax, offset public_658a9f0
        mov byte ptr ds : [public_658a9e0], dl
        je public_63487e2
        test eax, eax
        je public_63487cf
        push eax
        call public_6343fb0
        add esp, 4
        public_63487cf : nop
        mov dword ptr ds : [public_658a9ec], 0
        mov word ptr ds : [public_658a9e8], 0
        public_63487e2 : nop
        mov word ptr ds : [public_658a9ea], 0
        public_63487eb : nop
        ret 
        UNREACHABLE_TRAP(0x63487a0)
    }
}

#undef public_63487cf
#undef public_63487e2
#undef public_63487eb
