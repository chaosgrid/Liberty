#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b31fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3200d _public_6b3200d
#define public_6b3202e _public_6b3202e
#define public_6b3204d _public_6b3204d
#define public_6b32070 _public_6b32070
#define public_6b32082 _public_6b32082
#define public_6b320c4 _public_6b320c4

PROC_DECLARE(0x6b31fa0, internal_6b31fa0, public_6b31fa0);
extern "C" NAKED register_t __cdecl internal_6b31fa0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push 0x1000
        mov esi, ecx
        call public_6b6a134
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6b3200d
        push 8
        mov dword ptr ds : [esi+0x28], 2
        call public_6b6a134
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[ebx+0x800]
        lea ebx, ds:[esi+4]
        add eax, 4
        add esp, 4
        add esi, 0x14
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        add esp, 0x18
        ret 
        public_6b3200d : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_6b3202e
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x20]
        jmp public_6b320c4
        public_6b3202e : nop
        push ebp
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebp, eax
        lea edi, ss:[ebp+ebp]
        lea eax, ds:[edi*4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        jge public_6b3204d
        xor eax, eax
        public_6b3204d : nop
        push eax
        call public_6b6a134
        mov ecx, dword ptr ds : [esi+0x10]
        shr edi, 2
        lea edi, ds:[eax+edi*4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, edi
        je public_6b32082
        nop 
        public_6b32070 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6b32070
        mov ebp, dword ptr ss : [esp+0x10]
        public_6b32082 : nop
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x24], eax
        lea eax, ss:[ebp+ebp]
        mov dword ptr ds : [esi+0x28], eax
        lea eax, ds:[edi+ebp*4]
        mov dword ptr ds : [eax], ebx
        mov ebp, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], ebp
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], ecx
        add esp, 4
        mov dword ptr ss : [ebp+0xC], edi
        pop ebp
        public_6b320c4 : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x14
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6b31fa0)
    }
}

#undef public_6b3200d
#undef public_6b3202e
#undef public_6b3204d
#undef public_6b32070
#undef public_6b32082
#undef public_6b320c4
