#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f35b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f98380);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f98390 _public_6f98390
#define public_6f983b7 _public_6f983b7
#define public_6f983bb _public_6f983bb
#define public_6f983c2 _public_6f983c2

PROC_DECLARE(0x6f98380, internal_6f98380, public_6f98380);
extern "C" NAKED register_t __cdecl internal_6f98380()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [public_6fd3cf0]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp], ecx
        nop 
        public_6f98390 : nop
        cmp ecx, edx
        je public_6f983bb
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6f983b7
        lea ecx, ss:[esp]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ds : [public_6fd3cf0]
        jmp public_6f98390
        public_6f983b7 : nop
        cmp ecx, edx
        jne public_6f983c2
        public_6f983bb : nop
        mov eax, dword ptr ds : [edx+0x10]
        add esp, 0xC
        ret 
        public_6f983c2 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+8], eax
        call public_6f00610
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x14]
        sub esi, eax
        fsub st, st(1)
        mov dword ptr ss : [esp+0x14], esi
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], eax
        fsub st, st(2)
        fdivp 
        fimul dword ptr ss : [esp+0x14]
        fiadd dword ptr ss : [esp+0xC]
        call public_6fa9130
        fstp st(0)
        push eax
        call public_6f35b50
        add esp, 4
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f98380)
    }
}

#undef public_6f98390
#undef public_6f983b7
#undef public_6f983bb
#undef public_6f983c2
