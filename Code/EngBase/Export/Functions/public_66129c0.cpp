#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66129c0);

#define public_66129d1 _public_66129d1
#define public_66129e1 _public_66129e1

PROC_DECLARE(0x66129c0, internal_66129c0, public_66129c0);
extern "C" NAKED register_t __cdecl internal_66129c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        cmp esi, edi
        jae public_66129e1
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_66129d1 : nop
        mov ecx, dword ptr ds : [esi]
        push ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        add esi, 4
        cmp esi, edi
        jb public_66129d1
        pop ebx
        public_66129e1 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66129c0)
    }
}

#undef public_66129d1
#undef public_66129e1
