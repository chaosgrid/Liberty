#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f34af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6ecad49 _public_6ecad49
#define public_6ecad53 _public_6ecad53

PROC_DECLARE(0x6ecace0, internal_6ecace0, public_6ecace0);
extern "C" NAKED register_t __cdecl internal_6ecace0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15710
        mov edi, eax
        test edi, edi
        je public_6ecad53
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xC]
        push edx
        add ecx, 0x114
        call public_6f7b0f0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [eax+0x118]
        je public_6ecad53
        mov ecx, edi
        call public_6f57740
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+0xC], edi
        mov edx, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [edx+0x14]
        je public_6ecad49
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        mov ecx, edi
        call public_6f34af0
        public_6ecad49 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+0xC], 0
        public_6ecad53 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecace0)
    }
}

#undef public_6ecad49
#undef public_6ecad53
