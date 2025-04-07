#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52f60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f52f8a _public_6f52f8a
#define public_6f52f90 _public_6f52f90
#define public_6f52fb0 _public_6f52fb0
#define public_6f52fc8 _public_6f52fc8
#define public_6f52fd4 _public_6f52fd4

PROC_DECLARE(0x6f52f60, internal_6f52f60, public_6f52f60);
extern "C" NAKED register_t __cdecl internal_6f52f60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f52f8a
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f52f8a : nop
        test eax, eax
        jge public_6f52f90
        xor eax, eax
        public_6f52f90 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f52fd4
        push ebx
        push ebp
        public_6f52fb0 : nop
        test ecx, ecx
        je public_6f52fc8
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], esi
        public_6f52fc8 : nop
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_6f52fb0
        pop ebp
        pop ebx
        public_6f52fd4 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f52f60)
    }
}

#undef public_6f52f8a
#undef public_6f52f90
#undef public_6f52fb0
#undef public_6f52fc8
#undef public_6f52fd4
