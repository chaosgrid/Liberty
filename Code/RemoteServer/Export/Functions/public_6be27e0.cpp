#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6be27e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be2800 _public_6be2800
#define public_6be2802 _public_6be2802
#define public_6be2805 _public_6be2805
#define public_6be2812 _public_6be2812

PROC_DECLARE(0x6be27e0, internal_6be27e0, public_6be27e0);
extern "C" NAKED register_t __cdecl internal_6be27e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6be2805
        push 4
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be2800
        mov dword ptr ds : [eax], 0
        jmp public_6be2802
        public_6be2800 : nop
        xor eax, eax
        public_6be2802 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6be2805 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6be2812
        jmp public_6bdc850
        public_6be2812 : nop
        ret 4
        UNREACHABLE_TRAP(0x6be27e0)
    }
}

#undef public_6be2800
#undef public_6be2802
#undef public_6be2805
#undef public_6be2812
