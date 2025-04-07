#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c2f0);

#define public_6f4c315 _public_6f4c315
#define public_6f4c320 _public_6f4c320

PROC_DECLARE(0x6f4c2f0, internal_6f4c2f0, public_6f4c2f0);
extern "C" NAKED register_t __cdecl internal_6f4c2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, ecx
        sub edx, esi
        mov esi, dword ptr ss : [esp+8]
        sar edx, 4
        sub esi, edx
        test esi, esi
        jg public_6f4c315
        shl esi, 4
        add esi, ecx
        mov dword ptr ds : [eax], esi
        pop esi
        ret 
        public_6f4c315 : nop
        push esi
        call public_6f4c260
        add esp, 4
        lea ecx, ds:[esi]
        public_6f4c320 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], 0xFFFFFFFA
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        dec ecx
        mov dword ptr ds : [eax], edx
        jne public_6f4c320
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4c2f0)
    }
}

#undef public_6f4c315
#undef public_6f4c320
