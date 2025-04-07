#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9d70);

#define public_65f9db0 _public_65f9db0
#define public_65f9dc0 _public_65f9dc0
#define public_65f9dd5 _public_65f9dd5
#define public_65f9df2 _public_65f9df2

PROC_DECLARE(0x65f9d70, internal_65f9d70, public_65f9d70);
extern "C" NAKED register_t __cdecl internal_65f9d70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x244]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x240], edx
        mov edx, dword ptr ds : [ecx+0x240]
        mov dword ptr ds : [eax+0x244], edx
        mov edx, dword ptr ds : [ecx+0x240]
        test edx, edx
        mov dword ptr ss : [esp+4], 0
        jle public_65f9df2
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0x244]
        push edi
        mov ebp, eax
        mov ebx, ecx
        lea esp, ss:[esp]
        public_65f9db0 : nop
        xor edi, edi
        test esi, esi
        jle public_65f9dd5
        mov eax, ebx
        mov edx, ebp
        lea ebx, ds:[ebx]
        public_65f9dc0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+0x244]
        inc edi
        add eax, 4
        add edx, 0x30
        cmp edi, esi
        jl public_65f9dc0
        public_65f9dd5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x240]
        inc eax
        add ebx, 0x30
        add ebp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jl public_65f9db0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_65f9df2 : nop
        ret 4
        UNREACHABLE_TRAP(0x65f9d70)
    }
}

#undef public_65f9db0
#undef public_65f9dc0
#undef public_65f9dd5
#undef public_65f9df2
