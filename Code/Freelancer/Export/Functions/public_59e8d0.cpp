#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_59e8d0);

#define public_59e8e1 _public_59e8e1
#define public_59e8f6 _public_59e8f6
#define public_59e900 _public_59e900
#define public_59e922 _public_59e922
#define public_59e93d _public_59e93d
#define public_59e950 _public_59e950
#define public_59e96e _public_59e96e

PROC_DECLARE(0x59e8d0, internal_59e8d0, public_59e8d0);
extern "C" NAKED register_t __cdecl internal_59e8d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push esi
        push edi
        jne public_59e8e1
        xor edx, edx
        jmp public_59e8f6
        public_59e8e1 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_59e8f6 : nop
        test edx, edx
        jle public_59e93d
        xor edi, edi
        mov ebp, edx
        mov edi, edi
        public_59e900 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi+edi]
        add esi, edi
        cmp eax, 0xFFFFFFFF
        je public_59e922
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_59e922 : nop
        lea eax, ds:[esi+4]
        push eax
        call public_41b030
        add esi, 8
        push esi
        call public_41b030
        add esp, 8
        add edi, 0xC
        dec ebp
        jne public_59e900
        public_59e93d : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        cmp eax, edx
        je public_59e96e
        lea esp, ss:[esp]
        public_59e950 : nop
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebp
        mov esi, dword ptr ds : [esi+8]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        mov dword ptr ds : [edi+8], esi
        jne public_59e950
        public_59e96e : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59e8d0)
    }
}

#undef public_59e8e1
#undef public_59e8f6
#undef public_59e900
#undef public_59e922
#undef public_59e93d
#undef public_59e950
#undef public_59e96e
