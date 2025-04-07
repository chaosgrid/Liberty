#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4118e0);

#define public_4118f4 _public_4118f4
#define public_4118fe _public_4118fe
#define public_411902 _public_411902
#define public_411907 _public_411907

PROC_DECLARE(0x4118e0, internal_4118e0, public_4118e0);
extern "C" NAKED register_t __cdecl internal_4118e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_411907
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_4118f4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_4118fe
        mov edx, dword ptr ds : [edx+8]
        jmp public_411902
        public_4118fe : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_411902 : nop
        cmp edx, ecx
        jne public_4118f4
        pop esi
        public_411907 : nop
        ret 4
        UNREACHABLE_TRAP(0x4118e0)
    }
}

#undef public_4118f4
#undef public_4118fe
#undef public_411902
#undef public_411907
