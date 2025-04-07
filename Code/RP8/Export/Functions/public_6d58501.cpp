#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58501);

#define public_6d58523 _public_6d58523
#define public_6d5852e _public_6d5852e
#define public_6d5853b _public_6d5853b
#define public_6d58555 _public_6d58555
#define public_6d585de _public_6d585de
#define public_6d585e2 _public_6d585e2
#define public_6d585ed _public_6d585ed
#define public_6d5860f _public_6d5860f
#define public_6d58616 _public_6d58616

PROC_DECLARE(0x6d58501, internal_6d58501, public_6d58501);
extern "C" NAKED register_t __cdecl internal_6d58501()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, edi
        and esi, 0xFFFF
        shr edi, 0x10
        test ecx, ecx
        jne public_6d58523
        xor eax, eax
        inc eax
        jmp public_6d58616
        public_6d58523 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        jbe public_6d5860f
        push ebx
        public_6d5852e : nop
        mov edx, 0x15B0
        cmp dword ptr ss : [ebp+0x10], edx
        jae public_6d5853b
        mov edx, dword ptr ss : [ebp+0x10]
        public_6d5853b : nop
        sub dword ptr ss : [ebp+0x10], edx
        cmp edx, 0x10
        jl public_6d585de
        mov eax, edx
        shr eax, 4
        mov ebx, eax
        neg ebx
        shl ebx, 4
        add edx, ebx
        public_6d58555 : nop
        movzx ebx, byte ptr ds : [ecx]
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+1]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+2]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+3]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+4]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+5]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+6]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+7]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+8]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+9]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xA]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xB]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xC]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xD]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xE]
        add edi, esi
        add esi, ebx
        movzx ebx, byte ptr ds : [ecx+0xF]
        add edi, esi
        add esi, ebx
        add edi, esi
        add ecx, 0x10
        dec eax
        jne public_6d58555
        public_6d585de : nop
        test edx, edx
        je public_6d585ed
        public_6d585e2 : nop
        movzx eax, byte ptr ds : [ecx]
        add esi, eax
        inc ecx
        add edi, esi
        dec edx
        jne public_6d585e2
        public_6d585ed : nop
        mov eax, esi
        xor edx, edx
        mov ebx, 0xFFF1
        mov esi, ebx
        div esi
        mov eax, edi
        mov esi, edx
        xor edx, edx
        div ebx
        cmp dword ptr ss : [ebp+0x10], 0
        mov edi, edx
        ja public_6d5852e
        pop ebx
        public_6d5860f : nop
        mov eax, edi
        shl eax, 0x10
        or eax, esi
        public_6d58616 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d58501)
    }
}

#undef public_6d58523
#undef public_6d5852e
#undef public_6d5853b
#undef public_6d58555
#undef public_6d585de
#undef public_6d585e2
#undef public_6d585ed
#undef public_6d5860f
#undef public_6d58616
