#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b490);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bc60);

#define public_6f3b4b0 _public_6f3b4b0
#define public_6f3b4c5 _public_6f3b4c5
#define public_6f3b4d6 _public_6f3b4d6
#define public_6f3b4f4 _public_6f3b4f4
#define public_6f3b500 _public_6f3b500
#define public_6f3b515 _public_6f3b515

PROC_DECLARE(0x6f3b490, internal_6f3b490, public_6f3b490);
extern "C" NAKED register_t __cdecl internal_6f3b490()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0xEC]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea ebp, ds:[edi+0xE8]
        je public_6f3b4c5
        lea esp, ss:[esp]
        public_6f3b4b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_6f3bc60
        cmp esi, ebx
        jne public_6f3b4b0
        public_6f3b4c5 : nop
        mov esi, dword ptr ds : [edi+0xDC]
        cmp esi, dword ptr ds : [edi+0xE0]
        je public_6f3b515
        lea ebx, ds:[esi+4]
        public_6f3b4d6 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+0xA4]
        push eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [edi+0xE0]
        mov eax, ebx
        cmp eax, ecx
        je public_6f3b500
        mov edx, esi
        sub edx, ebx
        public_6f3b4f4 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f3b4f4
        public_6f3b500 : nop
        mov ecx, dword ptr ds : [edi+0xE0]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0xE0], ecx
        jne public_6f3b4d6
        public_6f3b515 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f3b490)
    }
}

#undef public_6f3b4b0
#undef public_6f3b4c5
#undef public_6f3b4d6
#undef public_6f3b4f4
#undef public_6f3b500
#undef public_6f3b515
