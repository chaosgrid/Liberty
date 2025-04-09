#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428c50);

#define public_428c90 _public_428c90
#define public_428c94 _public_428c94
#define public_428cbd _public_428cbd
#define public_428cd0 _public_428cd0
#define public_428cfb _public_428cfb

PROC_DECLARE(0x428c50, internal_428c50, public_428c50);
extern "C" NAKED register_t __cdecl internal_428c50()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [public_667cb0]
        test edx, edx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+4], eax
        mov esi, edx
        je public_428cfb
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_667cac]
        fcomp qword ptr ds : [public_5ca158]
        fnstsw ax
        test ah, 0x41
        jne public_428c94
        cmp ecx, 3
        mov eax, dword ptr ds : [public_6108d8]
        je public_428c90
        mov eax, dword ptr ds : [public_6108e4]
        public_428c90 : nop
        mov dword ptr ss : [esp+4], eax
        public_428c94 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5ca158]
        fnstsw ax
        test ah, 0x41
        jne public_428cd0
        cmp ecx, 3
        jne public_428cbd
        fld dword ptr ds : [public_6108dc]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x34], ecx
        pop esi
        pop ecx
        ret 
        public_428cbd : nop
        fld dword ptr ds : [public_6108e8]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x34], ecx
        pop esi
        pop ecx
        ret 
        public_428cd0 : nop
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x34], ecx
        fdiv dword ptr ss : [esp+0x14]
        fabs 
        fstp dword ptr ds : [esi+0x38]
        public_428cfb : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x428c50)
    }
}

#undef public_428c90
#undef public_428c94
#undef public_428cbd
#undef public_428cd0
#undef public_428cfb
