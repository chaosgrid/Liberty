#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65de95d);

#define public_65de9a3 _public_65de9a3
#define public_65de9ab _public_65de9ab

PROC_DECLARE(0x65de95d, internal_65de95d, public_65de95d);
extern "C" NAKED register_t __cdecl internal_65de95d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        push esi
        push edi
        mov esi, dword ptr ds : [ecx*4+public_65e7940]
        lea ebx, ds : [ecx*4+public_65e7940]
        lea edi, ds:[eax+eax*8]
        shl edi, 2
        add esi, edi
        cmp dword ptr ds : [esi+8], 0
        jne public_65de9ab
        push 0x11
        call public_65dceab
        cmp dword ptr ds : [esi+8], 0
        pop ecx
        jne public_65de9a3
        lea eax, ds:[esi+0xC]
        push eax
        call dword ptr ds : [public_65e10dc]
        inc dword ptr ds : [esi+8]
        public_65de9a3 : nop
        push 0x11
        call public_65dcf0c
        pop ecx
        public_65de9ab : nop
        mov eax, dword ptr ds : [ebx]
        lea eax, ds:[eax+edi+0xC]
        push eax
        call dword ptr ds : [public_65e10e0]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65de95d)
    }
}

#undef public_65de9a3
#undef public_65de9ab
