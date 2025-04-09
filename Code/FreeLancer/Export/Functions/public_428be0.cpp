#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428be0);

#define public_428bfe _public_428bfe
#define public_428c0e _public_428c0e
#define public_428c24 _public_428c24
#define public_428c26 _public_428c26
#define public_428c34 _public_428c34
#define public_428c42 _public_428c42

PROC_DECLARE(0x428be0, internal_428be0, public_428be0);
extern "C" NAKED register_t __cdecl internal_428be0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667cac]
        sub esp, 8
        cmp eax, 3
        jne public_428bfe
        mov eax, dword ptr ds : [public_6108dc]
        fld dword ptr ds : [public_6108d8]
        mov dword ptr ss : [esp], eax
        jmp public_428c0e
        public_428bfe : nop
        mov ecx, dword ptr ds : [public_6108e8]
        fld dword ptr ds : [public_6108e4]
        mov dword ptr ss : [esp], ecx
        public_428c0e : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov edx, dword ptr ds : [public_6108d0]
        mov dword ptr ss : [esp+4], edx
        je public_428c24
        fstp dword ptr ds : [eax]
        jmp public_428c26
        public_428c24 : nop
        fstp st(0)
        public_428c26 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_428c34
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], ecx
        public_428c34 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_428c42
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        public_428c42 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x428be0)
    }
}

#undef public_428bfe
#undef public_428c0e
#undef public_428c24
#undef public_428c26
#undef public_428c34
#undef public_428c42
