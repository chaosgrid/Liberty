#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281680);
CLANG_FORWARD_PROC_SYMBOL(public_6345eb0);

#define public_62816c3 _public_62816c3
#define public_62816cd _public_62816cd

PROC_DECLARE(0x6281680, internal_6281680, public_6281680);
extern "C" NAKED register_t __cdecl internal_6281680()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62816cd
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_62816cd
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        jne public_62816cd
        mov edx, dword ptr ds : [ecx+0x78]
        and edx, 0x300
        cmp edx, 0x100
        jne public_62816cd
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_62816c3
        call public_6345eb0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        public_62816c3 : nop
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0xC]
        fstp dword ptr ds : [esi+0xC]
        public_62816cd : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6281680)
    }
}

#undef public_62816c3
#undef public_62816cd
