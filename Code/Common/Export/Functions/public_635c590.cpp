#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c590);

#define public_635c5c7 _public_635c5c7
#define public_635c5d7 _public_635c5d7
#define public_635c5e7 _public_635c5e7
#define public_635c5f6 _public_635c5f6
#define public_635c606 _public_635c606

PROC_DECLARE(0x635c590, internal_635c590, public_635c590);
extern "C" NAKED register_t __cdecl internal_635c590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax+8]
        mov eax, 2
        shl eax, cl
        shl edx, cl
        shl esi, cl
        shl edi, cl
        mov ecx, dword ptr ds : [ebx]
        sub eax, 2
        cmp ecx, edx
        jge public_635c5c7
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c5c7 : nop
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, esi
        jge public_635c5d7
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c5d7 : nop
        mov ebx, dword ptr ds : [ebx+8]
        cmp ebx, edi
        jge public_635c5e7
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c5e7 : nop
        add edx, eax
        cmp ecx, edx
        jle public_635c5f6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c5f6 : nop
        lea ecx, ds:[eax+esi]
        cmp ebp, ecx
        jle public_635c606
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c606 : nop
        add eax, edi
        xor edx, edx
        cmp ebx, eax
        setle dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 0xC
        UNREACHABLE_TRAP(0x635c590)
    }
}

#undef public_635c5c7
#undef public_635c5d7
#undef public_635c5e7
#undef public_635c5f6
#undef public_635c606
