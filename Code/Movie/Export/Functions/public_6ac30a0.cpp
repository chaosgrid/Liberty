#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac40e0);

#define public_6ac30cc _public_6ac30cc
#define public_6ac30de _public_6ac30de
#define public_6ac30e7 _public_6ac30e7
#define public_6ac30ec _public_6ac30ec

PROC_DECLARE(0x6ac30a0, internal_6ac30a0, public_6ac30a0);
extern "C" NAKED register_t __cdecl internal_6ac30a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, 1
        je public_6ac30ec
        jle public_6ac30e7
        cmp eax, 3
        jg public_6ac30e7
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        je public_6ac30de
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        sub ecx, eax
        push edi
        sub edx, eax
        public_6ac30cc : nop
        mov edi, dword ptr ds : [ecx+eax]
        mov ebx, dword ptr ds : [eax]
        xor edi, ebx
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        dec esi
        jne public_6ac30cc
        pop edi
        pop ebx
        public_6ac30de : nop
        mov eax, 1
        pop esi
        ret 0x10
        public_6ac30e7 : nop
        xor eax, eax
        ret 0x10
        public_6ac30ec : nop
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        push edx
        push eax
        call public_6ac40e0
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6ac30a0)
    }
}

#undef public_6ac30cc
#undef public_6ac30de
#undef public_6ac30e7
#undef public_6ac30ec
