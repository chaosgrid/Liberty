#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);

#define public_62b5e34 _public_62b5e34
#define public_62b5e36 _public_62b5e36
#define public_62b5e4e _public_62b5e4e

PROC_DECLARE(0x62b5e00, internal_62b5e00, public_62b5e00);
extern "C" NAKED register_t __cdecl internal_62b5e00()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xA4]
        test ecx, ecx
        mov dword ptr ss : [esp+4], 0
        je public_62b5e36
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62b5e34
        fmul dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp+4]
        jmp public_62b5e36
        public_62b5e34 : nop
        fstp st(0)
        public_62b5e36 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 5
        jp public_62b5e4e
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        public_62b5e4e : nop
        fld qword ptr ds : [public_6399410]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62b5e00)
    }
}

#undef public_62b5e34
#undef public_62b5e36
#undef public_62b5e4e
