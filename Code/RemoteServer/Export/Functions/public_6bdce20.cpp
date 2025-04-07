#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdce40 _public_6bdce40
#define public_6bdce42 _public_6bdce42
#define public_6bdce45 _public_6bdce45
#define public_6bdce52 _public_6bdce52

PROC_DECLARE(0x6bdce20, internal_6bdce20, public_6bdce20);
extern "C" NAKED register_t __cdecl internal_6bdce20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6bdce45
        push 4
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bdce40
        mov dword ptr ds : [eax], 0
        jmp public_6bdce42
        public_6bdce40 : nop
        xor eax, eax
        public_6bdce42 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6bdce45 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6bdce52
        jmp public_6bdc850
        public_6bdce52 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdce20)
    }
}

#undef public_6bdce40
#undef public_6bdce42
#undef public_6bdce45
#undef public_6bdce52
