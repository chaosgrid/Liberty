#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);

#define public_6ce1a0f _public_6ce1a0f
#define public_6ce1a1c _public_6ce1a1c

PROC_DECLARE(0x6ce1a00, internal_6ce1a00, public_6ce1a00);
extern "C" NAKED register_t __cdecl internal_6ce1a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        ja public_6ce1a0f
        xor al, al
        ret 4
        public_6ce1a0f : nop
        mov edx, dword ptr ds : [ecx+4]
        dec eax
        cmp eax, edx
        jb public_6ce1a1c
        xor al, al
        ret 4
        public_6ce1a1c : nop
        mov ecx, dword ptr ds : [ecx]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x6ce1a00)
    }
}

#undef public_6ce1a0f
#undef public_6ce1a1c
