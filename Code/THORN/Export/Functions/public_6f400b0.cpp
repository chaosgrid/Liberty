#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f400b0);

#define public_6f400cf _public_6f400cf

PROC_DECLARE(0x6f400b0, internal_6f400b0, public_6f400b0);
extern "C" NAKED register_t __cdecl internal_6f400b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        xor al, al
        test ecx, ecx
        je public_6f400cf
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        test edx, edx
        je public_6f400cf
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, dword ptr ds : [edx+0x10]
        setl al
        public_6f400cf : nop
        ret 8
        UNREACHABLE_TRAP(0x6f400b0)
    }
}

#undef public_6f400cf
