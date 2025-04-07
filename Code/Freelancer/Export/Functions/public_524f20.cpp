#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539cd0);

#define public_524f5f _public_524f5f

PROC_DECLARE(0x524f20, internal_524f20, public_524f20);
extern "C" NAKED register_t __cdecl internal_524f20()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xA8]
        test al, al
        mov edx, dword ptr ss : [esp+0xC]
        je public_524f5f
        test edx, edx
        je public_524f5f
        lea eax, ds:[edx+0xC]
        test eax, eax
        je public_524f5f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_524f5f
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_524f5f
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1B0]
        ret 0x10
        public_524f5f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+8], edx
        jmp public_539cd0
        UNREACHABLE_TRAP(0x524f20)
    }
}

#undef public_524f5f
