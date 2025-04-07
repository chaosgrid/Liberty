#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c34c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c34d2 _public_65c34d2
#define public_65c3502 _public_65c3502

PROC_DECLARE(0x65c34c0, internal_65c34c0, public_65c34c0);
extern "C" NAKED register_t __cdecl internal_65c34c0()
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
        je public_65c3502
        push esi
        public_65c34d2 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65c2500
        push esi
        call public_65c6a60
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_65c34d2
        pop esi
        public_65c3502 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65c34c0)
    }
}

#undef public_65c34d2
#undef public_65c3502
