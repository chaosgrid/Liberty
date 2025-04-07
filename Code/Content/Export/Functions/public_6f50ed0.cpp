#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54960);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f552c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f50f01 _public_6f50f01
#define public_6f50f33 _public_6f50f33
#define public_6f50f55 _public_6f50f55
#define public_6f50f60 _public_6f50f60
#define public_6f50f83 _public_6f50f83

PROC_DECLARE(0x6f50ed0, internal_6f50ed0, public_6f50ed0);
extern "C" NAKED register_t __cdecl internal_6f50ed0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6fd0c94]
        mov edx, dword ptr ds : [public_6fd0ca0]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6f50f55
        mov edx, eax
        cmp eax, edx
        jne public_6f50f55
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fd0c98]
        cmp edi, eax
        mov esi, edi
        je public_6f50f33
        public_6f50f01 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fd0c90
        call public_6f54d40
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f98760
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fd0c98]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f50f01
        mov ecx, dword ptr ds : [public_6fd0c94]
        public_6f50f33 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fd0c94]
        mov dword ptr ds : [public_6fd0ca0], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fd0c94]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6f50f55 : nop
        cmp eax, ecx
        je public_6f50f83
        lea esp, ss:[esp]
        public_6f50f60 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6f552c0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0c90
        call public_6f54960
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6f50f60
        public_6f50f83 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f50ed0)
    }
}

#undef public_6f50f01
#undef public_6f50f33
#undef public_6f50f55
#undef public_6f50f60
#undef public_6f50f83
