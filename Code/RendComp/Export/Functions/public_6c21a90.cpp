#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21a90);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c21abc _public_6c21abc
#define public_6c21ac6 _public_6c21ac6
#define public_6c21ac8 _public_6c21ac8
#define public_6c21ae5 _public_6c21ae5

PROC_DECLARE(0x6c21a90, internal_6c21a90, public_6c21a90);
extern "C" NAKED register_t __cdecl internal_6c21a90()
{
    __asm
    {
        push esi
        push 0xC
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c21ac6
        mov ecx, dword ptr ds : [public_6c37020]
        test ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        jne public_6c21abc
        mov ecx, dword ptr ds : [public_6c360c0]
        mov dword ptr ds : [eax+8], ecx
        public_6c21abc : nop
        mov dword ptr ds : [eax], offset public_6c360b0
        mov esi, eax
        jmp public_6c21ac8
        public_6c21ac6 : nop
        xor esi, esi
        public_6c21ac8 : nop
        call dword ptr ds : [public_6c36004]
        test eax, eax
        je public_6c21ae5
        mov ecx, dword ptr ds : [public_6c37020]
        mov edx, dword ptr ds : [eax]
        push 0x80000000
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        public_6c21ae5 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c21a90)
    }
}

#undef public_6c21abc
#undef public_6c21ac6
#undef public_6c21ac8
#undef public_6c21ae5
