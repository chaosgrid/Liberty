#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415f10);
CLANG_FORWARD_PROC_SYMBOL(public_416880);
CLANG_FORWARD_PROC_SYMBOL(public_416900);
CLANG_FORWARD_PROC_SYMBOL(public_416cd0);
CLANG_FORWARD_PROC_SYMBOL(public_417070);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_415f2e _public_415f2e
#define public_415f30 _public_415f30
#define public_415f60 _public_415f60
#define public_415f7f _public_415f7f
#define public_415fa4 _public_415fa4
#define public_415fa8 _public_415fa8
#define public_415fc8 _public_415fc8

PROC_DECLARE(0x415f10, internal_415f10, public_415f10);
extern "C" NAKED register_t __cdecl internal_415f10()
{
    __asm
    {
        mov cl, byte ptr ds : [public_429584]
        mov al, 1
        test al, cl
        jne public_415f2e
        or cl, al
        mov byte ptr ds : [public_429584], cl
        mov ecx, offset public_429da4
        jmp public_415f30
        public_415f2e : nop
        ret 
        nop 
        public_415f30 : nop
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
        je public_415fa4
        mov ecx, eax
        cmp eax, ecx
        jne public_415fa4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_415f7f
        nop 
        lea esp, ss:[esp]
        public_415f60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_416cd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_415f60
        public_415f7f : nop
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
        call public_416880
        jmp public_415fc8
        public_415fa4 : nop
        cmp eax, edi
        je public_415fc8
        public_415fa8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_417070
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_416900
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_415fa8
        public_415fc8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_418978
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x415f10)
    }
}

#undef public_415f2e
#undef public_415f30
#undef public_415f60
#undef public_415f7f
#undef public_415fa4
#undef public_415fa8
#undef public_415fc8
