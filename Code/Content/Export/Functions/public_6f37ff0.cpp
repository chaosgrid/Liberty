#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f37ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f3802a _public_6f3802a
#define public_6f38032 _public_6f38032
#define public_6f3803e _public_6f3803e
#define public_6f3808c _public_6f3808c
#define public_6f38094 _public_6f38094
#define public_6f3809d _public_6f3809d
#define public_6f380a6 _public_6f380a6
#define public_6f380d0 _public_6f380d0
#define public_6f380dd _public_6f380dd
#define public_6f380e5 _public_6f380e5
#define public_6f380ef _public_6f380ef
#define public_6f380f6 _public_6f380f6
#define public_6f380fb _public_6f380fb
#define public_6f3810b _public_6f3810b

PROC_DECLARE(0x6f37ff0, internal_6f37ff0, public_6f37ff0);
extern "C" NAKED register_t __cdecl internal_6f37ff0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+8], edi
        mov ebx, dword ptr ss : [ebp+0x34]
        jne public_6f3802a
        xor ecx, ecx
        jmp public_6f38032
        public_6f3802a : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6f38032 : nop
        cmp ecx, ebx
        jae public_6f3809d
        test ebx, ebx
        mov eax, ebx
        jge public_6f3803e
        xor eax, eax
        public_6f3803e : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f3808c
        xor eax, eax
        jmp public_6f38094
        public_6f3808c : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f38094 : nop
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_6f3809d : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f380fb
        public_6f380a6 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[edi+0xC]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x21]
        test cl, cl
        jne public_6f380dd
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x21]
        test cl, cl
        jne public_6f380f6
        lea esp, ss:[esp]
        public_6f380d0 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x21]
        test cl, cl
        je public_6f380d0
        jmp public_6f380f6
        public_6f380dd : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f380ef
        public_6f380e5 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6f380e5
        public_6f380ef : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6f380f6
        mov edi, eax
        public_6f380f6 : nop
        cmp edi, dword ptr ss : [ebp+0x28]
        jne public_6f380a6
        public_6f380fb : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f3810b
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6f3810b : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        sub eax, ecx
        pop ebp
        sar eax, 2
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f37ff0)
    }
}

#undef public_6f3802a
#undef public_6f38032
#undef public_6f3803e
#undef public_6f3808c
#undef public_6f38094
#undef public_6f3809d
#undef public_6f380a6
#undef public_6f380d0
#undef public_6f380dd
#undef public_6f380e5
#undef public_6f380ef
#undef public_6f380f6
#undef public_6f380fb
#undef public_6f3810b
