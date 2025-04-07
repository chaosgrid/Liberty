#include "RendComp-PCH.h"


#define public_6c2da20 _public_6c2da20
#define public_6c2da28 _public_6c2da28
#define public_6c2da31 _public_6c2da31

PROC_DECLARE(0x6c2da10, internal_6c2da10, public_6c2da10);
extern "C" NAKED register_t __cdecl internal_6c2da10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        test ch, 0x40
        jne public_6c2da20
        mov eax, 0x40
        public_6c2da20 : nop
        test ch, 0x10
        je public_6c2da28
        or eax, 2
        public_6c2da28 : nop
        test ch, ch
        jns public_6c2da31
        or eax, 0x80
        public_6c2da31 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [edx+0xC]
        test al, al
        setne al
        pop esi
        ret 0x1C
        UNREACHABLE_TRAP(0x6c2da10)
    }
}

#undef public_6c2da20
#undef public_6c2da28
#undef public_6c2da31
