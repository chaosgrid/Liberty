#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63569e0);

#define public_63569f4 _public_63569f4
#define public_6356a01 _public_6356a01
#define public_6356a02 _public_6356a02
#define public_6356a26 _public_6356a26
#define public_6356a2b _public_6356a2b

PROC_DECLARE(0x63569e0, internal_63569e0, public_63569e0);
extern "C" NAKED register_t __cdecl internal_63569e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_63569f4
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        setne al
        pop esi
        ret 
        public_63569f4 : nop
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_6356a01
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6356a01 : nop
        push ebx
        public_6356a02 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6356a2b
        test cl, cl
        je public_6356a26
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6356a2b
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6356a02
        public_6356a26 : nop
        pop ebx
        xor eax, eax
        pop esi
        ret 
        public_6356a2b : nop
        sbb eax, eax
        pop ebx
        sbb eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63569e0)
    }
}

#undef public_63569f4
#undef public_6356a01
#undef public_6356a02
#undef public_6356a26
#undef public_6356a2b
