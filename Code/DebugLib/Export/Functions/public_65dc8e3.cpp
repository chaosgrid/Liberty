#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc88d);
CLANG_FORWARD_PROC_SYMBOL(public_65dc8e3);

#define public_65dc8f0 _public_65dc8f0
#define public_65dc909 _public_65dc909
#define public_65dc93f _public_65dc93f
#define public_65dc942 _public_65dc942
#define public_65dc94a _public_65dc94a
#define public_65dc957 _public_65dc957
#define public_65dc96e _public_65dc96e
#define public_65dc97f _public_65dc97f
#define public_65dc98e _public_65dc98e
#define public_65dc9a0 _public_65dc9a0

PROC_DECLARE(0x65dc8e3, internal_65dc8e3, public_65dc8e3);
extern "C" NAKED register_t __cdecl internal_65dc8e3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_65e35cc]
        push edi
        public_65dc8f0 : nop
        cmp dword ptr ds : [esi+0x10], 0xFFFFFFFF
        je public_65dc98e
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0x2010]
        mov ebx, 0x3FF000
        public_65dc909 : nop
        cmp dword ptr ds : [edi], 0xF0
        jne public_65dc94a
        mov eax, ebx
        push 0x4000
        add eax, dword ptr ds : [esi+0x10]
        push 0x1000
        push eax
        call dword ptr ds : [public_65e10cc]
        test eax, eax
        je public_65dc94a
        or dword ptr ds : [edi], 0xFFFFFFFF
        dec dword ptr ds : [public_65e6368]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_65dc93f
        cmp eax, edi
        jbe public_65dc942
        public_65dc93f : nop
        mov dword ptr ds : [esi+0xC], edi
        public_65dc942 : nop
        inc dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp+8]
        je public_65dc957
        public_65dc94a : nop
        sub ebx, 0x1000
        sub edi, 8
        test ebx, ebx
        jge public_65dc909
        public_65dc957 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov ecx, esi
        mov esi, dword ptr ds : [esi+4]
        je public_65dc98e
        cmp dword ptr ds : [ecx+0x18], 0xFFFFFFFF
        jne public_65dc98e
        push 1
        lea eax, ds:[ecx+0x20]
        pop edx
        public_65dc96e : nop
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_65dc97f
        inc edx
        add eax, 8
        cmp edx, 0x400
        jl public_65dc96e
        public_65dc97f : nop
        cmp edx, 0x400
        jne public_65dc98e
        push ecx
        call public_65dc88d
        pop ecx
        public_65dc98e : nop
        cmp esi, dword ptr ds : [public_65e35cc]
        je public_65dc9a0
        cmp dword ptr ss : [ebp+8], 0
        jg public_65dc8f0
        public_65dc9a0 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dc8e3)
    }
}

#undef public_65dc8f0
#undef public_65dc909
#undef public_65dc93f
#undef public_65dc942
#undef public_65dc94a
#undef public_65dc957
#undef public_65dc96e
#undef public_65dc97f
#undef public_65dc98e
#undef public_65dc9a0
