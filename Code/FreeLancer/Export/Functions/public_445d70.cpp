#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_445d80 _public_445d80
#define public_445d8b _public_445d8b
#define public_445d92 _public_445d92

PROC_DECLARE(0x445d70, internal_445d70, public_445d70);
extern "C" NAKED register_t __cdecl internal_445d70()
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
        je public_445d92
        nop 
        public_445d80 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_445d8b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_445d8b : nop
        add esi, 8
        cmp esi, ebx
        jne public_445d80
        public_445d92 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+0xC], 0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x445d70)
    }
}

#undef public_445d80
#undef public_445d8b
#undef public_445d92
