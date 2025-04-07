#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401d40);
CLANG_FORWARD_PROC_SYMBOL(public_4023e0);
CLANG_FORWARD_PROC_SYMBOL(public_402610);
CLANG_FORWARD_PROC_SYMBOL(public_402640);
CLANG_FORWARD_PROC_SYMBOL(public_402670);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_401d77 _public_401d77
#define public_401d7c _public_401d7c
#define public_401d84 _public_401d84
#define public_401d89 _public_401d89
#define public_401d95 _public_401d95
#define public_401db4 _public_401db4
#define public_401dc8 _public_401dc8
#define public_401e2f _public_401e2f
#define public_401e4b _public_401e4b
#define public_401e90 _public_401e90
#define public_401eab _public_401eab
#define public_401ec0 _public_401ec0
#define public_401ecf _public_401ecf
#define public_401ed8 _public_401ed8
#define public_401ee5 _public_401ee5

PROC_DECLARE(0x401d40, internal_401d40, public_401d40);
extern "C" NAKED register_t __cdecl internal_401d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x778]
        sub esp, 8
        push esi
        lea esi, ds:[ecx+0x770]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_401e4b
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_401d77
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_401d7c
        public_401d77 : nop
        mov ecx, 1
        public_401d7c : nop
        test edx, edx
        jne public_401d84
        xor eax, eax
        jmp public_401d89
        public_401d84 : nop
        sub eax, edx
        sar eax, 2
        public_401d89 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_401d95
        xor eax, eax
        public_401d95 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_418a9e
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_401dc8
        public_401db4 : nop
        push ebp
        push ebx
        call public_402670
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_401db4
        public_401dc8 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_402640
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_402610
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_4023e0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_418978
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_401e2f
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_401e2f : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_401e4b : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_401eab
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_402610
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
        call public_402640
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_401ee5
        lea ebx, ds:[ebx]
        public_401e90 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_401e90
        add dword ptr ds : [esi+8], 4
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_401eab : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_402610
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_401ecf
        public_401ec0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_401ec0
        public_401ecf : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_401ee5
        public_401ed8 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_401ed8
        public_401ee5 : nop
        add dword ptr ds : [esi+8], 4
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x401d40)
    }
}

#undef public_401d77
#undef public_401d7c
#undef public_401d84
#undef public_401d89
#undef public_401d95
#undef public_401db4
#undef public_401dc8
#undef public_401e2f
#undef public_401e4b
#undef public_401e90
#undef public_401eab
#undef public_401ec0
#undef public_401ecf
#undef public_401ed8
#undef public_401ee5
