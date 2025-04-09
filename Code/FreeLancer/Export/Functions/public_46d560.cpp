#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d560);
CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46d588 _public_46d588
#define public_46d5a7 _public_46d5a7
#define public_46d5c9 _public_46d5c9
#define public_46d5d0 _public_46d5d0
#define public_46d5f0 _public_46d5f0

PROC_DECLARE(0x46d560, internal_46d560, public_46d560);
extern "C" NAKED register_t __cdecl internal_46d560()
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
        je public_46d5c9
        mov ecx, eax
        cmp eax, ecx
        jne public_46d5c9
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46d5a7
        public_46d588 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46e380
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46d588
        public_46d5a7 : nop
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
        public_46d5c9 : nop
        cmp eax, edi
        je public_46d5f0
        lea ecx, ds:[ecx]
        public_46d5d0 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_595150
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_46d5d0
        public_46d5f0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46d560)
    }
}

#undef public_46d588
#undef public_46d5a7
#undef public_46d5c9
#undef public_46d5d0
#undef public_46d5f0
