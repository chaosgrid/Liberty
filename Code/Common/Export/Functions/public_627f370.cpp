#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627f370);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627f382 _public_627f382
#define public_627f3a9 _public_627f3a9

PROC_DECLARE(0x627f370, internal_627f370, public_627f370);
extern "C" NAKED register_t __cdecl internal_627f370()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_627f3a9
        public_627f382 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_627f370
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_627dbb0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_627f382
        public_627f3a9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627f370)
    }
}

#undef public_627f382
#undef public_627f3a9
