#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352480);

#define public_6352493 _public_6352493
#define public_63524aa _public_63524aa
#define public_63524ca _public_63524ca
#define public_63524d2 _public_63524d2
#define public_6352501 _public_6352501
#define public_635250e _public_635250e
#define public_6352521 _public_6352521
#define public_635252d _public_635252d
#define public_6352535 _public_6352535
#define public_6352545 _public_6352545
#define public_6352556 _public_6352556

PROC_DECLARE(0x6352480, internal_6352480, public_6352480);
extern "C" NAKED register_t __cdecl internal_6352480()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        and ebp, eax
        public_6352493 : nop
        mov eax, dword ptr ds : [esi+0xC]
        lea edi, ds:[eax+ebp*8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_63524aa
        mov dword ptr ds : [0], 0
        public_63524aa : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x18]
        or ecx, 0x80000000
        cmp ecx, eax
        jne public_63524ca
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ebx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 1
        je public_63524d2
        public_63524ca : nop
        mov eax, dword ptr ds : [esi+4]
        inc ebp
        and ebp, eax
        jmp public_6352493
        public_63524d2 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ecx-1]
        xor edx, ecx
        and edx, 0xFFFFFF
        xor edx, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ebx+ecx*8+4]
        test edx, edx
        mov eax, ecx
        je public_6352501
        mov eax, dword ptr ds : [ebx+ecx*8]
        and eax, ecx
        public_6352501 : nop
        lea edx, ss:[ebp+1]
        and edx, ecx
        mov edi, dword ptr ds : [ebx+edx*8+4]
        test edi, edi
        je public_6352556
        public_635250e : nop
        mov edi, ecx
        and edi, dword ptr ds : [ebx+edx*8]
        cmp edx, ebp
        jle public_635252d
        cmp edi, eax
        jge public_6352521
        cmp edi, ebp
        jg public_6352545
        jmp public_6352535
        public_6352521 : nop
        jne public_6352535
        cmp edi, edx
        jg public_6352535
        cmp edi, ebp
        jg public_6352545
        jmp public_6352535
        public_635252d : nop
        cmp ebp, ecx
        jne public_6352556
        cmp edi, eax
        jl public_6352545
        public_6352535 : nop
        mov ecx, dword ptr ds : [ebx+edx*8]
        mov dword ptr ds : [ebx+ebp*8], ecx
        mov ecx, dword ptr ds : [ebx+edx*8+4]
        mov dword ptr ds : [ebx+ebp*8+4], ecx
        mov ebp, edx
        public_6352545 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        inc edx
        and edx, ecx
        mov edi, dword ptr ds : [ebx+edx*8+4]
        test edi, edi
        jne public_635250e
        public_6352556 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+ebp*8+4], 0
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebp*8], 0
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6352480)
    }
}

#undef public_6352493
#undef public_63524aa
#undef public_63524ca
#undef public_63524d2
#undef public_6352501
#undef public_635250e
#undef public_6352521
#undef public_635252d
#undef public_6352535
#undef public_6352545
#undef public_6352556
