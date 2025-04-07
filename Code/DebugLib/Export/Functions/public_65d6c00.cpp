#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6340);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c00);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

PROC_DECLARE(0x65d6c00, internal_65d6c00, public_65d6c00);
extern "C" NAKED register_t __cdecl internal_65d6c00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65d6340
        push esi
        call public_65d6cb8
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
        UNREACHABLE_TRAP(0x65d6c00)
    }
}
