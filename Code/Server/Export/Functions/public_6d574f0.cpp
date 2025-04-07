#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d574f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d57502 _public_6d57502
#define public_6d57533 _public_6d57533

PROC_DECLARE(0x6d574f0, internal_6d574f0, public_6d574f0);
extern "C" NAKED register_t __cdecl internal_6d574f0()
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
        je public_6d57533
        push esi
        public_6d57502 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call dword ptr ds : [public_6d64694]
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6d57502
        pop esi
        public_6d57533 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d574f0)
    }
}

#undef public_6d57502
#undef public_6d57533
