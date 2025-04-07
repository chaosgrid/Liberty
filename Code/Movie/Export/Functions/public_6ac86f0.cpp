#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac86f0);

#define public_6ac8755 _public_6ac8755
#define public_6ac87b0 _public_6ac87b0
#define public_6ac87d2 _public_6ac87d2
#define public_6ac880b _public_6ac880b
#define public_6ac8866 _public_6ac8866
#define public_6ac8888 _public_6ac8888
#define public_6ac88a3 _public_6ac88a3
#define public_6ac88ca _public_6ac88ca
#define public_6ac88ed _public_6ac88ed

PROC_DECLARE(0x6ac86f0, internal_6ac86f0, public_6ac86f0);
extern "C" NAKED register_t __cdecl internal_6ac86f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 0x428
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], esi
        mov ebp, dword ptr ss : [esp+0x438]
        mov esi, dword ptr ss : [esp+0x42C]
        mov edi, dword ptr ss : [esp+0x430]
        cmp ebp, 0
        je public_6ac88ed
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x220], eax
        mul ebx
        cmp ebp, 2
        jle public_6ac8888
        mov dword ptr ss : [esp+4], ebp
        mov dword ptr ss : [esp], ecx
        mov ebp, 1
        mov dword ptr ss : [esp+0x324], ebx
        mov ebx, eax
        mov ecx, edx
        public_6ac8755 : nop
        mov dword ptr ss : [esp+ebp*8+0x10], ebx
        add ebx, ecx
        mov eax, dword ptr ds : [esi+ebp*4]
        mov ecx, 0
        mov edx, dword ptr ds : [edi+ebp*4]
        mov dword ptr ss : [esp+ebp*8+0x14], ecx
        adc ecx, ecx
        mov dword ptr ss : [esp+ebp*4+0x220], eax
        mov dword ptr ss : [esp+ebp*4+0x324], edx
        inc ebp
        mul edx
        add ebx, eax
        mov eax, dword ptr ss : [esp+4]
        adc ecx, edx
        cmp ebp, eax
        jne public_6ac8755
        xor esi, esi
        mov dword ptr ss : [esp+ebp*8+0x10], ebx
        mov ebx, dword ptr ss : [esp+0x220]
        mov ecx, dword ptr ss : [esp+0x324]
        lea edi, ds:[ebp*2-2]
        mov dword ptr ss : [esp+ebp*8+0x14], esi
        mov dword ptr ss : [esp+ebp*8+0x18], esi
        mov dword ptr ss : [esp+ebp*8+0x1C], esi
        public_6ac87b0 : nop
        mov eax, dword ptr ss : [esp+edi*2+0x220]
        mov edx, dword ptr ss : [esp+edi*2+0x324]
        sub eax, ebx
        sub edx, ecx
        imul eax, edx
        mov edx, dword ptr ss : [esp+ebp*8+0x14]
        add esi, 2
        add edx, eax
        mov dword ptr ss : [esp+ebp*8+0x14], edx
        public_6ac87d2 : nop
        mov eax, dword ptr ss : [esp+edi*2+0x21C]
        mov edx, dword ptr ss : [esp+edi*2+0x320]
        lea ebp, ds:[edi+esi-3]
        sub eax, ebx
        sbb ebx, ebx
        sub edx, ecx
        sbb ecx, ecx
        add eax, ebx
        xor eax, ebx
        xor ebx, ecx
        add edx, ecx
        add ebp, ebx
        xor edx, ecx
        mul edx
        mov ecx, dword ptr ss : [esp+ebp*4+0x18]
        mov ebx, dword ptr ss : [esp+ebp*4+0x20]
        add ecx, eax
        lea edi, ds:[edi-2]
        mov dword ptr ss : [esp+ebp*4+0x18], ecx
        public_6ac880b : nop
        lea ebp, ss:[ebp+2]
        adc ebx, edx
        mov edx, 0
        mov dword ptr ss : [esp+ebp*4+0x18], ebx
        mov ebx, dword ptr ss : [esp+ebp*4+0x20]
        jb public_6ac880b
        cmp esi, edi
        mov ebx, dword ptr ss : [esp+esi*2+0x21C]
        mov ecx, dword ptr ss : [esp+esi*2+0x320]
        jne public_6ac87d2
        mov ebp, dword ptr ss : [esp+4]
        xor edi, 0xFFFFFFFE
        mov ebx, dword ptr ss : [esp+esi*2+0x220]
        mov ecx, dword ptr ss : [esp+esi*2+0x324]
        lea edx, ds:[esi+2]
        lea edi, ds:[edi+ebp*2]
        cmp edx, edi
        jl public_6ac87b0
        shr ebp, 1
        lea esi, ss:[esp+0x18]
        mov edi, dword ptr ss : [esp]
        jae public_6ac88a3
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        sub edx, ecx
        public_6ac8866 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi], edx
        lea edi, ds:[edi+8]
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        sbb ebx, eax
        lea esi, ds:[esi+0x10]
        sbb edx, ecx
        dec ebp
        mov dword ptr ds : [edi-4], ebx
        jne public_6ac8866
        mov dword ptr ds : [edi], edx
        je public_6ac88ed
        public_6ac8888 : nop
        mov dword ptr ds : [ecx], eax
        jne public_6ac88ed
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi]
        imul eax, ebx
        mov ebx, dword ptr ds : [edi+4]
        add edx, eax
        imul esi, ebx
        add edx, esi
        mov dword ptr ds : [ecx+4], edx
        jmp public_6ac88ed
        public_6ac88a3 : nop
        mov eax, dword ptr ss : [esp+ebp*4+0x220]
        mov edx, dword ptr ss : [esp+ebp*4+0x324]
        sub eax, ebx
        sub edx, ecx
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        imul eax, edx
        mov edx, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        dec ebp
        sbb edx, ecx
        mov dword ptr ds : [edi], ebx
        public_6ac88ca : nop
        mov ebx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+4], edx
        lea edi, ds:[edi+8]
        sbb ebx, ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        lea esi, ds:[esi+0x10]
        sbb edx, ecx
        dec ebp
        mov dword ptr ds : [edi], ebx
        jne public_6ac88ca
        sub edx, eax
        mov dword ptr ds : [edi+4], edx
        public_6ac88ed : nop
        mov ebp, dword ptr ss : [esp+8]
        mov ebx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 0x428
        ret 0x10
        UNREACHABLE_TRAP(0x6ac86f0)
    }
}

#undef public_6ac8755
#undef public_6ac87b0
#undef public_6ac87d2
#undef public_6ac880b
#undef public_6ac8866
#undef public_6ac8888
#undef public_6ac88a3
#undef public_6ac88ca
#undef public_6ac88ed
