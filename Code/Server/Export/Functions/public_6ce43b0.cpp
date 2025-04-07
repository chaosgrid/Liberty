#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce43b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);

#define public_6ce43c5 _public_6ce43c5
#define public_6ce4419 _public_6ce4419
#define public_6ce441d _public_6ce441d
#define public_6ce442c _public_6ce442c
#define public_6ce4460 _public_6ce4460
#define public_6ce4472 _public_6ce4472
#define public_6ce4476 _public_6ce4476
#define public_6ce4485 _public_6ce4485
#define public_6ce4498 _public_6ce4498
#define public_6ce44c5 _public_6ce44c5
#define public_6ce44dc _public_6ce44dc
#define public_6ce44e1 _public_6ce44e1
#define public_6ce44e9 _public_6ce44e9
#define public_6ce44f5 _public_6ce44f5

PROC_DECLARE(0x6ce43b0, internal_6ce43b0, public_6ce43b0);
extern "C" NAKED register_t __cdecl internal_6ce43b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+8], ebp
        push edi
        jae public_6ce43c5
        call dword ptr ds : [public_6d64b04]
        public_6ce43c5 : nop
        mov edi, dword ptr ds : [esi+4]
        xor ecx, ecx
        cmp edi, ecx
        je public_6ce441d
        mov al, byte ptr ds : [edi-1]
        test al, al
        je public_6ce441d
        cmp al, 0xFF
        je public_6ce441d
        mov dl, al
        dec dl
        mov byte ptr ds : [edi-1], dl
        push edi
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce4419
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        call public_6ce1960
        add esp, 0xC
        push ebp
        mov ecx, esi
        call public_6ce4500
        public_6ce4419 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ce441d : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        sub eax, ebp
        cmp eax, ebx
        jae public_6ce442c
        mov ebx, eax
        public_6ce442c : nop
        test ebx, ebx
        jbe public_6ce44f5
        sub eax, ebx
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[ebx+ebp]
        lea ecx, ds:[eax+ecx*2]
        lea eax, ds:[eax+ebp*2]
        cmp ecx, eax
        jae public_6ce4472
        lea edi, ds:[edx+edx]
        lea ebp, ds:[edi+ecx]
        cmp eax, ebp
        jae public_6ce4472
        add eax, edi
        test edx, edx
        mov ecx, ebp
        jbe public_6ce4485
        lea ebx, ds:[ebx]
        public_6ce4460 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub eax, 2
        dec edx
        mov word ptr ds : [eax], di
        jne public_6ce4460
        jmp public_6ce4485
        public_6ce4472 : nop
        test edx, edx
        jbe public_6ce4485
        public_6ce4476 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6ce4476
        public_6ce4485 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, ebx
        cmp edi, 0x7FFFFFFD
        jbe public_6ce4498
        call dword ptr ds : [public_6d64b4c]
        public_6ce4498 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce44c5
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce44c5
        cmp cl, 0xFF
        je public_6ce44c5
        test edi, edi
        jne public_6ce44e1
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_6ce3b20
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6ce44c5 : nop
        test edi, edi
        jne public_6ce44dc
        test eax, eax
        je public_6ce44f5
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax], di
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6ce44dc : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6ce44e9
        public_6ce44e1 : nop
        mov ecx, esi
        push edi
        call public_6ce5500
        public_6ce44e9 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6ce44f5 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce43b0)
    }
}

#undef public_6ce43c5
#undef public_6ce4419
#undef public_6ce441d
#undef public_6ce442c
#undef public_6ce4460
#undef public_6ce4472
#undef public_6ce4476
#undef public_6ce4485
#undef public_6ce4498
#undef public_6ce44c5
#undef public_6ce44dc
#undef public_6ce44e1
#undef public_6ce44e9
#undef public_6ce44f5
