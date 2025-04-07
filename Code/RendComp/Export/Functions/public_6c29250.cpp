#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c29250);

#define public_6c29267 _public_6c29267
#define public_6c29276 _public_6c29276
#define public_6c29285 _public_6c29285
#define public_6c29294 _public_6c29294
#define public_6c292a3 _public_6c292a3

PROC_DECLARE(0x6c29250, internal_6c29250, public_6c29250);
extern "C" NAKED register_t __cdecl internal_6c29250()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+8]
        test cl, 1
        mov eax, dword ptr ss : [esp+4]
        je public_6c29267
        mov edx, dword ptr ds : [eax+0x10]
        test edx, edx
        jne public_6c29267
        xor al, al
        ret 
        public_6c29267 : nop
        test cl, 8
        je public_6c29276
        mov edx, dword ptr ds : [eax+0x24]
        test edx, edx
        jne public_6c29276
        xor al, al
        ret 
        public_6c29276 : nop
        test cl, 2
        je public_6c29285
        mov edx, dword ptr ds : [eax+0x4C]
        test edx, edx
        jne public_6c29285
        xor al, al
        ret 
        public_6c29285 : nop
        test cl, 4
        je public_6c29294
        mov edx, dword ptr ds : [eax+0x60]
        test edx, edx
        jne public_6c29294
        xor al, al
        ret 
        public_6c29294 : nop
        test cl, 0x10
        je public_6c292a3
        mov ecx, dword ptr ds : [eax+0x38]
        test ecx, ecx
        jne public_6c292a3
        xor al, al
        ret 
        public_6c292a3 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6c29250)
    }
}

#undef public_6c29267
#undef public_6c29276
#undef public_6c29285
#undef public_6c29294
#undef public_6c292a3
