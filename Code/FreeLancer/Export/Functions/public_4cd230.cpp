#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cd230);

#define public_4cd240 _public_4cd240
#define public_4cd267 _public_4cd267

PROC_DECLARE(0x4cd230, internal_4cd230, public_4cd230);
extern "C" NAKED register_t __cdecl internal_4cd230()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_4cd267
        push ebx
        push ebp
        push edi
        public_4cd240 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        add eax, 0x10
        add edx, 0x10
        cmp eax, esi
        mov dword ptr ds : [ebx+0xC], edi
        jne public_4cd240
        pop edi
        pop ebp
        pop ebx
        public_4cd267 : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4cd230)
    }
}

#undef public_4cd240
#undef public_4cd267
