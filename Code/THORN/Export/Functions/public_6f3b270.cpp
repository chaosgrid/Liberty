#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b270);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d540);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e620);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3b2a0 _public_6f3b2a0
#define public_6f3b2bf _public_6f3b2bf
#define public_6f3b2e4 _public_6f3b2e4
#define public_6f3b2e8 _public_6f3b2e8
#define public_6f3b308 _public_6f3b308

PROC_DECLARE(0x6f3b270, internal_6f3b270, public_6f3b270);
extern "C" NAKED register_t __cdecl internal_6f3b270()
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
        je public_6f3b2e4
        mov ecx, eax
        cmp eax, ecx
        jne public_6f3b2e4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3b2bf
        nop 
        lea esp, ss:[esp]
        public_6f3b2a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f3e9f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3b2a0
        public_6f3b2bf : nop
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
        call public_6f3d540
        jmp public_6f3b308
        public_6f3b2e4 : nop
        cmp eax, edi
        je public_6f3b308
        public_6f3b2e8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f3f3f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f3e620
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f3b2e8
        public_6f3b308 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f3b270)
    }
}

#undef public_6f3b2a0
#undef public_6f3b2bf
#undef public_6f3b2e4
#undef public_6f3b2e8
#undef public_6f3b308
