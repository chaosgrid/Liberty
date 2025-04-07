#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27a20);

#define public_6c27a31 _public_6c27a31
#define public_6c27a48 _public_6c27a48
#define public_6c27a4f _public_6c27a4f

PROC_DECLARE(0x6c27a20, internal_6c27a20, public_6c27a20);
extern "C" NAKED register_t __cdecl internal_6c27a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6c27a4f
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        test edx, edx
        jbe public_6c27a48
        push esi
        public_6c27a31 : nop
        mov edx, dword ptr ds : [ecx+0x18]
        mov si, word ptr ds : [ecx+0x10]
        add word ptr ds : [edx+eax*2], si
        lea edx, ds:[edx+eax*2]
        mov edx, dword ptr ds : [ecx+0x1C]
        inc eax
        cmp eax, edx
        jb public_6c27a31
        pop esi
        public_6c27a48 : nop
        mov dword ptr ds : [ecx+0x10], 0
        public_6c27a4f : nop
        ret 
        UNREACHABLE_TRAP(0x6c27a20)
    }
}

#undef public_6c27a31
#undef public_6c27a48
#undef public_6c27a4f
