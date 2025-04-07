#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312d80);

#define public_6312d90 _public_6312d90
#define public_6312dac _public_6312dac
#define public_6312db7 _public_6312db7
#define public_6312dbf _public_6312dbf

PROC_DECLARE(0x6312d80, internal_6312d80, public_6312d80);
extern "C" NAKED register_t __cdecl internal_6312d80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        push edi
        mov edi, 6
        je public_6312dbf
        lea ecx, ds:[ecx]
        public_6312d90 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6312dac
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6312db7
        public_6312dac : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6312d80
        add eax, 3
        public_6312db7 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6312d90
        public_6312dbf : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6312d80)
    }
}

#undef public_6312d90
#undef public_6312dac
#undef public_6312db7
#undef public_6312dbf
