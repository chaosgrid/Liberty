#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f935a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f935b0 _public_6f935b0
#define public_6f935bf _public_6f935bf

PROC_DECLARE(0x6f935a0, internal_6f935a0, public_6f935a0);
extern "C" NAKED register_t __cdecl internal_6f935a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f935bf
        nop 
        public_6f935b0 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0x68
        cmp esi, ebx
        jne public_6f935b0
        public_6f935bf : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+0xC], 0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f935a0)
    }
}

#undef public_6f935b0
#undef public_6f935bf
