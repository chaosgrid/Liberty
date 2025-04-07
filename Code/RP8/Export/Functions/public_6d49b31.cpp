#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49b31);

#define public_6d49b65 _public_6d49b65
#define public_6d49bb7 _public_6d49bb7
#define public_6d49bec _public_6d49bec
#define public_6d49c02 _public_6d49c02

PROC_DECLARE(0x6d49b31, internal_6d49b31, public_6d49b31);
extern "C" NAKED register_t __cdecl internal_6d49b31()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov ecx, dword ptr ds : [edi+0x180]
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ds : [edi+0x20], 0
        mov eax, dword ptr ds : [edi+0xC4]
        push esi
        mov esi, dword ptr ds : [edi+0x114]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov dword ptr ss : [ebp-0x18], esi
        jle public_6d49c02
        push ebx
        lea ebx, ds:[eax+0xC]
        mov dword ptr ss : [ebp-0x10], ebx
        public_6d49b65 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        imul eax, dword ptr ds : [ebx]
        cdq 
        idiv dword ptr ds : [edi+0x114]
        mov edx, dword ptr ds : [ecx+0x38]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp-8]
        shl eax, 2
        mov edx, dword ptr ds : [eax+edx]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [eax+edx]
        mov eax, dword ptr ss : [ebp-0xC]
        test eax, eax
        jle public_6d49bec
        lea ecx, ds:[esi+2]
        imul ecx, eax
        lea ebx, ds:[edx+ecx*4]
        shl eax, 2
        mov ecx, edx
        sub ecx, eax
        inc esi
        imul esi, dword ptr ss : [ebp-0xC]
        lea eax, ds:[edx+esi*4]
        mov esi, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-4], edx
        sub esi, edx
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0xC], edx
        public_6d49bb7 : nop
        mov edx, dword ptr ds : [esi+eax]
        mov dword ptr ds : [esi+ecx], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [esi+edx]
        mov dword ptr ds : [esi+ebx], edx
        mov edx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [edx]
        add dword ptr ss : [ebp-4], 4
        mov dword ptr ds : [ebx], edx
        add eax, 4
        add ecx, 4
        add ebx, 4
        dec dword ptr ss : [ebp-0xC]
        jne public_6d49bb7
        mov esi, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov ebx, dword ptr ss : [ebp-0x10]
        public_6d49bec : nop
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        add ebx, 0x54
        cmp eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [ebp-0x10], ebx
        jl public_6d49b65
        pop ebx
        public_6d49c02 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d49b31)
    }
}

#undef public_6d49b65
#undef public_6d49bb7
#undef public_6d49bec
#undef public_6d49c02
