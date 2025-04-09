#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_526c80);
CLANG_FORWARD_PROC_SYMBOL(public_527400);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_526ca8 _public_526ca8
#define public_526cc7 _public_526cc7
#define public_526ce9 _public_526ce9
#define public_526cf0 _public_526cf0
#define public_526d10 _public_526d10

PROC_DECLARE(0x526c80, internal_526c80, public_526c80);
extern "C" NAKED register_t __cdecl internal_526c80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_526ce9
        mov ecx, eax
        cmp eax, ecx
        jne public_526ce9
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_526cc7
        public_526ca8 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_527400
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_526ca8
        public_526cc7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_526ce9 : nop
        cmp eax, edi
        je public_526d10
        lea ecx, ds:[ecx]
        public_526cf0 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_526cf0
        public_526d10 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x526c80)
    }
}

#undef public_526ca8
#undef public_526cc7
#undef public_526ce9
#undef public_526cf0
#undef public_526d10
