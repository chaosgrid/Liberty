#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdc750 _public_6bdc750
#define public_6bdc752 _public_6bdc752
#define public_6bdc755 _public_6bdc755
#define public_6bdc762 _public_6bdc762

PROC_DECLARE(0x6bdc730, internal_6bdc730, public_6bdc730);
extern "C" NAKED register_t __cdecl internal_6bdc730()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6bdc755
        push 4
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bdc750
        mov dword ptr ds : [eax], 0
        jmp public_6bdc752
        public_6bdc750 : nop
        xor eax, eax
        public_6bdc752 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6bdc755 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6bdc762
        jmp public_6bdc850
        public_6bdc762 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdc730)
    }
}

#undef public_6bdc750
#undef public_6bdc752
#undef public_6bdc755
#undef public_6bdc762
