#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62146e0);

#define public_6214706 _public_6214706
#define public_6214724 _public_6214724

PROC_DECLARE(0x62146e0, internal_62146e0, public_62146e0);
extern "C" NAKED register_t __cdecl internal_62146e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0x10423CEB
        jne public_6214706
        mov ecx, dword ptr ds : [eax+0x50]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_6214706 : nop
        cmp ecx, 0xE5E3524C
        jne public_6214724
        mov edx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_6214724 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62146e0)
    }
}

#undef public_6214706
#undef public_6214724
