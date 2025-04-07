#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);

#define public_6ef3ed6 _public_6ef3ed6
#define public_6ef3efa _public_6ef3efa
#define public_6ef3f03 _public_6ef3f03

PROC_DECLARE(0x6ef3ec0, internal_6ef3ec0, public_6ef3ec0);
extern "C" NAKED register_t __cdecl internal_6ef3ec0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ef3ed6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6ef3ed6 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6ef3f03
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ef3efa
        cmp cl, 0xFF
        je public_6ef3efa
        dec cl
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_6ef3efa : nop
        push eax
        call public_6ef4507
        add esp, 4
        public_6ef3f03 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef3ec0)
    }
}

#undef public_6ef3ed6
#undef public_6ef3efa
#undef public_6ef3f03
