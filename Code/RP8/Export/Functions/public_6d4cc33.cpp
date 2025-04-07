#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4cc33);

#define public_6d4cc5d _public_6d4cc5d
#define public_6d4cc64 _public_6d4cc64
#define public_6d4cc78 _public_6d4cc78
#define public_6d4cc88 _public_6d4cc88
#define public_6d4cc8e _public_6d4cc8e
#define public_6d4cc9b _public_6d4cc9b

PROC_DECLARE(0x6d4cc33, internal_6d4cc33, public_6d4cc33);
extern "C" NAKED register_t __cdecl internal_6d4cc33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x20]
        push ebx
        mov ebx, dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ss : [ebp+0x18]
        dec eax
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp-8], ebx
        js public_6d4cc9b
        mov edx, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        shl edi, 2
        inc eax
        mov dword ptr ss : [ebp-4], eax
        public_6d4cc5d : nop
        xor esi, esi
        cmp dword ptr ss : [ebp+8], esi
        jle public_6d4cc8e
        public_6d4cc64 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [edi+eax]
        mov eax, dword ptr ds : [edx]
        add eax, esi
        test ebx, ebx
        jbe public_6d4cc88
        mov dword ptr ss : [ebp+0x18], ebx
        public_6d4cc78 : nop
        mov bl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], bl
        add eax, dword ptr ss : [ebp+8]
        inc ecx
        dec dword ptr ss : [ebp+0x18]
        jne public_6d4cc78
        mov ebx, dword ptr ss : [ebp-8]
        public_6d4cc88 : nop
        inc esi
        cmp esi, dword ptr ss : [ebp+8]
        jl public_6d4cc64
        public_6d4cc8e : nop
        add edi, 4
        add edx, 4
        dec dword ptr ss : [ebp-4]
        jne public_6d4cc5d
        pop edi
        pop esi
        public_6d4cc9b : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4cc33)
    }
}

#undef public_6d4cc5d
#undef public_6d4cc64
#undef public_6d4cc78
#undef public_6d4cc88
#undef public_6d4cc8e
#undef public_6d4cc9b
