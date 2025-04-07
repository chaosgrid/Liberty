#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a52a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);

#define public_62a52b0 _public_62a52b0
#define public_62a52de _public_62a52de
#define public_62a52e5 _public_62a52e5
#define public_62a52f6 _public_62a52f6

PROC_DECLARE(0x62a52a0, internal_62a52a0, public_62a52a0);
extern "C" NAKED register_t __cdecl internal_62a52a0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+4], eax
        je public_62a52f6
        nop 
        public_62a52b0 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        test ecx, ecx
        jne public_62a52e5
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_639dfd4]
        fnstsw ax
        test ah, 0x41
        jne public_62a52de
        mov dword ptr ds : [ecx+0x50], 3
        jmp public_62a52e5
        public_62a52de : nop
        mov dword ptr ds : [ecx+0x50], 2
        public_62a52e5 : nop
        lea ecx, ss:[esp+4]
        call public_62a72a0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, esi
        jne public_62a52b0
        public_62a52f6 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a52a0)
    }
}

#undef public_62a52b0
#undef public_62a52de
#undef public_62a52e5
#undef public_62a52f6
