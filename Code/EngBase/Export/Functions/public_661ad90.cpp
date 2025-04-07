#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ad90);
CLANG_FORWARD_PROC_SYMBOL(public_661af70);

#define public_661adad _public_661adad

PROC_DECLARE(0x661ad90, internal_661ad90, public_661ad90);
extern "C" NAKED register_t __cdecl internal_661ad90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        call public_661af70
        mov bl, al
        test bl, bl
        je public_661adad
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_661adad : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x661ad90)
    }
}

#undef public_661adad
