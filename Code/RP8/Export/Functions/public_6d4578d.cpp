#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d455cc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4578d);

#define public_6d457df _public_6d457df
#define public_6d457f4 _public_6d457f4
#define public_6d45807 _public_6d45807
#define public_6d4581e _public_6d4581e
#define public_6d45821 _public_6d45821
#define public_6d45836 _public_6d45836
#define public_6d45849 _public_6d45849
#define public_6d45868 _public_6d45868
#define public_6d45880 _public_6d45880
#define public_6d458af _public_6d458af
#define public_6d458c5 _public_6d458c5

PROC_DECLARE(0x6d4578d, internal_6d4578d, public_6d4578d);
extern "C" NAKED register_t __cdecl internal_6d4578d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ds:[esi+8]
        push eax
        push edi
        call public_6d455cc
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d458c5
        mov al, byte ptr ds : [esi]
        fld dword ptr ds : [public_6d5f5cc]
        movzx ecx, al
        mov dword ptr ss : [ebp+0xC], ecx
        mov cl, byte ptr ds : [esi+1]
        cmp al, cl
        fild dword ptr ss : [ebp+0xC]
        movzx edx, cl
        mov dword ptr ss : [ebp+0xC], edx
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x20]
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x1C]
        fstp st(0)
        jbe public_6d4581e
        xor eax, eax
        inc eax
        public_6d457df : nop
        push 7
        pop ecx
        sub ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], ecx
        fild dword ptr ss : [ebp+0xC]
        jge public_6d457f4
        fadd dword ptr ds : [public_6d5f200]
        public_6d457f4 : nop
        test eax, eax
        fmul dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp+0xC], eax
        fild dword ptr ss : [ebp+0xC]
        jge public_6d45807
        fadd dword ptr ds : [public_6d5f200]
        public_6d45807 : nop
        fmul dword ptr ss : [ebp-0x1C]
        inc eax
        cmp eax, 7
        faddp 
        fmul dword ptr ds : [public_6d5f630]
        fstp dword ptr ss : [ebp+eax*4-0x20]
        jb public_6d457df
        jmp public_6d45868
        public_6d4581e : nop
        xor eax, eax
        inc eax
        public_6d45821 : nop
        push 5
        pop ecx
        sub ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], ecx
        fild dword ptr ss : [ebp+0xC]
        jge public_6d45836
        fadd dword ptr ds : [public_6d5f200]
        public_6d45836 : nop
        test eax, eax
        fmul dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp+0xC], eax
        fild dword ptr ss : [ebp+0xC]
        jge public_6d45849
        fadd dword ptr ds : [public_6d5f200]
        public_6d45849 : nop
        fmul dword ptr ss : [ebp-0x1C]
        inc eax
        cmp eax, 5
        faddp 
        fmul dword ptr ds : [public_6d61130]
        fstp dword ptr ss : [ebp+eax*4-0x20]
        jb public_6d45821
        fldz 
        fstp dword ptr ss : [ebp-8]
        fld1 
        fstp dword ptr ss : [ebp-4]
        public_6d45868 : nop
        movzx eax, byte ptr ds : [esi+2]
        xor ecx, ecx
        mov ch, byte ptr ds : [esi+4]
        push 8
        pop edx
        push ebx
        mov cl, byte ptr ds : [esi+3]
        shl ecx, 8
        or ecx, eax
        lea eax, ds:[edi+0xC]
        public_6d45880 : nop
        mov ebx, ecx
        and ebx, 7
        fld dword ptr ss : [ebp+ebx*4-0x20]
        shr ecx, 3
        fstp dword ptr ds : [eax]
        add eax, 0x10
        dec edx
        jne public_6d45880
        movzx eax, byte ptr ds : [esi+5]
        xor ecx, ecx
        mov ch, byte ptr ds : [esi+7]
        push 8
        pop edx
        pop ebx
        mov cl, byte ptr ds : [esi+6]
        shl ecx, 8
        or ecx, eax
        lea eax, ds:[edi+0x8C]
        public_6d458af : nop
        mov esi, ecx
        and esi, 7
        fld dword ptr ss : [ebp+esi*4-0x20]
        shr ecx, 3
        fstp dword ptr ds : [eax]
        add eax, 0x10
        dec edx
        jne public_6d458af
        xor eax, eax
        public_6d458c5 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4578d)
    }
}

#undef public_6d457df
#undef public_6d457f4
#undef public_6d45807
#undef public_6d4581e
#undef public_6d45821
#undef public_6d45836
#undef public_6d45849
#undef public_6d45868
#undef public_6d45880
#undef public_6d458af
#undef public_6d458c5
