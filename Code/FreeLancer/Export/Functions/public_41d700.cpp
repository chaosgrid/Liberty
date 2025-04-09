#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d700);
CLANG_FORWARD_PROC_SYMBOL(public_5ad620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41d712 _public_41d712
#define public_41d742 _public_41d742

PROC_DECLARE(0x41d700, internal_41d700, public_41d700);
extern "C" NAKED register_t __cdecl internal_41d700()
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
        je public_41d742
        push esi
        public_41d712 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_5ad620
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_41d712
        pop esi
        public_41d742 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x41d700)
    }
}

#undef public_41d712
#undef public_41d742
