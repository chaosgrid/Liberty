#include "Common-PCH.h"


#define public_6271311 _public_6271311
#define public_6271324 _public_6271324
#define public_6271326 _public_6271326

PROC_DECLARE(0x6271300, internal_6271300, public_6271300);
extern "C" NAKED register_t __cdecl internal_6271300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        cmp ecx, esi
        push edi
        je public_6271326
        mov edi, dword ptr ss : [esp+0xC]
        public_6271311 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edx+0x54], edi
        je public_6271324
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6271311
        pop edi
        pop esi
        ret 4
        public_6271324 : nop
        mov eax, edx
        public_6271326 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6271300)
    }
}

#undef public_6271311
#undef public_6271324
#undef public_6271326
