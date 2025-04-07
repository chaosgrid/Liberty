#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d11b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d1c20);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d11fc _public_65d11fc

PROC_DECLARE(0x65d11b0, internal_65d11b0, public_65d11b0);
extern "C" NAKED register_t __cdecl internal_65d11b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, ebx
        mov ebp, dword ptr ds : [ebx+0x14]
        call public_65d1c20
        push ebx
        call public_65d6cb8
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        call public_65d6cb8
        mov ecx, dword ptr ds : [edi+0x14]
        add esp, 8
        dec ecx
        mov dword ptr ds : [edi+0x14], ecx
        mov edi, dword ptr ds : [edi+0x2C]
        test edi, edi
        je public_65d11fc
        mov eax, dword ptr ds : [edi]
        push ebp
        push 1
        push edi
        call dword ptr ds : [eax+0xC]
        public_65d11fc : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d11b0)
    }
}

#undef public_65d11fc
