#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63673a0);
CLANG_FORWARD_PROC_SYMBOL(public_6367db0);

#define public_63673ac _public_63673ac
#define public_63673e5 _public_63673e5
#define public_63673f9 _public_63673f9
#define public_6367404 _public_6367404

PROC_DECLARE(0x63673a0, internal_63673a0, public_63673a0);
extern "C" NAKED register_t __cdecl internal_63673a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x44]
        xor edx, edx
        test eax, eax
        jle public_6367404
        push ebx
        push esi
        push edi
        public_63673ac : nop
        mov eax, dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [eax+edx*4]
        mov esi, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi+eax*4]
        mov edi, dword ptr ds : [ecx+0x80]
        mov dword ptr ds : [edi+edx*4], esi
        mov esi, dword ptr ds : [ecx+0x40]
        mov edi, dword ptr ds : [ecx+0x74]
        imul esi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov ebx, dword ptr ds : [ecx+0x44]
        lea esi, ds:[eax+esi*4]
        mov eax, edx
        imul eax, dword ptr ds : [ecx+0x90]
        lea edi, ds:[edi+eax*4]
        xor eax, eax
        test ebx, ebx
        jle public_63673f9
        public_63673e5 : nop
        mov ebx, dword ptr ds : [ecx+0x34]
        mov ebx, dword ptr ds : [ebx+eax*4]
        mov ebx, dword ptr ds : [esi+ebx*4]
        mov dword ptr ds : [edi+eax*4], ebx
        mov ebx, dword ptr ds : [ecx+0x44]
        inc eax
        cmp eax, ebx
        jl public_63673e5
        public_63673f9 : nop
        mov eax, dword ptr ds : [ecx+0x44]
        inc edx
        cmp edx, eax
        jl public_63673ac
        pop edi
        pop esi
        pop ebx
        public_6367404 : nop
        add ecx, 0x6C
        jmp public_6367db0
        UNREACHABLE_TRAP(0x63673a0)
    }
}

#undef public_63673ac
#undef public_63673e5
#undef public_63673f9
#undef public_6367404
