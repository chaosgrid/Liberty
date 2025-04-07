#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bedc0);

#define public_4bee61 _public_4bee61

PROC_DECLARE(0x4bedc0, internal_4bedc0, public_4bedc0);
extern "C" NAKED register_t __cdecl internal_4bedc0()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        pop esi
        je public_4bee61
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4bee61 : nop
        ret 
        UNREACHABLE_TRAP(0x4bedc0)
    }
}

#undef public_4bee61
