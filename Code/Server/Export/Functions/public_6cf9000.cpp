#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9037 _public_6cf9037
#define public_6cf9039 _public_6cf9039

PROC_DECLARE(0x6cf9000, internal_6cf9000, public_6cf9000);
extern "C" NAKED register_t __cdecl internal_6cf9000()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf9039
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9037
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        xor eax, eax
        pop esi
        ret 
        public_6cf9037 : nop
        mov eax, esi
        public_6cf9039 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9000)
    }
}

#undef public_6cf9037
#undef public_6cf9039
