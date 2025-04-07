#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f743e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f74417 _public_6f74417
#define public_6f7441c _public_6f7441c
#define public_6f74424 _public_6f74424
#define public_6f74429 _public_6f74429
#define public_6f74435 _public_6f74435
#define public_6f74454 _public_6f74454
#define public_6f74468 _public_6f74468
#define public_6f744cd _public_6f744cd
#define public_6f744e7 _public_6f744e7
#define public_6f74526 _public_6f74526
#define public_6f74544 _public_6f74544
#define public_6f74560 _public_6f74560
#define public_6f7456f _public_6f7456f
#define public_6f74578 _public_6f74578
#define public_6f74585 _public_6f74585

PROC_DECLARE(0x6f743e0, internal_6f743e0, public_6f743e0);
extern "C" NAKED register_t __cdecl internal_6f743e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xA0]
        sub esp, 8
        push esi
        lea esi, ds:[ecx+0x98]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_6f744e7
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f74417
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f7441c
        public_6f74417 : nop
        mov ecx, 1
        public_6f7441c : nop
        test edx, edx
        jne public_6f74424
        xor eax, eax
        jmp public_6f74429
        public_6f74424 : nop
        sub eax, edx
        sar eax, 2
        public_6f74429 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_6f74435
        xor eax, eax
        public_6f74435 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6f74468
        public_6f74454 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6f74454
        public_6f74468 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6f744cd
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f744cd : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f744e7 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f74544
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f74585
        public_6f74526 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f74526
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f74544 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f7456f
        lea esp, ss:[esp]
        public_6f74560 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f74560
        public_6f7456f : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f74585
        public_6f74578 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f74578
        public_6f74585 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f743e0)
    }
}

#undef public_6f74417
#undef public_6f7441c
#undef public_6f74424
#undef public_6f74429
#undef public_6f74435
#undef public_6f74454
#undef public_6f74468
#undef public_6f744cd
#undef public_6f744e7
#undef public_6f74526
#undef public_6f74544
#undef public_6f74560
#undef public_6f7456f
#undef public_6f74578
#undef public_6f74585
