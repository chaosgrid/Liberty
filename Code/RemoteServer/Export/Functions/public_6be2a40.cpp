#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6be2a40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be2a60 _public_6be2a60
#define public_6be2a62 _public_6be2a62
#define public_6be2a65 _public_6be2a65
#define public_6be2a72 _public_6be2a72

PROC_DECLARE(0x6be2a40, internal_6be2a40, public_6be2a40);
extern "C" NAKED register_t __cdecl internal_6be2a40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6be2a65
        push 4
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be2a60
        mov dword ptr ds : [eax], 0
        jmp public_6be2a62
        public_6be2a60 : nop
        xor eax, eax
        public_6be2a62 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6be2a65 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6be2a72
        jmp public_6bdc850
        public_6be2a72 : nop
        ret 4
        UNREACHABLE_TRAP(0x6be2a40)
    }
}

#undef public_6be2a60
#undef public_6be2a62
#undef public_6be2a65
#undef public_6be2a72
