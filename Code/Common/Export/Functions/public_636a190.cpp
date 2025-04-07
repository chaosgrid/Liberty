#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63556b0);
CLANG_FORWARD_PROC_SYMBOL(public_636a190);

#define public_636a1a1 _public_636a1a1
#define public_636a1b8 _public_636a1b8
#define public_636a1c7 _public_636a1c7
#define public_636a1d2 _public_636a1d2

PROC_DECLARE(0x636a190, internal_636a190, public_636a190);
extern "C" NAKED register_t __cdecl internal_636a190()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        mov edi, ecx
        je public_636a1d2
        mov ebx, dword ptr ss : [esp+0x10]
        public_636a1a1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_636a1c7
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_636a1b8
        push eax
        push ebx
        mov ecx, edi
        call public_636a190
        public_636a1b8 : nop
        mov esi, dword ptr ds : [esi+0x24]
        test esi, esi
        je public_636a1d2
        jne public_636a1a1
        pop edi
        pop esi
        pop ebx
        ret 8
        public_636a1c7 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        mov ecx, ebx
        call public_63556b0
        public_636a1d2 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x636a190)
    }
}

#undef public_636a1a1
#undef public_636a1b8
#undef public_636a1c7
#undef public_636a1d2
