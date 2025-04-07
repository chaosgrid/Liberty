#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4609);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5c5b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66fe);

#define public_6ef462d _public_6ef462d
#define public_6ef4642 _public_6ef4642
#define public_6ef4645 _public_6ef4645
#define public_6ef465f _public_6ef465f
#define public_6ef4666 _public_6ef4666
#define public_6ef466c _public_6ef466c
#define public_6ef467b _public_6ef467b

PROC_DECLARE(0x6ef4609, internal_6ef4609, public_6ef4609);
extern "C" NAKED register_t __cdecl internal_6ef4609()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f02674]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp eax, 3
        jne public_6ef462d
        cmp esi, dword ptr ds : [public_6f0266c]
        ja public_6ef465f
        push esi
        call public_6ef5c5b
        test eax, eax
        pop ecx
        je public_6ef465f
        pop esi
        ret 
        public_6ef462d : nop
        cmp eax, 2
        jne public_6ef465f
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ef4642
        lea esi, ds:[eax+0xF]
        and esi, 0xFFFFFFF0
        jmp public_6ef4645
        public_6ef4642 : nop
        push 0x10
        pop esi
        public_6ef4645 : nop
        cmp esi, dword ptr ds : [public_6f0052c]
        ja public_6ef466c
        mov eax, esi
        shr eax, 4
        push eax
        call public_6ef66fe
        test eax, eax
        pop ecx
        jne public_6ef467b
        jmp public_6ef466c
        public_6ef465f : nop
        test esi, esi
        jne public_6ef4666
        push 1
        pop esi
        public_6ef4666 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        public_6ef466c : nop
        push esi
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        public_6ef467b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef4609)
    }
}

#undef public_6ef462d
#undef public_6ef4642
#undef public_6ef4645
#undef public_6ef465f
#undef public_6ef4666
#undef public_6ef466c
#undef public_6ef467b
