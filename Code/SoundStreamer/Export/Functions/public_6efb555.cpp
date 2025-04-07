#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6efb555);
CLANG_FORWARD_PROC_SYMBOL(public_6efbac8);

#define public_6efb564 _public_6efb564
#define public_6efb583 _public_6efb583
#define public_6efb59f _public_6efb59f
#define public_6efb5a8 _public_6efb5a8

PROC_DECLARE(0x6efb555, internal_6efb555, public_6efb555);
extern "C" NAKED register_t __cdecl internal_6efb555()
{
    __asm
    {
        push esi
        push edi
        push 3
        xor edi, edi
        pop esi
        cmp dword ptr ds : [public_6f02520], esi
        jle public_6efb5a8
        public_6efb564 : nop
        mov eax, dword ptr ds : [public_6f01508]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_6efb59f
        test byte ptr ds : [eax+0xC], 0x83
        je public_6efb583
        push eax
        call public_6efbac8
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6efb583
        inc edi
        public_6efb583 : nop
        cmp esi, 0x14
        jl public_6efb59f
        mov eax, dword ptr ds : [public_6f01508]
        push dword ptr ds : [eax+esi*4]
        call public_6ef4512
        mov eax, dword ptr ds : [public_6f01508]
        pop ecx
        and dword ptr ds : [eax+esi*4], 0
        public_6efb59f : nop
        inc esi
        cmp esi, dword ptr ds : [public_6f02520]
        jl public_6efb564
        public_6efb5a8 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efb555)
    }
}

#undef public_6efb564
#undef public_6efb583
#undef public_6efb59f
#undef public_6efb5a8
