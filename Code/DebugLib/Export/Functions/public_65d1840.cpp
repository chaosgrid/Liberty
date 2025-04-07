#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d189f _public_65d189f
#define public_65d18a9 _public_65d18a9

PROC_DECLARE(0x65d1840, internal_65d1840, public_65d1840);
extern "C" NAKED register_t __cdecl internal_65d1840()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        je public_65d18a9
        mov eax, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d189f
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        push ebx
        lea ebx, ds:[esi+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov ecx, ebx
        call public_65d2630
        push esi
        call public_65d6cb8
        mov eax, dword ptr ds : [edi+0x24]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x24], eax
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_65d189f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 0
        public_65d18a9 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65d1840)
    }
}

#undef public_65d189f
#undef public_65d18a9
