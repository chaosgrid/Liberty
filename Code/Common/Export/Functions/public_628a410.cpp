#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a410);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_630e710);

#define public_628a463 _public_628a463
#define public_628a480 _public_628a480
#define public_628a4a6 _public_628a4a6
#define public_628a4ac _public_628a4ac
#define public_628a4b3 _public_628a4b3
#define public_628a4b9 _public_628a4b9
#define public_628a4cc _public_628a4cc

PROC_DECLARE(0x628a410, internal_628a410, public_628a410);
extern "C" NAKED register_t __cdecl internal_628a410()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push ecx
        call dword ptr ds : [edx+0xC0]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x80]
        mov esi, eax
        cmp dword ptr ds : [esi+4], ebx
        je public_628a4cc
        mov eax, dword ptr ds : [esi+0x6C]
        push edi
        mov edi, dword ptr ds : [esi+0x68]
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], edi
        je public_628a4b9
        push ebp
        public_628a463 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        push ebx
        call public_630e710
        add esp, 8
        test al, al
        je public_628a4ac
        mov edx, dword ptr ds : [esi+0x6C]
        lea eax, ds:[edi+0xC]
        cmp eax, edx
        je public_628a4a6
        mov ecx, edi
        public_628a480 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        mov dword ptr ds : [ebx+8], edi
        jne public_628a480
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x18]
        public_628a4a6 : nop
        add dword ptr ds : [esi+0x6C], 0xFFFFFFF4
        jmp public_628a4b3
        public_628a4ac : nop
        add edi, 0xC
        mov dword ptr ss : [esp+0x10], edi
        public_628a4b3 : nop
        cmp edi, dword ptr ds : [esi+0x6C]
        jne public_628a463
        pop ebp
        public_628a4b9 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x60]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_628a4cc : nop
        mov ecx, esi
        pop esi
        pop ebx
        add esp, 4
        jmp public_62af640
        UNREACHABLE_TRAP(0x628a410)
    }
}

#undef public_628a463
#undef public_628a480
#undef public_628a4a6
#undef public_628a4ac
#undef public_628a4b3
#undef public_628a4b9
#undef public_628a4cc
