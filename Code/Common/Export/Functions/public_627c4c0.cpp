#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ca90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_630e450);

#define public_627c4d2 _public_627c4d2
#define public_627c4db _public_627c4db
#define public_627c4dd _public_627c4dd
#define public_627c4f2 _public_627c4f2
#define public_627c500 _public_627c500
#define public_627c513 _public_627c513
#define public_627c51a _public_627c51a
#define public_627c51e _public_627c51e
#define public_627c530 _public_627c530
#define public_627c539 _public_627c539
#define public_627c53b _public_627c53b
#define public_627c550 _public_627c550
#define public_627c557 _public_627c557
#define public_627c56a _public_627c56a
#define public_627c571 _public_627c571
#define public_627c575 _public_627c575

PROC_DECLARE(0x627c4c0, internal_627c4c0, public_627c4c0);
extern "C" NAKED register_t __cdecl internal_627c4c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[edi+0xC]
        xor esi, esi
        public_627c4d2 : nop
        cmp esi, ebx
        jne public_627c4db
        mov esi, dword ptr ss : [ebp+4]
        jmp public_627c4dd
        public_627c4db : nop
        mov esi, dword ptr ds : [esi]
        public_627c4dd : nop
        cmp esi, ebx
        je public_627c4f2
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_627c4d2
        public_627c4f2 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_627c51e
        lea esp, ss:[esp]
        public_627c500 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        je public_627c513
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [ebp+0x10], ecx
        jmp public_627c51a
        public_627c513 : nop
        push 1
        call public_627ca90
        public_627c51a : nop
        cmp esi, ebx
        jne public_627c500
        public_627c51e : nop
        lea esi, ds:[edi+0x20]
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        xor edi, edi
        lea esp, ss:[esp]
        public_627c530 : nop
        cmp edi, ebx
        jne public_627c539
        mov edi, dword ptr ds : [esi+4]
        jmp public_627c53b
        public_627c539 : nop
        mov edi, dword ptr ds : [edi]
        public_627c53b : nop
        cmp edi, ebx
        je public_627c550
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_627c530
        public_627c550 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_627c575
        public_627c557 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov ecx, edi
        mov edi, dword ptr ds : [edi]
        je public_627c56a
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_627c571
        public_627c56a : nop
        push 1
        call public_627ca90
        public_627c571 : nop
        cmp edi, ebx
        jne public_627c557
        public_627c575 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+8], bl
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov cl, byte ptr ds : [edi+8]
        lea edx, ds:[edi+0xC]
        mov byte ptr ds : [eax+8], cl
        push edx
        mov ecx, ebp
        call public_630e450
        add edi, 0x20
        push edi
        mov ecx, esi
        call public_630e450
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x627c4c0)
    }
}

#undef public_627c4d2
#undef public_627c4db
#undef public_627c4dd
#undef public_627c4f2
#undef public_627c500
#undef public_627c513
#undef public_627c51a
#undef public_627c51e
#undef public_627c530
#undef public_627c539
#undef public_627c53b
#undef public_627c550
#undef public_627c557
#undef public_627c56a
#undef public_627c571
#undef public_627c575
