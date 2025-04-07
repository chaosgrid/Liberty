#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629af40);

#define public_629af5a _public_629af5a
#define public_629af68 _public_629af68

PROC_DECLARE(0x629af40, internal_629af40, public_629af40);
extern "C" NAKED register_t __cdecl internal_629af40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        push edi
        movzx edi, word ptr ds : [esi+8]
        mov byte ptr ds : [esi+0x11], 1
        je public_629af5a
        mov eax, dword ptr ds : [ecx]
        push edi
        push 0xA
        call dword ptr ds : [eax]
        public_629af5a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_629af68
        mov edx, dword ptr ds : [ecx]
        push edi
        push 0xA
        call dword ptr ds : [edx]
        public_629af68 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629af40)
    }
}

#undef public_629af5a
#undef public_629af68
