#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f2d50);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f2d62 _public_4f2d62
#define public_4f2d92 _public_4f2d92

PROC_DECLARE(0x4f2d50, internal_4f2d50, public_4f2d50);
extern "C" NAKED register_t __cdecl internal_4f2d50()
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
        je public_4f2d92
        push esi
        public_4f2d62 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_5154f0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_4f2d62
        pop esi
        public_4f2d92 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4f2d50)
    }
}

#undef public_4f2d62
#undef public_4f2d92
