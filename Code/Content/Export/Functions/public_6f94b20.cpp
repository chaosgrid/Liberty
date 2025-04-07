#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f94b20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f94b35 _public_6f94b35
#define public_6f94b47 _public_6f94b47

PROC_DECLARE(0x6f94b20, internal_6f94b20, public_6f94b20);
extern "C" NAKED register_t __cdecl internal_6f94b20()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x8C]
        mov esi, dword ptr ds : [edi+0x88]
        cmp esi, ebx
        je public_6f94b47
        public_6f94b35 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0xF0
        cmp esi, ebx
        jne public_6f94b35
        public_6f94b47 : nop
        mov ecx, dword ptr ds : [edi+0x88]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+0x88], 0
        mov dword ptr ds : [edi+0x8C], 0
        mov dword ptr ds : [edi+0x90], 0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f94b20)
    }
}

#undef public_6f94b35
#undef public_6f94b47
