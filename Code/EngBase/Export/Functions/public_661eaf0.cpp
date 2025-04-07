#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eaf0);

#define public_661eb0b _public_661eb0b
#define public_661eb1d _public_661eb1d

PROC_DECLARE(0x661eaf0, internal_661eaf0, public_661eaf0);
extern "C" NAKED register_t __cdecl internal_661eaf0()
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
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x14], ecx
        je public_661eb1d
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_661eb0b : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x3C]
        add esi, 0x48
        cmp esi, ebx
        jne public_661eb0b
        pop edi
        public_661eb1d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x661eaf0)
    }
}

#undef public_661eb0b
#undef public_661eb1d
