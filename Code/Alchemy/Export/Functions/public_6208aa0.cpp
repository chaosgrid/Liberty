#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208aa0);

#define public_6208af0 _public_6208af0

PROC_DECLARE(0x6208aa0, internal_6208aa0, public_6208aa0);
extern "C" NAKED register_t __cdecl internal_6208aa0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        xor eax, eax
        mov ax, word ptr ds : [ecx+4]
        cmp eax, edx
        jg public_6208af0
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx+0x10]
        add eax, 0x18
        mov dword ptr ds : [ecx+0x10], eax
        mov ax, word ptr ds : [ecx+4]
        lea edx, ds:[eax+1]
        mov word ptr ds : [ecx+4], dx
        ret 0x18
        public_6208af0 : nop
        mov ax, word ptr ds : [ecx+0x18]
        ret 0x18
        UNREACHABLE_TRAP(0x6208aa0)
    }
}

#undef public_6208af0
