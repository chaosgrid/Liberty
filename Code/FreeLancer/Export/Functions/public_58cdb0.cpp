#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);

#define public_58cdff _public_58cdff

PROC_DECLARE(0x58cdb0, internal_58cdb0, public_58cdb0);
extern "C" NAKED register_t __cdecl internal_58cdb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_58cdff
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        cmp edx, eax
        jae public_58cdff
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_58cdff
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        mov edx, dword ptr ss : [esp+8]
        sar eax, 2
        cmp edx, eax
        jae public_58cdff
        mov dword ptr ss : [esp+8], 1
        mov dword ptr ss : [esp+4], 1
        jmp public_57a620
        public_58cdff : nop
        ret 8
        UNREACHABLE_TRAP(0x58cdb0)
    }
}

#undef public_58cdff
