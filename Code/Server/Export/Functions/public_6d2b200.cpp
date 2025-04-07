#include "Server-PCH.h"


#define public_6d2b22a _public_6d2b22a
#define public_6d2b22c _public_6d2b22c
#define public_6d2b235 _public_6d2b235
#define public_6d2b241 _public_6d2b241

PROC_DECLARE(0x6d2b200, internal_6d2b200, public_6d2b200);
extern "C" NAKED register_t __cdecl internal_6d2b200()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d2b241
        cmp word ptr ds : [eax], 0xA
        je public_6d2b241
        mov ecx, dword ptr ds : [ecx+4]
        add eax, 2
        test ecx, ecx
        je public_6d2b235
        mov esi, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d2b22a : nop
        je public_6d2b241
        public_6d2b22c : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d2b235 : nop
        mov cl, byte ptr ds : [edx+0x1C]
        test cl, cl
        je public_6d2b22c
        cmp dword ptr ds : [edx+8], eax
        jmp public_6d2b22a
        public_6d2b241 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d2b200)
    }
}

#undef public_6d2b22a
#undef public_6d2b22c
#undef public_6d2b235
#undef public_6d2b241
