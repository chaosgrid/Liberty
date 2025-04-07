#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c31f30);
CLANG_FORWARD_PROC_SYMBOL(public_6c32000);
CLANG_FORWARD_PROC_SYMBOL(public_6c32020);
CLANG_FORWARD_PROC_SYMBOL(public_6c33fe0);

#define public_6c34010 _public_6c34010
#define public_6c3402b _public_6c3402b
#define public_6c34036 _public_6c34036

PROC_DECLARE(0x6c33fe0, internal_6c33fe0, public_6c33fe0);
extern "C" NAKED register_t __cdecl internal_6c33fe0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6c3402b
        mov ebp, dword ptr ds : [esi+0x20]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[eax+0x10]
        je public_6c3402b
        nop 
        public_6c34010 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_6c34036
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6c34010
        public_6c3402b : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 8
        public_6c34036 : nop
        push 1
        mov ecx, ebx
        call public_6c31f30
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ds : [ebx+0x10]
        push edi
        push 0
        mov ecx, ebx
        mov dword ptr ds : [eax+4], 0x49742400
        call public_6c32020
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        push 0
        mov ecx, ebx
        call public_6c32000
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c33fe0)
    }
}

#undef public_6c34010
#undef public_6c3402b
#undef public_6c34036
