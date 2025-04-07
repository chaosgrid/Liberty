#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f593a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f593af _public_6f593af
#define public_6f593c7 _public_6f593c7
#define public_6f593d8 _public_6f593d8
#define public_6f593f2 _public_6f593f2
#define public_6f593fd _public_6f593fd
#define public_6f593ff _public_6f593ff
#define public_6f59420 _public_6f59420
#define public_6f5942b _public_6f5942b
#define public_6f5943c _public_6f5943c

PROC_DECLARE(0x6f593a0, internal_6f593a0, public_6f593a0);
extern "C" NAKED register_t __cdecl internal_6f593a0()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_6f593af
        xor edx, edx
        jmp public_6f593c7
        public_6f593af : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f593c7 : nop
        test edx, edx
        jle public_6f5943c
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edx
        public_6f593d8 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ecx+ebx]
        cmp byte ptr ds : [eax], 0
        je public_6f5942b
        mov ecx, dword ptr ds : [esi+8]
        lea edi, ds:[eax+0x34]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6f593fd
        mov edx, dword ptr ds : [edi]
        public_6f593f2 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f593ff
        add eax, 4
        cmp eax, ecx
        jne public_6f593f2
        public_6f593fd : nop
        mov eax, ecx
        public_6f593ff : nop
        cmp eax, ecx
        jne public_6f5942b
        push edi
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f5942b
        mov edi, dword ptr ds : [edi]
        lea ebx, ds:[ebx]
        public_6f59420 : nop
        cmp dword ptr ds : [eax], edi
        je public_6f5942b
        add eax, 4
        cmp eax, ecx
        jne public_6f59420
        public_6f5942b : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x38
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f593d8
        pop edi
        pop esi
        pop ebx
        public_6f5943c : nop
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f593a0)
    }
}

#undef public_6f593af
#undef public_6f593c7
#undef public_6f593d8
#undef public_6f593f2
#undef public_6f593fd
#undef public_6f593ff
#undef public_6f59420
#undef public_6f5942b
#undef public_6f5943c
