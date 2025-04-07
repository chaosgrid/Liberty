#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345460);
CLANG_FORWARD_PROC_SYMBOL(public_634e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_634ffa0);
CLANG_FORWARD_PROC_SYMBOL(public_6352b90);

#define public_634546d _public_634546d
#define public_63454a2 _public_63454a2
#define public_63454ab _public_63454ab

PROC_DECLARE(0x6345460, internal_6345460, public_6345460);
extern "C" NAKED register_t __cdecl internal_6345460()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_63454ab
        push ebx
        push esi
        push edi
        public_634546d : nop
        movsx esi, word ptr ds : [eax+0x18]
        mov edi, dword ptr ds : [eax+8]
        add esi, eax
        mov ecx, esi
        call public_6352b90
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xC000
        cmp eax, 0x4000
        je public_63454a2
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ds : [ecx+0x10]
        push esi
        mov ecx, ebx
        call public_634ffa0
        push esi
        mov ecx, ebx
        call public_634e8a0
        public_63454a2 : nop
        test edi, edi
        mov eax, edi
        jne public_634546d
        pop edi
        pop esi
        pop ebx
        public_63454ab : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6345460)
    }
}

#undef public_634546d
#undef public_63454a2
#undef public_63454ab
