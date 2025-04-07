#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71190);
CLANG_FORWARD_PROC_SYMBOL(public_6b713f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b71420);
CLANG_FORWARD_PROC_SYMBOL(public_6b71440);
CLANG_FORWARD_PROC_SYMBOL(public_6b71490);
CLANG_FORWARD_PROC_SYMBOL(public_6b72e10);
CLANG_FORWARD_PROC_SYMBOL(public_6b73ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6b73f20);
CLANG_FORWARD_PROC_SYMBOL(public_6b73f50);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b711c1 _public_6b711c1
#define public_6b711e2 _public_6b711e2
#define public_6b711e6 _public_6b711e6
#define public_6b71209 _public_6b71209
#define public_6b71292 _public_6b71292
#define public_6b71294 _public_6b71294
#define public_6b712bb _public_6b712bb
#define public_6b71311 _public_6b71311
#define public_6b71363 _public_6b71363
#define public_6b71365 _public_6b71365
#define public_6b7137b _public_6b7137b
#define public_6b71382 _public_6b71382
#define public_6b713d4 _public_6b713d4
#define public_6b713e0 _public_6b713e0

PROC_DECLARE(0x6b71190, internal_6b71190, public_6b71190);
extern "C" NAKED register_t __cdecl internal_6b71190()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        xor ebx, ebx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6b711e6
        mov esi, eax
        mov edx, 0x38
        cmp esi, ebx
        je public_6b711e2
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp eax, ecx
        jae public_6b711e2
        sub ecx, eax
        cmp ecx, edx
        jae public_6b711c1
        mov edx, ecx
        public_6b711c1 : nop
        mov ecx, edx
        add esi, eax
        mov ebp, ecx
        lea edi, ss:[esp+0x10]
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        mov ebp, dword ptr ss : [esp+0x50]
        and ecx, 3
        add eax, edx
        rep movsb
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_6b71209
        public_6b711e2 : nop
        xor edx, edx
        jmp public_6b71209
        public_6b711e6 : nop
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x50]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        push 0x38
        push ecx
        push edx
        call dword ptr ds : [public_6b79018]
        test eax, eax
        je public_6b713e0
        mov edx, dword ptr ss : [esp+0x50]
        public_6b71209 : nop
        cmp edx, 0x38
        jne public_6b713e0
        cmp dword ptr ss : [esp+0x10], 0x20465455
        jne public_6b713e0
        cmp dword ptr ss : [esp+0x14], 0x101
        jne public_6b713e0
        push 1
        push 0x250
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_6b71292
        lea ecx, ds:[esi+4]
        call public_6b71420
        mov dword ptr ds : [esi+0x230], ebx
        lea ecx, ds:[esi+0x240]
        mov dword ptr ds : [esi+0x234], ebx
        call public_6b71490
        mov al, 0x5C
        mov dword ptr ds : [esi+0x238], ebx
        mov byte ptr ds : [esi+0x20], al
        mov byte ptr ds : [esi+0x128], al
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov dword ptr ds : [esi], offset public_6b79138
        mov dword ptr ds : [esi+0x24C], 1
        jmp public_6b71294
        public_6b71292 : nop
        xor esi, esi
        public_6b71294 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0xC
        je public_6b71311
        cmp eax, 0x2C
        je public_6b712bb
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], ebx
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x38
        ret 
        public_6b712bb : nop
        push 0x478
        call public_6b782ac
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_6b71363
        lea edx, ss:[esp+0x50]
        lea ecx, ds:[edi+0x10]
        push edx
        call public_6b73f20
/*FIXUP push offset _public_6b73f50 @0x6b712df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b73f50
        push 4
        lea eax, ds:[edi+0x24]
        push 0x114
        push eax
        mov dword ptr ds : [edi+0x1C], ebx
        call public_6b73ed0
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi], offset public_6b790f8
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x474], ebx
        jmp public_6b71365
        public_6b71311 : nop
        push 0x490
        call public_6b782ac
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_6b71363
        lea edx, ss:[esp+0x50]
        lea ecx, ds:[edi+0x10]
        push edx
        call public_6b73f20
/*FIXUP push offset _public_6b73f50 @0x6b71331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b73f50
        push 4
        lea eax, ds:[edi+0x24]
        push 0x114
        push eax
        mov dword ptr ds : [edi+0x1C], ebx
        call public_6b73ed0
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi], offset public_6b790bc
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0x474], ebx
        jmp public_6b71365
        public_6b71363 : nop
        xor edi, edi
        public_6b71365 : nop
        mov dword ptr ds : [esi+0x238], edi
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        cmp eax, 0xFFFFFFFF
        jne public_6b7137b
        cmp dword ptr ds : [edi+8], ebx
        je public_6b71382
        public_6b7137b : nop
        mov ecx, edi
        call public_6b71440
        public_6b71382 : nop
        mov ecx, dword ptr ss : [ebp]
        add ebp, 4
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        push ebp
        lea ecx, ds:[edi+4]
        call public_6b713f0
        mov ebp, dword ptr ss : [esp+0x4C]
        push ebx
        mov ecx, esi
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b72e10
        mov ecx, dword ptr ds : [esi+0x238]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x18], eax
        je public_6b713d4
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6b713d4
        mov eax, dword ptr ss : [esp+0x54]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 
        public_6b713d4 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx], ebx
        public_6b713e0 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFA
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6b71190)
    }
}

#undef public_6b711c1
#undef public_6b711e2
#undef public_6b711e6
#undef public_6b71209
#undef public_6b71292
#undef public_6b71294
#undef public_6b712bb
#undef public_6b71311
#undef public_6b71363
#undef public_6b71365
#undef public_6b7137b
#undef public_6b71382
#undef public_6b713d4
#undef public_6b713e0
