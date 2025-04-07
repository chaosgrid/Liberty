#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc88d);

#define public_65dc8b2 _public_65dc8b2
#define public_65dc8da _public_65dc8da

PROC_DECLARE(0x65dc88d, internal_65dc88d, public_65dc88d);
extern "C" NAKED register_t __cdecl internal_65dc88d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x8000
        push 0
        push dword ptr ds : [esi+0x10]
        call dword ptr ds : [public_65e10cc]
        cmp dword ptr ds : [public_65e55e8], esi
        jne public_65dc8b2
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_65e55e8], eax
        public_65dc8b2 : nop
        cmp esi, offset public_65e35c8
        je public_65dc8da
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push esi
        push 0
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1058]
        pop esi
        ret 
        public_65dc8da : nop
        or dword ptr ds : [public_65e35d8], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dc88d)
    }
}

#undef public_65dc8b2
#undef public_65dc8da
