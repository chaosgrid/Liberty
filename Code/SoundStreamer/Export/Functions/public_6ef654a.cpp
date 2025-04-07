#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef654a);

#define public_6ef656f _public_6ef656f
#define public_6ef6597 _public_6ef6597

PROC_DECLARE(0x6ef654a, internal_6ef654a, public_6ef654a);
extern "C" NAKED register_t __cdecl internal_6ef654a()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x8000
        push 0
        push dword ptr ds : [esi+0x10]
        call dword ptr ds : [public_6efc0ac]
        cmp dword ptr ds : [public_6f00528], esi
        jne public_6ef656f
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6f00528], eax
        public_6ef656f : nop
        cmp esi, offset public_6efe508
        je public_6ef6597
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push esi
        push 0
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc07c]
        pop esi
        ret 
        public_6ef6597 : nop
        or dword ptr ds : [public_6efe518], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef654a)
    }
}

#undef public_6ef656f
#undef public_6ef6597
