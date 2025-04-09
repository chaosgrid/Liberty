#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5a8f50);
CLANG_FORWARD_PROC_SYMBOL(public_5adba0);
CLANG_FORWARD_PROC_SYMBOL(public_5adf80);
CLANG_FORWARD_PROC_SYMBOL(public_5af680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a8f80 _public_5a8f80
#define public_5a8fa8 _public_5a8fa8
#define public_5a8fcd _public_5a8fcd
#define public_5a8fd1 _public_5a8fd1
#define public_5a8ff1 _public_5a8ff1

PROC_DECLARE(0x5a8f50, internal_5a8f50, public_5a8f50);
extern "C" NAKED register_t __cdecl internal_5a8f50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_5a8fcd
        mov ecx, eax
        cmp eax, ecx
        jne public_5a8fcd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5a8fa8
        lea esp, ss:[esp]
        public_5a8f80 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5adf80
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_5af680
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5a8f80
        public_5a8fa8 : nop
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
        call public_53e430
        jmp public_5a8ff1
        public_5a8fcd : nop
        cmp eax, edi
        je public_5a8ff1
        public_5a8fd1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_531930
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_5adba0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_5a8fd1
        public_5a8ff1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5a8f50)
    }
}

#undef public_5a8f80
#undef public_5a8fa8
#undef public_5a8fcd
#undef public_5a8fd1
#undef public_5a8ff1
