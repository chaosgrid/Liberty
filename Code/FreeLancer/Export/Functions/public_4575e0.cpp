#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f5c0);

#define public_45761b _public_45761b

PROC_DECLARE(0x4575e0, internal_4575e0, public_4575e0);
extern "C" NAKED register_t __cdecl internal_4575e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x73]
        test al, al
        jne public_45761b
        mov al, byte ptr ds : [esi+0x72]
        test al, al
        jne public_45761b
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x58]
        push eax
        call public_44f5c0
        mov ecx, dword ptr ds : [esi+0x7C]
        test ecx, ecx
        je public_45761b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_45761b : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4575e0)
    }
}

#undef public_45761b
