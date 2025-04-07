#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6329792 _public_6329792
#define public_632979f _public_632979f

PROC_DECLARE(0x6329780, internal_6329780, public_6329780);
extern "C" NAKED register_t __cdecl internal_6329780()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0xC]
        test al, al
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_6329792
        fiadd dword ptr ds : [esi+0x30]
        public_6329792 : nop
        mov al, byte ptr ds : [ecx+5]
        fld dword ptr ds : [ecx+8]
        test al, al
        je public_632979f
        fiadd dword ptr ds : [esi+0x2C]
        public_632979f : nop
        call public_6391dae
        mov dword ptr ds : [esi+0x2C], eax
        call public_6391dae
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329780)
    }
}

#undef public_6329792
#undef public_632979f
