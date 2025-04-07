#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3a65);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3af1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3b0c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3b18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3b33);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3bc0);

#define public_6ad3c25 _public_6ad3c25
#define public_6ad3c27 _public_6ad3c27
#define public_6ad3c2d _public_6ad3c2d
#define public_6ad3c4e _public_6ad3c4e
#define public_6ad3c66 _public_6ad3c66
#define public_6ad3ca2 _public_6ad3ca2
#define public_6ad3ca9 _public_6ad3ca9
#define public_6ad3cd5 _public_6ad3cd5
#define public_6ad3cec _public_6ad3cec
#define public_6ad3cee _public_6ad3cee
#define public_6ad3d1d _public_6ad3d1d
#define public_6ad3d27 _public_6ad3d27

PROC_DECLARE(0x6ad3bc0, internal_6ad3bc0, public_6ad3bc0);
extern "C" NAKED register_t __cdecl internal_6ad3bc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        movzx ecx, word ptr ds : [eax+0xA]
        mov ebx, ecx
        and ecx, 0x8000
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [eax+6]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [eax+2]
        movzx eax, word ptr ds : [eax]
        mov edi, dword ptr ss : [ebp+0x10]
        and ebx, 0x7FFF
        sub ebx, 0x3FFF
        mov dword ptr ss : [ebp-8], ecx
        shl eax, 0x10
        cmp ebx, 0xFFFFC001
        mov dword ptr ss : [ebp-4], eax
        jne public_6ad3c2d
        lea eax, ss:[ebp-0xC]
        xor esi, esi
        push eax
        call public_6ad3b18
        test eax, eax
        pop ecx
        jne public_6ad3cec
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3b0c
        pop ecx
        public_6ad3c25 : nop
        push 2
        public_6ad3c27 : nop
        pop eax
        jmp public_6ad3cee
        public_6ad3c2d : nop
        lea eax, ss:[ebp-0xC]
        push eax
        lea eax, ss:[ebp-0x18]
        push eax
        call public_6ad3af1
        push dword ptr ds : [edi+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3a65
        add esp, 0x10
        test eax, eax
        je public_6ad3c4e
        inc ebx
        public_6ad3c4e : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, eax
        sub ecx, dword ptr ds : [edi+8]
        cmp ebx, ecx
        jge public_6ad3c66
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3b0c
        pop ecx
        jmp public_6ad3ca2
        public_6ad3c66 : nop
        cmp ebx, eax
        jg public_6ad3ca9
        sub eax, ebx
        mov esi, eax
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3af1
        lea eax, ss:[ebp-0xC]
        push esi
        push eax
        call public_6ad3b33
        push dword ptr ds : [edi+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3a65
        mov eax, dword ptr ds : [edi+0xC]
        inc eax
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3b33
        add esp, 0x20
        public_6ad3ca2 : nop
        xor esi, esi
        jmp public_6ad3c25
        public_6ad3ca9 : nop
        cmp ebx, dword ptr ds : [edi]
        jl public_6ad3cd5
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3b0c
        push dword ptr ds : [edi+0xC]
        or byte ptr ss : [ebp-9], 0x80
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3b33
        mov esi, dword ptr ds : [edi+0x14]
        add esp, 0xC
        add esi, dword ptr ds : [edi]
        push 1
        jmp public_6ad3c27
        public_6ad3cd5 : nop
        push dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edi+0x14]
        and byte ptr ss : [ebp-9], 0x7F
        lea eax, ss:[ebp-0xC]
        push eax
        add esi, ebx
        call public_6ad3b33
        pop ecx
        pop ecx
        public_6ad3cec : nop
        xor eax, eax
        public_6ad3cee : nop
        push 0x1F
        pop ecx
        sub ecx, dword ptr ds : [edi+0xC]
        mov edi, dword ptr ds : [edi+0x10]
        shl esi, cl
        mov ecx, dword ptr ss : [ebp+8]
        neg ecx
        sbb ecx, ecx
        and ecx, 0x80000000
        or esi, ecx
        or esi, dword ptr ss : [ebp-0xC]
        cmp edi, 0x40
        jne public_6ad3d1d
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx], edx
        jmp public_6ad3d27
        public_6ad3d1d : nop
        cmp edi, 0x20
        jne public_6ad3d27
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], esi
        public_6ad3d27 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3bc0)
    }
}

#undef public_6ad3c25
#undef public_6ad3c27
#undef public_6ad3c2d
#undef public_6ad3c4e
#undef public_6ad3c66
#undef public_6ad3ca2
#undef public_6ad3ca9
#undef public_6ad3cd5
#undef public_6ad3cec
#undef public_6ad3cee
#undef public_6ad3d1d
#undef public_6ad3d27
