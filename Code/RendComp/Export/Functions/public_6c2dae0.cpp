#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f490);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2db0c _public_6c2db0c
#define public_6c2db16 _public_6c2db16
#define public_6c2db18 _public_6c2db18
#define public_6c2db35 _public_6c2db35

PROC_DECLARE(0x6c2dae0, internal_6c2dae0, public_6c2dae0);
extern "C" NAKED register_t __cdecl internal_6c2dae0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2db16
        mov ecx, dword ptr ds : [public_6c3750c]
        test ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        jne public_6c2db0c
        mov ecx, dword ptr ds : [public_6c36424]
        mov dword ptr ds : [eax+8], ecx
        public_6c2db0c : nop
        mov dword ptr ds : [eax], offset public_6c36414
        mov esi, eax
        jmp public_6c2db18
        public_6c2db16 : nop
        xor esi, esi
        public_6c2db18 : nop
        call dword ptr ds : [public_6c36004]
        test eax, eax
        je public_6c2db35
        mov ecx, dword ptr ds : [public_6c3750c]
        mov edx, dword ptr ds : [eax]
        push 0x80000000
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        public_6c2db35 : nop
        call public_6c2ecf0
        call public_6c2f490
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2dae0)
    }
}

#undef public_6c2db0c
#undef public_6c2db16
#undef public_6c2db18
#undef public_6c2db35
