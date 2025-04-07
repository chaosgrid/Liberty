#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2f30d _public_6c2f30d

PROC_DECLARE(0x6c2f2e0, internal_6c2f2e0, public_6c2f2e0);
extern "C" NAKED register_t __cdecl internal_6c2f2e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6c2f30d
        call public_6c2dff0
        mov dword ptr ds : [esi+8], 0
        public_6c2f30d : nop
        push esi
        call public_6c34ea0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c2f2e0)
    }
}

#undef public_6c2f30d
