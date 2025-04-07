#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_63455c0);
CLANG_FORWARD_PROC_SYMBOL(public_6356910);

#define public_63455c7 _public_63455c7
#define public_63455e4 _public_63455e4
#define public_63455e8 _public_63455e8
#define public_63455f1 _public_63455f1
#define public_6345609 _public_6345609

PROC_DECLARE(0x63455c0, internal_63455c0, public_63455c0);
extern "C" NAKED register_t __cdecl internal_63455c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        public_63455c7 : nop
        mov esi, dword ptr ds : [edi+0x7C]
        test esi, esi
        je public_63455e8
        push edi
        mov ecx, esi
        call public_6356910
        cmp esi, ebx
        jne public_63455e4
        mov dword ptr ds : [0], 0
        public_63455e4 : nop
        mov ebx, esi
        jmp public_63455c7
        public_63455e8 : nop
        push 1
        mov ecx, edi
        call public_6345550
        public_63455f1 : nop
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        je public_6345609
        movsx ecx, word ptr ds : [eax+0x18]
        add ecx, eax
        je public_63455f1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        jmp public_63455f1
        public_6345609 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63455c0)
    }
}

#undef public_63455c7
#undef public_63455e4
#undef public_63455e8
#undef public_63455f1
#undef public_6345609
