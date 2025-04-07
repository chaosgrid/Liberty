#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b9a0);

#define public_634b9bd _public_634b9bd

PROC_DECLARE(0x634b9a0, internal_634b9a0, public_634b9a0);
extern "C" NAKED register_t __cdecl internal_634b9a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x70], ecx
        mov edx, dword ptr ds : [ecx+0x20]
        test edx, edx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x20], eax
        je public_634b9bd
        mov dword ptr ds : [edx+4], eax
        public_634b9bd : nop
        inc word ptr ds : [ecx+0x3E]
        ret 4
        UNREACHABLE_TRAP(0x634b9a0)
    }
}

#undef public_634b9bd
