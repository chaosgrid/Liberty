#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26220);

#define public_6c26230 _public_6c26230
#define public_6c26240 _public_6c26240
#define public_6c2624c _public_6c2624c
#define public_6c26253 _public_6c26253

PROC_DECLARE(0x6c26220, internal_6c26220, public_6c26220);
extern "C" NAKED register_t __cdecl internal_6c26220()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0x14]
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        push edi
        xor edi, edi
        cmp esi, ebx
        je public_6c26253
        nop 
        public_6c26230 : nop
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx], 5
        jne public_6c26240
        mov eax, dword ptr ds : [ecx+0x1C]
        lea edi, ds:[edi+eax-2]
        jmp public_6c2624c
        public_6c26240 : nop
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [ecx+0x1C]
        shr edx, 1
        add edi, edx
        public_6c2624c : nop
        add esi, 4
        cmp esi, ebx
        jne public_6c26230
        public_6c26253 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c26220)
    }
}

#undef public_6c26230
#undef public_6c26240
#undef public_6c2624c
#undef public_6c26253
