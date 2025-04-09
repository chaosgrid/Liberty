#include "FreeLancer-PCH.h"


#define public_50953b _public_50953b
#define public_50954f _public_50954f
#define public_5095ea _public_5095ea
#define public_5095ff _public_5095ff
#define public_509618 _public_509618
#define public_50963a _public_50963a

PROC_DECLARE(0x5094b0, internal_5094b0, public_5094b0);
extern "C" NAKED register_t __cdecl internal_5094b0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x254]
        push edi
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_50963a
        fld dword ptr ds : [esi+0x258]
        mov edi, dword ptr ds : [public_5c71dc]
        fcomp dword ptr ds : [public_5c7474]
        mov byte ptr ds : [esi+0x26C], 0
        fld dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [esi+0x258]
        fnstsw ax
        fst dword ptr ds : [esi+0x258]
        test ah, 0x41
        jne public_50953b
        fcomp dword ptr ds : [esi+0x254]
        mov byte ptr ds : [esi+0x26C], 1
        fnstsw ax
        test ah, 0x41
        jne public_50954f
        call edi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5db0b8]
        fsub qword ptr ds : [public_5d3c48]
        fmul dword ptr ds : [esi+0x250]
        fstp dword ptr ds : [esi+0x258]
        jmp public_50954f
        public_50953b : nop
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_50954f
        mov byte ptr ds : [esi+0x26C], 1
        public_50954f : nop
        mov al, byte ptr ds : [esi+0x26C]
        test al, al
        je public_50963a
        call edi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0xC]
        call edi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x268]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5caeec]
        fld st(0)
        fmul dword ptr ds : [esi+0x25C]
        fld st(1)
        fmul dword ptr ds : [esi+0x260]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ds : [esi+0x264]
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x2A0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x2A4]
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x2A8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_5095ea
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_5095ea : nop
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_5095ff
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_5095ff : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_509618
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_509618 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x20
        ret 4
        public_50963a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        add esi, 0x2A0
        mov edx, dword ptr ds : [esi]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x5094b0)
    }
}

#undef public_50953b
#undef public_50954f
#undef public_5095ea
#undef public_5095ff
#undef public_509618
#undef public_50963a
