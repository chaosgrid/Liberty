#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa6d50 _public_6fa6d50
#define public_6fa6d6f _public_6fa6d6f
#define public_6fa6d94 _public_6fa6d94
#define public_6fa6d98 _public_6fa6d98
#define public_6fa6db8 _public_6fa6db8

PROC_DECLARE(0x6fa6d20, internal_6fa6d20, public_6fa6d20);
extern "C" NAKED register_t __cdecl internal_6fa6d20()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+8]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa6d94
        mov ecx, eax
        cmp eax, ecx
        jne public_6fa6d94
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6fa6d6f
        lea esp, ss:[esp]
        public_6fa6d50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa6ea0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6fa6d50
        public_6fa6d6f : nop
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
        call public_6f1df30
        jmp public_6fa6db8
        public_6fa6d94 : nop
        cmp eax, edi
        je public_6fa6db8
        public_6fa6d98 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6fa6d98
        public_6fa6db8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6fa6d20)
    }
}

#undef public_6fa6d50
#undef public_6fa6d6f
#undef public_6fa6d94
#undef public_6fa6d98
#undef public_6fa6db8
