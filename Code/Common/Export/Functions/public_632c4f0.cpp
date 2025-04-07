#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632c502 _public_632c502
#define public_632c529 _public_632c529
#define public_632c53e _public_632c53e

PROC_DECLARE(0x632c4f0, internal_632c4f0, public_632c4f0);
extern "C" NAKED register_t __cdecl internal_632c4f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_632c53e
        push esi
        public_632c502 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_632c529
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_632c529 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_632c502
        pop esi
        public_632c53e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x632c4f0)
    }
}

#undef public_632c502
#undef public_632c529
#undef public_632c53e
