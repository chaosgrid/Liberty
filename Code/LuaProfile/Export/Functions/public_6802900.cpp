#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802900);

#define public_6802925 _public_6802925
#define public_6802930 _public_6802930

PROC_DECLARE(0x6802900, internal_6802900, public_6802900);
extern "C" NAKED register_t __cdecl internal_6802900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, ecx
        sub edx, esi
        mov esi, dword ptr ss : [esp+8]
        sar edx, 4
        sub esi, edx
        test esi, esi
        jg public_6802925
        shl esi, 4
        add esi, ecx
        mov dword ptr ds : [eax], esi
        pop esi
        ret 
        public_6802925 : nop
        push esi
        call public_6802870
        add esp, 4
        lea ecx, ds:[esi]
        public_6802930 : nop
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], 0xFFFFFFFA
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        dec ecx
        mov dword ptr ds : [eax], edx
        jne public_6802930
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802900)
    }
}

#undef public_6802925
#undef public_6802930
