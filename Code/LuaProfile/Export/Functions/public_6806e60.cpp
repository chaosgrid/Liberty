#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806e60);

#define public_6806e77 _public_6806e77
#define public_6806e8d _public_6806e8d

PROC_DECLARE(0x6806e60, internal_6806e60, public_6806e60);
extern "C" NAKED register_t __cdecl internal_6806e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        cmp dword ptr ds : [eax+0x1C], 0xFFFFFFFF
        je public_6806e8d
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6806e8d
        push esi
        push edi
        public_6806e77 : nop
        mov edx, dword ptr ds : [eax+0x1C]
        mov esi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [eax+0x20]
        sub edx, ecx
        dec ecx
        mov dword ptr ds : [esi+edx*8+4], edi
        jne public_6806e77
        pop edi
        pop esi
        public_6806e8d : nop
        ret 
        UNREACHABLE_TRAP(0x6806e60)
    }
}

#undef public_6806e77
#undef public_6806e8d
