#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d0470);
CLANG_FORWARD_PROC_SYMBOL(public_4d47a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4d47b2 _public_4d47b2
#define public_4d47e2 _public_4d47e2

PROC_DECLARE(0x4d47a0, internal_4d47a0, public_4d47a0);
extern "C" NAKED register_t __cdecl internal_4d47a0()
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
        je public_4d47e2
        push esi
        public_4d47b2 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_4d0470
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_4d47b2
        pop esi
        public_4d47e2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4d47a0)
    }
}

#undef public_4d47b2
#undef public_4d47e2
