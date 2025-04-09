#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422fe0);

#define public_423027 _public_423027
#define public_423043 _public_423043
#define public_423057 _public_423057
#define public_423080 _public_423080
#define public_4230a8 _public_4230a8
#define public_4230b0 _public_4230b0

PROC_DECLARE(0x422fe0, internal_422fe0, public_422fe0);
extern "C" NAKED register_t __cdecl internal_422fe0()
{
    __asm
    {
        sub esp, 0x80C
        push esi
        mov esi, dword ptr ss : [esp+0x820]
        lea eax, ds:[esi-1]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x81C]
        xor eax, eax
        test edx, edx
        fdivr dword ptr ds : [public_5c8a5c]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x81C]
        fdivr qword ptr ds : [public_5c97f8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_5c7474]
        jle public_423043
        public_423027 : nop
        fld st(0)
        inc eax
        cmp eax, edx
        fcos 
        fstp dword ptr ss : [esp+eax*4+0xC]
        fld st(0)
        fsin 
        fstp dword ptr ss : [esp+eax*4+0x40C]
        fadd dword ptr ss : [esp+4]
        jl public_423027
        public_423043 : nop
        test esi, esi
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x814]
        fld dword ptr ds : [public_5c7474]
        jle public_4230b0
        push edi
        public_423057 : nop
        fld st(0)
        xor eax, eax
        test edx, edx
        fcos 
        fmul dword ptr ss : [esp+0x81C]
        fstp dword ptr ss : [esp+0x10]
        fld st(0)
        fsin 
        fmul dword ptr ss : [esp+0x81C]
        fstp dword ptr ss : [esp+8]
        jle public_4230a8
        nop 
        lea esp, ss:[esp]
        public_423080 : nop
        fld dword ptr ss : [esp+8]
        mov edi, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+eax*4+0x14]
        mov dword ptr ds : [ecx+4], edi
        add ecx, 0xC
        inc eax
        cmp eax, edx
        fstp dword ptr ds : [ecx-0xC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+eax*4+0x410]
        fstp dword ptr ds : [ecx-4]
        jl public_423080
        public_4230a8 : nop
        dec esi
        fadd dword ptr ss : [esp+0xC]
        jne public_423057
        pop edi
        public_4230b0 : nop
        fstp st(0)
        pop esi
        add esp, 0x80C
        ret 
        UNREACHABLE_TRAP(0x422fe0)
    }
}

#undef public_423027
#undef public_423043
#undef public_423057
#undef public_423080
#undef public_4230a8
#undef public_4230b0
