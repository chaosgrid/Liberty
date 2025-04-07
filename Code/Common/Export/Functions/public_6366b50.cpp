#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366b50);
CLANG_FORWARD_PROC_SYMBOL(public_6367e90);

#define public_6366b71 _public_6366b71
#define public_6366ba4 _public_6366ba4
#define public_6366bae _public_6366bae
#define public_6366bd2 _public_6366bd2
#define public_6366bea _public_6366bea
#define public_6366bf0 _public_6366bf0

PROC_DECLARE(0x6366b50, internal_6366b50, public_6366b50);
extern "C" NAKED register_t __cdecl internal_6366b50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [eax+edx*4-4]
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        jne public_6366bea
        push ebx
        xor eax, eax
        test edx, edx
        push edi
        jle public_6366ba4
        push ebp
        public_6366b71 : nop
        mov edi, dword ptr ds : [esi+0x40]
        mov ebx, dword ptr ds : [esi+0x90]
        imul edi, ecx
        imul ebx, dword ptr ds : [esi+0x94]
        mov edx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ebp, dword ptr ds : [esi+0x74]
        add edx, edi
        mov edi, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [edi+edx*4]
        add ebx, eax
        mov dword ptr ss : [ebp+ebx*4], edx
        mov edx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, edx
        jl public_6366b71
        pop ebp
        public_6366ba4 : nop
        mov edx, dword ptr ds : [esi+0x44]
        xor eax, eax
        dec edx
        test edx, edx
        jle public_6366bd2
        public_6366bae : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [edx+eax*4]
        imul edx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [esi+0x80]
        add edx, ecx
        mov edx, dword ptr ds : [edi+edx*4]
        mov dword ptr ds : [ebx+eax*4], edx
        mov edx, dword ptr ds : [esi+0x44]
        inc eax
        dec edx
        cmp eax, edx
        jl public_6366bae
        public_6366bd2 : nop
        lea ecx, ds:[esi+0x6C]
        call public_6367e90
        cmp eax, 1
        pop edi
        pop ebx
        je public_6366bf0
        mov dword ptr ds : [esi+0x68], 2
        pop esi
        ret 
        public_6366bea : nop
        inc dword ptr ds : [esi+0x94]
        public_6366bf0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6366b50)
    }
}

#undef public_6366b71
#undef public_6366ba4
#undef public_6366bae
#undef public_6366bd2
#undef public_6366bea
#undef public_6366bf0
