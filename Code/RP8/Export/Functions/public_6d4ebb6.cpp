#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ebb6);

#define public_6d4ebec _public_6d4ebec
#define public_6d4ebfb _public_6d4ebfb
#define public_6d4ec05 _public_6d4ec05
#define public_6d4ec1e _public_6d4ec1e
#define public_6d4ec31 _public_6d4ec31
#define public_6d4ec3b _public_6d4ec3b

PROC_DECLARE(0x6d4ebb6, internal_6d4ebb6, public_6d4ebb6);
extern "C" NAKED register_t __cdecl internal_6d4ebb6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A4]
        mov edx, dword ptr ss : [ebp+0x14]
        test edx, edx
        mov ecx, dword ptr ds : [ecx+0x18]
        push esi
        mov esi, dword ptr ds : [eax+0x5C]
        mov eax, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0x10], eax
        jle public_6d4ec3b
        mov ecx, dword ptr ss : [ebp+0x10]
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        sub edi, ecx
        mov dword ptr ss : [ebp-8], edx
        public_6d4ebec : nop
        test esi, esi
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+ecx]
        mov dword ptr ss : [ebp+0x14], ebx
        jbe public_6d4ec31
        mov dword ptr ss : [ebp-4], esi
        public_6d4ebfb : nop
        and dword ptr ss : [ebp+8], 0
        xor esi, esi
        test eax, eax
        jle public_6d4ec1e
        public_6d4ec05 : nop
        movzx eax, byte ptr ds : [edx]
        mov ebx, dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ds : [ebx+esi*4]
        movzx eax, byte ptr ds : [ebx+eax]
        add dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x10]
        inc edx
        inc esi
        cmp esi, eax
        jl public_6d4ec05
        public_6d4ec1e : nop
        mov esi, dword ptr ss : [ebp+0x14]
        mov bl, byte ptr ss : [ebp+8]
        inc dword ptr ss : [ebp+0x14]
        dec dword ptr ss : [ebp-4]
        mov byte ptr ds : [esi], bl
        jne public_6d4ebfb
        mov esi, dword ptr ss : [ebp-0x14]
        public_6d4ec31 : nop
        add ecx, 4
        dec dword ptr ss : [ebp-8]
        jne public_6d4ebec
        pop edi
        pop ebx
        public_6d4ec3b : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4ebb6)
    }
}

#undef public_6d4ebec
#undef public_6d4ebfb
#undef public_6d4ec05
#undef public_6d4ec1e
#undef public_6d4ec31
#undef public_6d4ec3b
