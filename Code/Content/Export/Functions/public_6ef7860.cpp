#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef786f _public_6ef786f
#define public_6ef7877 _public_6ef7877
#define public_6ef7887 _public_6ef7887
#define public_6ef78a3 _public_6ef78a3
#define public_6ef78b1 _public_6ef78b1
#define public_6ef78bc _public_6ef78bc
#define public_6ef78e6 _public_6ef78e6
#define public_6ef78f8 _public_6ef78f8

PROC_DECLARE(0x6ef7860, internal_6ef7860, public_6ef7860);
extern "C" NAKED register_t __cdecl internal_6ef7860()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ef786f
        xor eax, eax
        jmp public_6ef7877
        public_6ef786f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6ef7877 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6ef78f8
        test ebx, ebx
        mov eax, ebx
        jge public_6ef7887
        xor eax, eax
        public_6ef7887 : nop
        shl eax, 3
        push edi
        push eax
        call public_6fa912a
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_6ef78bc
        push ebp
        public_6ef78a3 : nop
        test ecx, ecx
        je public_6ef78b1
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        public_6ef78b1 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ef78a3
        pop ebp
        public_6ef78bc : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*8]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6ef78e6
        xor eax, eax
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6ef78e6 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        lea eax, ds:[edi+eax*8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6ef78f8 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef7860)
    }
}

#undef public_6ef786f
#undef public_6ef7877
#undef public_6ef7887
#undef public_6ef78a3
#undef public_6ef78b1
#undef public_6ef78bc
#undef public_6ef78e6
#undef public_6ef78f8
