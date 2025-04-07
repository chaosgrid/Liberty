#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eab0);

#define public_661eacb _public_661eacb
#define public_661eadd _public_661eadd

PROC_DECLARE(0x661eab0, internal_661eab0, public_661eab0);
extern "C" NAKED register_t __cdecl internal_661eab0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ebx, dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ss : [ebp+0x1C]
        inc ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x14], ecx
        je public_661eadd
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_661eacb : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x38]
        add esi, 0x48
        cmp esi, ebx
        jne public_661eacb
        pop edi
        public_661eadd : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x661eab0)
    }
}

#undef public_661eacb
#undef public_661eadd
