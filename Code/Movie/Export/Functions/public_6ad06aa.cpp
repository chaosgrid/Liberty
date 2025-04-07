#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad04ec);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0603);
CLANG_FORWARD_PROC_SYMBOL(public_6ad06aa);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3db2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3e29);

#define public_6ad0705 _public_6ad0705
#define public_6ad070f _public_6ad070f
#define public_6ad0723 _public_6ad0723
#define public_6ad0738 _public_6ad0738

PROC_DECLARE(0x6ad06aa, internal_6ad06aa, public_6ad06aa);
extern "C" NAKED register_t __cdecl internal_6ad06aa()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push ebx
        push esi
        lea eax, ss:[ebp-0x28]
        push edi
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push ecx
        fld qword ptr ds : [eax]
        fstp qword ptr ss : [esp]
        call public_6ad3e29
        mov eax, dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp+0x10]
        lea esi, ds:[eax-1]
        xor eax, eax
        cmp dword ptr ss : [ebp-0x10], 0x2D
        sete al
        add eax, dword ptr ss : [ebp+0xC]
        mov edi, eax
        lea eax, ss:[ebp-0x10]
        push eax
        push ebx
        push edi
        call public_6ad3db2
        mov eax, dword ptr ss : [ebp-0xC]
        add esp, 0x1C
        dec eax
        cmp esi, eax
        setl cl
        cmp eax, 0xFFFFFFFC
        jl public_6ad0723
        cmp eax, ebx
        jge public_6ad0723
        test cl, cl
        je public_6ad070f
        public_6ad0705 : nop
        mov al, byte ptr ds : [edi]
        inc edi
        test al, al
        jne public_6ad0705
        and byte ptr ds : [edi-2], al
        public_6ad070f : nop
        lea eax, ss:[ebp-0x10]
        push 1
        push eax
        push ebx
        push dword ptr ss : [ebp+0xC]
        call public_6ad0603
        add esp, 0x10
        jmp public_6ad0738
        public_6ad0723 : nop
        lea eax, ss:[ebp-0x10]
        push 1
        push eax
        push dword ptr ss : [ebp+0x14]
        push ebx
        push dword ptr ss : [ebp+0xC]
        call public_6ad04ec
        add esp, 0x14
        public_6ad0738 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad06aa)
    }
}

#undef public_6ad0705
#undef public_6ad070f
#undef public_6ad0723
#undef public_6ad0738
