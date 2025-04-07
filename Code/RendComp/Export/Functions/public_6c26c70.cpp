#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26c70);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c26cc2 _public_6c26cc2
#define public_6c26cdc _public_6c26cdc
#define public_6c26ce5 _public_6c26ce5
#define public_6c26cf0 _public_6c26cf0
#define public_6c26d1f _public_6c26d1f
#define public_6c26d27 _public_6c26d27

PROC_DECLARE(0x6c26c70, internal_6c26c70, public_6c26c70);
extern "C" NAKED register_t __cdecl internal_6c26c70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ds:[edx*4]
        push edi
        push eax
        mov dword ptr ds : [ebx+8], ecx
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ss : [esp+0x28]
        imul ecx, eax
        push ecx
        mov dword ptr ds : [ebx+0x10], eax
        call public_6c34eac
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ebx], eax
        add esp, 8
        xor eax, eax
        test ecx, ecx
        jle public_6c26ce5
        public_6c26cc2 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx+eax*4]
        test ecx, ecx
        jl public_6c26cdc
        mov edx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [edx+eax*4]
        mov edi, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [esi+edx*4]
        mov dword ptr ds : [edi+ecx*4], edx
        public_6c26cdc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        jl public_6c26cc2
        public_6c26ce5 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        xor eax, eax
        test ecx, ecx
        jbe public_6c26d27
        mov edi, edi
        public_6c26cf0 : nop
        mov edx, dword ptr ds : [esi+eax*4]
        test edx, edx
        jl public_6c26d1f
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp]
        imul esi, eax
        mov ecx, dword ptr ss : [ebp+4]
        add esi, edi
        mov edi, dword ptr ds : [ebx+8]
        imul edi, edx
        add edi, dword ptr ds : [ebx]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x2C]
        public_6c26d1f : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        jb public_6c26cf0
        public_6c26d27 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c26c70)
    }
}

#undef public_6c26cc2
#undef public_6c26cdc
#undef public_6c26ce5
#undef public_6c26cf0
#undef public_6c26d1f
#undef public_6c26d27
