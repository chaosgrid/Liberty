#include "Freelancer-PCH.h"


#define public_566131 _public_566131
#define public_566135 _public_566135
#define public_566143 _public_566143
#define public_56615b _public_56615b
#define public_56615f _public_56615f
#define public_56616d _public_56616d

PROC_DECLARE(0x566110, internal_566110, public_566110);
extern "C" NAKED register_t __cdecl internal_566110()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x94]
        test al, al
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        je public_566135
        mov bl, byte ptr ds : [ecx+0x94]
        test bl, bl
        jne public_566131
        xor al, al
        pop ebx
        ret 
        public_566131 : nop
        test al, al
        jne public_566143
        public_566135 : nop
        mov al, byte ptr ds : [ecx+0x94]
        test al, al
        je public_566143
        mov al, 1
        pop ebx
        ret 
        public_566143 : nop
        mov al, byte ptr ds : [edx+0x96]
        test al, al
        je public_56615f
        mov bl, byte ptr ds : [ecx+0x96]
        test bl, bl
        jne public_56615b
        xor al, al
        pop ebx
        ret 
        public_56615b : nop
        test al, al
        jne public_56616d
        public_56615f : nop
        mov al, byte ptr ds : [ecx+0x96]
        test al, al
        je public_56616d
        mov al, 1
        pop ebx
        ret 
        public_56616d : nop
        cmp ecx, edx
        sbb eax, eax
        neg eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x566110)
    }
}

#undef public_566131
#undef public_566135
#undef public_566143
#undef public_56615b
#undef public_56615f
#undef public_56616d
