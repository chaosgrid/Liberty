#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f0d0);

#define public_6f4f0a1 _public_6f4f0a1
#define public_6f4f0b2 _public_6f4f0b2

PROC_DECLARE(0x6f4f090, internal_6f4f090, public_6f4f090);
extern "C" NAKED register_t __cdecl internal_6f4f090()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        jne public_6f4f0a1
        xor edx, edx
        jmp public_6f4f0b2
        public_6f4f0a1 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, 0x1F
        imul eax, ecx
        cdq 
        idiv edi
        pop edi
        public_6f4f0b2 : nop
        lea eax, ds:[edx+edx*2]
        mov edx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [edx+0x60]
        lea eax, ds:[edx+eax*4]
        push eax
        push ecx
        push esi
        call public_6f4f0d0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f090)
    }
}

#undef public_6f4f0a1
#undef public_6f4f0b2
