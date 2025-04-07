#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef966d);
CLANG_FORWARD_PROC_SYMBOL(public_6ef96f9);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9714);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9720);
CLANG_FORWARD_PROC_SYMBOL(public_6ef973b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef97c8);

#define public_6ef982d _public_6ef982d
#define public_6ef982f _public_6ef982f
#define public_6ef9835 _public_6ef9835
#define public_6ef9856 _public_6ef9856
#define public_6ef986e _public_6ef986e
#define public_6ef98aa _public_6ef98aa
#define public_6ef98b1 _public_6ef98b1
#define public_6ef98dd _public_6ef98dd
#define public_6ef98f4 _public_6ef98f4
#define public_6ef98f6 _public_6ef98f6
#define public_6ef9925 _public_6ef9925
#define public_6ef992f _public_6ef992f

PROC_DECLARE(0x6ef97c8, internal_6ef97c8, public_6ef97c8);
extern "C" NAKED register_t __cdecl internal_6ef97c8()
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
        jne public_6ef9835
        lea eax, ss:[ebp-0xC]
        xor esi, esi
        push eax
        call public_6ef9720
        test eax, eax
        pop ecx
        jne public_6ef98f4
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef9714
        pop ecx
        public_6ef982d : nop
        push 2
        public_6ef982f : nop
        pop eax
        jmp public_6ef98f6
        public_6ef9835 : nop
        lea eax, ss:[ebp-0xC]
        push eax
        lea eax, ss:[ebp-0x18]
        push eax
        call public_6ef96f9
        push dword ptr ds : [edi+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef966d
        add esp, 0x10
        test eax, eax
        je public_6ef9856
        inc ebx
        public_6ef9856 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, eax
        sub ecx, dword ptr ds : [edi+8]
        cmp ebx, ecx
        jge public_6ef986e
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef9714
        pop ecx
        jmp public_6ef98aa
        public_6ef986e : nop
        cmp ebx, eax
        jg public_6ef98b1
        sub eax, ebx
        mov esi, eax
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef96f9
        lea eax, ss:[ebp-0xC]
        push esi
        push eax
        call public_6ef973b
        push dword ptr ds : [edi+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef966d
        mov eax, dword ptr ds : [edi+0xC]
        inc eax
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef973b
        add esp, 0x20
        public_6ef98aa : nop
        xor esi, esi
        jmp public_6ef982d
        public_6ef98b1 : nop
        cmp ebx, dword ptr ds : [edi]
        jl public_6ef98dd
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef9714
        push dword ptr ds : [edi+0xC]
        or byte ptr ss : [ebp-9], 0x80
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef973b
        mov esi, dword ptr ds : [edi+0x14]
        add esp, 0xC
        add esi, dword ptr ds : [edi]
        push 1
        jmp public_6ef982f
        public_6ef98dd : nop
        push dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edi+0x14]
        and byte ptr ss : [ebp-9], 0x7F
        lea eax, ss:[ebp-0xC]
        push eax
        add esi, ebx
        call public_6ef973b
        pop ecx
        pop ecx
        public_6ef98f4 : nop
        xor eax, eax
        public_6ef98f6 : nop
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
        jne public_6ef9925
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx], edx
        jmp public_6ef992f
        public_6ef9925 : nop
        cmp edi, 0x20
        jne public_6ef992f
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], esi
        public_6ef992f : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef97c8)
    }
}

#undef public_6ef982d
#undef public_6ef982f
#undef public_6ef9835
#undef public_6ef9856
#undef public_6ef986e
#undef public_6ef98aa
#undef public_6ef98b1
#undef public_6ef98dd
#undef public_6ef98f4
#undef public_6ef98f6
#undef public_6ef9925
#undef public_6ef992f
