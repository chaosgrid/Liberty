#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f05440);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f05462 _public_6f05462
#define public_6f054a7 _public_6f054a7
#define public_6f054ac _public_6f054ac
#define public_6f054b4 _public_6f054b4
#define public_6f054b9 _public_6f054b9
#define public_6f054c5 _public_6f054c5
#define public_6f054e2 _public_6f054e2
#define public_6f054f6 _public_6f054f6
#define public_6f05557 _public_6f05557
#define public_6f0556f _public_6f0556f
#define public_6f055b0 _public_6f055b0
#define public_6f055bf _public_6f055bf
#define public_6f055d4 _public_6f055d4
#define public_6f055e3 _public_6f055e3
#define public_6f055f0 _public_6f055f0
#define public_6f055fd _public_6f055fd
#define public_6f05603 _public_6f05603
#define public_6f05606 _public_6f05606
#define public_6f0561d _public_6f0561d

PROC_DECLARE(0x6f05440, internal_6f05440, public_6f05440);
extern "C" NAKED register_t __cdecl internal_6f05440()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_6fd05dc]
        push ebx
        mov ebx, dword ptr ds : [public_6fd05d8]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ebx
        je public_6f0561d
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        public_6f05462 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [ebx+4], eax
        jg public_6f05606
        cmp dword ptr ds : [ebx+8], eax
        jl public_6f05606
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x24], ebx
        mov edi, eax
        jae public_6f0556f
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f054a7
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f054ac
        public_6f054a7 : nop
        mov ecx, 1
        public_6f054ac : nop
        test edx, edx
        jne public_6f054b4
        xor eax, eax
        jmp public_6f054b9
        public_6f054b4 : nop
        sub eax, edx
        sar eax, 2
        public_6f054b9 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6f054c5
        xor eax, eax
        public_6f054c5 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6f054f6
        public_6f054e2 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6f054e2
        public_6f054f6 : nop
        lea eax, ss:[esp+0x24]
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
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6f05557
        mov ebx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6f05603
        public_6f05557 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x10]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6f05603
        public_6f0556f : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f055bf
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x24]
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
        je public_6f055fd
        mov edi, edi
        public_6f055b0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f055b0
        jmp public_6f055fd
        public_6f055bf : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f055e3
        public_6f055d4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f055d4
        public_6f055e3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6f055fd
        lea ebx, ds:[ebx]
        public_6f055f0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6f055f0
        public_6f055fd : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6f05603 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f05606 : nop
        mov eax, dword ptr ds : [public_6fd05dc]
        add ebx, 0x18
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6f05462
        pop edi
        pop esi
        pop ebp
        public_6f0561d : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f05440)
    }
}

#undef public_6f05462
#undef public_6f054a7
#undef public_6f054ac
#undef public_6f054b4
#undef public_6f054b9
#undef public_6f054c5
#undef public_6f054e2
#undef public_6f054f6
#undef public_6f05557
#undef public_6f0556f
#undef public_6f055b0
#undef public_6f055bf
#undef public_6f055d4
#undef public_6f055e3
#undef public_6f055f0
#undef public_6f055fd
#undef public_6f05603
#undef public_6f05606
#undef public_6f0561d
