#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617320);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6619d80);
CLANG_FORWARD_PROC_SYMBOL(public_661a140);
CLANG_FORWARD_PROC_SYMBOL(public_661abd0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661734d _public_661734d
#define public_6617375 _public_6617375
#define public_661738e _public_661738e
#define public_6617392 _public_6617392
#define public_66173b2 _public_66173b2

PROC_DECLARE(0x6617320, internal_6617320, public_6617320);
extern "C" NAKED register_t __cdecl internal_6617320()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_661738e
        mov ecx, eax
        cmp eax, ecx
        jne public_661738e
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6617375
        public_661734d : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6619d80
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_661abd0
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_661734d
        public_6617375 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_66173b2
        public_661738e : nop
        cmp eax, edi
        je public_66173b2
        public_6617392 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_661a140
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_6618ad0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6617392
        public_66173b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_66281d0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push edx
        mov dword ptr ds : [esi+0x10], ebp
        call public_66281d0
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6617320)
    }
}

#undef public_661734d
#undef public_6617375
#undef public_661738e
#undef public_6617392
#undef public_66173b2
