#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68058a0);
CLANG_FORWARD_PROC_SYMBOL(public_68058e0);

#define public_68058b1 _public_68058b1
#define public_68058c2 _public_68058c2

PROC_DECLARE(0x68058a0, internal_68058a0, public_68058a0);
extern "C" NAKED register_t __cdecl internal_68058a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        jne public_68058b1
        xor edx, edx
        jmp public_68058c2
        public_68058b1 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, 0x1F
        imul eax, ecx
        cdq 
        idiv edi
        pop edi
        public_68058c2 : nop
        lea eax, ds:[edx+edx*2]
        mov edx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [edx+0x60]
        lea eax, ds:[edx+eax*4]
        push eax
        push ecx
        push esi
        call public_68058e0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68058a0)
    }
}

#undef public_68058b1
#undef public_68058c2
