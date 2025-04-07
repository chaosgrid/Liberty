#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21a90);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a000);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34080);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c340bf _public_6c340bf
#define public_6c340e4 _public_6c340e4
#define public_6c340f4 _public_6c340f4

PROC_DECLARE(0x6c34080, internal_6c34080, public_6c34080);
extern "C" NAKED register_t __cdecl internal_6c34080()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 1
        jne public_6c340f4
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call dword ptr ds : [public_6c36020]
        push 0xC
        call public_6c34eac
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6c340e4
        mov eax, dword ptr ds : [public_6c37a24]
        test eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        jne public_6c340bf
        mov ecx, dword ptr ds : [public_6c367f8]
        mov dword ptr ds : [esi+8], ecx
        public_6c340bf : nop
        mov dword ptr ds : [esi], offset public_6c367e8
        call dword ptr ds : [public_6c36004]
        mov ecx, dword ptr ds : [public_6c37a24]
        mov edx, dword ptr ds : [eax]
        push 0x80000000
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6c340e4 : nop
        call public_6c21a90
        call public_6c2a000
        call public_6c2dae0
        pop esi
        public_6c340f4 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6c34080)
    }
}

#undef public_6c340bf
#undef public_6c340e4
#undef public_6c340f4
