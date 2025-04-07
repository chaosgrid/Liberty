#include "Common-PCH.h"


#define public_62c1018 _public_62c1018
#define public_62c1024 _public_62c1024
#define public_62c1038 _public_62c1038

PROC_DECLARE(0x62c0fe0, internal_62c0fe0, public_62c0fe0);
extern "C" NAKED register_t __cdecl internal_62c0fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62c1038
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_62c1038
        mov cl, byte ptr ds : [eax+0xE0]
        test cl, cl
        jns public_62c1038
        mov cl, byte ptr ss : [esp+8]
        test cl, cl
        je public_62c1018
        mov edx, dword ptr ds : [eax+0x1DC]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        jmp public_62c1024
        public_62c1018 : nop
        mov ecx, dword ptr ds : [eax+0x1D8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        public_62c1024 : nop
        mov eax, dword ptr ds : [eax]
        and eax, 0x3FFFFFFF
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 8
        public_62c1038 : nop
        mov eax, 0xFFFFFFFC
        ret 8
        UNREACHABLE_TRAP(0x62c0fe0)
    }
}

#undef public_62c1018
#undef public_62c1024
#undef public_62c1038
