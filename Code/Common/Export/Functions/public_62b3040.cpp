#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b3040);

#define public_62b3073 _public_62b3073
#define public_62b309b _public_62b309b
#define public_62b30a5 _public_62b30a5
#define public_62b30b9 _public_62b30b9
#define public_62b30dc _public_62b30dc

PROC_DECLARE(0x62b3040, internal_62b3040, public_62b3040);
extern "C" NAKED register_t __cdecl internal_62b3040()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        push edi
        mov edi, ecx
        push 0x1FF0000
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xC], 0
        call public_629b990
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0xE4]
        push eax
        mov ecx, esi
        call public_629b430
        test eax, eax
        je public_62b30b9
        public_62b3073 : nop
        cmp dword ptr ds : [eax+0x14], 0x10000
        jne public_62b309b
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx+0x5C]
        fadd dword ptr ss : [esp+8]
        jmp public_62b30a5
        public_62b309b : nop
        mov eax, dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+0x5C]
        public_62b30a5 : nop
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        call public_629b430
        test eax, eax
        jne public_62b3073
        public_62b30b9 : nop
        mov edx, dword ptr ds : [edi+0x88]
        fld dword ptr ds : [edx+0x100]
        pop edi
        fld dword ptr ss : [esp+4]
        pop esi
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_62b30dc
        fsub dword ptr ss : [esp]
        add esp, 0x1C
        ret 
        public_62b30dc : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62b3040)
    }
}

#undef public_62b3073
#undef public_62b309b
#undef public_62b30a5
#undef public_62b30b9
#undef public_62b30dc
