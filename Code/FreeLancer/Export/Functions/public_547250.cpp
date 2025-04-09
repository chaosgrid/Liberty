#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_547278 _public_547278
#define public_54727f _public_54727f
#define public_547284 _public_547284
#define public_547293 _public_547293

PROC_DECLARE(0x547250, internal_547250, public_547250);
extern "C" NAKED register_t __cdecl internal_547250()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_54baf0
        add esi, 0xFFFFFFFC
        cmp eax, esi
        pop esi
        jne public_547293
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0
        je public_54727f
        dec eax
        je public_547278
        sub eax, 4
        jne public_547293
        mov eax, dword ptr ds : [public_678b10]
        jmp public_547284
        public_547278 : nop
        mov eax, dword ptr ds : [public_678b34]
        jmp public_547284
        public_54727f : nop
        mov eax, dword ptr ds : [public_678b1c]
        public_547284 : nop
        test eax, eax
        je public_547293
        push 0
        push eax
        call public_489e80
        add esp, 8
        public_547293 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x547250)
    }
}

#undef public_547278
#undef public_54727f
#undef public_547284
#undef public_547293
