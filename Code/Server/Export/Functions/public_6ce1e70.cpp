#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1e70);
CLANG_FORWARD_PROC_SYMBOL(public_6ce46d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce1ea0 _public_6ce1ea0
#define public_6ce1ec8 _public_6ce1ec8
#define public_6ce1eed _public_6ce1eed
#define public_6ce1ef1 _public_6ce1ef1
#define public_6ce1f11 _public_6ce1f11

PROC_DECLARE(0x6ce1e70, internal_6ce1e70, public_6ce1e70);
extern "C" NAKED register_t __cdecl internal_6ce1e70()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce1eed
        mov ecx, eax
        cmp eax, ecx
        jne public_6ce1eed
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ce1ec8
        nop 
        lea esp, ss:[esp]
        public_6ce1ea0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce4b30
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6ce5d30
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ce1ea0
        public_6ce1ec8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6ce1f11
        public_6ce1eed : nop
        cmp eax, edi
        je public_6ce1f11
        public_6ce1ef1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6ce5750
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ce46d0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ce1ef1
        public_6ce1f11 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ce1e70)
    }
}

#undef public_6ce1ea0
#undef public_6ce1ec8
#undef public_6ce1eed
#undef public_6ce1ef1
#undef public_6ce1f11
