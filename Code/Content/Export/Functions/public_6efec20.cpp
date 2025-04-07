#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec20);

#define public_6efec33 _public_6efec33
#define public_6efec41 _public_6efec41
#define public_6efec48 _public_6efec48

PROC_DECLARE(0x6efec20, internal_6efec20, public_6efec20);
extern "C" NAKED register_t __cdecl internal_6efec20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx], 0
        mov edx, 0xBFF00000
        jne public_6efec33
        cmp dword ptr ds : [ecx+4], edx
        je public_6efec48
        public_6efec33 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ds : [eax], 0
        jne public_6efec41
        cmp dword ptr ds : [eax+4], edx
        je public_6efec48
        public_6efec41 : nop
        fld qword ptr ds : [ecx]
        fsub qword ptr ds : [eax]
        fabs 
        ret 
        public_6efec48 : nop
        fld qword ptr ds : [public_6fb78f0]
        ret 
        UNREACHABLE_TRAP(0x6efec20)
    }
}

#undef public_6efec33
#undef public_6efec41
#undef public_6efec48
