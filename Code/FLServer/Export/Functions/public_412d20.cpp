#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412d20);
CLANG_FORWARD_PROC_SYMBOL(public_418c7e);
CLANG_FORWARD_PROC_SYMBOL(public_41929c);

#define public_412d8b _public_412d8b
#define public_412d8f _public_412d8f
#define public_412da8 _public_412da8
#define public_412dcb _public_412dcb
#define public_412df6 _public_412df6
#define public_412e19 _public_412e19
#define public_412e28 _public_412e28

PROC_DECLARE(0x412d20, internal_412d20, public_412d20);
extern "C" NAKED register_t __cdecl internal_412d20()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_41bbe8]
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C4]
        push 0x188
        push eax
        call ebx
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jle public_412e19
        push ebp
        lea ecx, ds:[esi+0x1A4]
        call public_41929c
        mov ecx, dword ptr ds : [esi+0x1C4]
        push 0
        push edi
        push 0x199
        push ecx
        call ebx
        mov ebp, eax
        cmp ebp, 0x80
        ja public_412d8b
        mov eax, dword ptr ds : [esi+0x1C4]
        push 0
        mov edx, edi
        sub edx, ebp
        push edx
        push 0x199
        push eax
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        jmp public_412d8f
        public_412d8b : nop
        mov dword ptr ss : [esp+0x10], ebp
        public_412d8f : nop
        mov ecx, dword ptr ds : [esi+0x1C4]
        push 0
        push 0
        push 0x18B
        push ecx
        call ebx
        dec eax
        cmp edi, eax
        jle public_412da8
        mov edi, eax
        public_412da8 : nop
        mov edx, dword ptr ds : [esi+0x1C4]
        push 0
        push edi
        push 0x199
        push edx
        call ebx
        test edi, edi
        jle public_412dcb
        cmp eax, 0x80
        jbe public_412dcb
        cmp eax, dword ptr ss : [esp+0x10]
        je public_412dcb
        dec edi
        public_412dcb : nop
        mov eax, dword ptr ds : [esi+0x1C4]
        push 0
        push edi
        push 0x186
        push eax
        call ebx
        cmp ebp, 0x80
        pop ebp
        lea ecx, ds:[esi+0xE0]
        ja public_412df6
        push 1
        call public_418c7e
        push 1
        jmp public_412e28
        public_412df6 : nop
        push 0
        call public_418c7e
        push 1
        lea ecx, ds:[esi+0x160]
        call public_418c7e
        push 1
        lea ecx, ds:[esi+0x60]
        call public_418c7e
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_412e19 : nop
        push 0
        lea ecx, ds:[esi+0xE0]
        call public_418c7e
        push 0
        public_412e28 : nop
        lea ecx, ds:[esi+0x160]
        call public_418c7e
        push 0
        lea ecx, ds:[esi+0x60]
        call public_418c7e
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x412d20)
    }
}

#undef public_412d8b
#undef public_412d8f
#undef public_412da8
#undef public_412dcb
#undef public_412df6
#undef public_412e19
#undef public_412e28
