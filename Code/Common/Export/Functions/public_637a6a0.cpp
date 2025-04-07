#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aa50);
CLANG_FORWARD_PROC_SYMBOL(public_637a6a0);

#define public_637a6ca _public_637a6ca
#define public_637a6f3 _public_637a6f3
#define public_637a704 _public_637a704
#define public_637a72e _public_637a72e

PROC_DECLARE(0x637a6a0, internal_637a6a0, public_637a6a0);
extern "C" NAKED register_t __cdecl internal_637a6a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov ebx, esi
        mov dword ptr ds : [edi+0x28], esi
        call public_635aa50
        mov ax, word ptr ds : [edi+0x1C]
        mov word ptr ds : [esi+0xC], ax
        mov ecx, dword ptr ds : [edi+0x1C]
        add esi, 0x10
        xor eax, eax
        test ecx, ecx
        jle public_637a6f3
        public_637a6ca : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov ebp, dword ptr ds : [edx]
        mov ecx, esi
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        add esi, 0x10
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ds : [edi+0x1C]
        inc eax
        cmp eax, ecx
        jl public_637a6ca
        public_637a6f3 : nop
        mov eax, esi
        sub eax, ebx
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        xor edx, edx
        xor ecx, ecx
        cmp eax, edx
        jle public_637a72e
        public_637a704 : nop
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+ecx*4]
        fld dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov eax, ebp
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [esi+8], eax
        fstp dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+0x14]
        add esi, 0x10
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ebp
        jl public_637a704
        public_637a72e : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub esi, ebx
        sar esi, 4
        shl esi, 8
        and ecx, 0xF3
        or esi, ecx
        or esi, 4
        pop edi
        mov dword ptr ds : [ebx+8], esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x637a6a0)
    }
}

#undef public_637a6ca
#undef public_637a6f3
#undef public_637a704
#undef public_637a72e
