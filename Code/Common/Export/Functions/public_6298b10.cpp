#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298b10);
CLANG_FORWARD_PROC_SYMBOL(public_6298f40);

#define public_6298bab _public_6298bab
#define public_6298bad _public_6298bad
#define public_6298bd3 _public_6298bd3
#define public_6298bd5 _public_6298bd5
#define public_6298bf3 _public_6298bf3
#define public_6298c23 _public_6298c23
#define public_6298c35 _public_6298c35
#define public_6298c37 _public_6298c37
#define public_6298c67 _public_6298c67
#define public_6298c69 _public_6298c69
#define public_6298c87 _public_6298c87
#define public_6298d1f _public_6298d1f
#define public_6298d99 _public_6298d99
#define public_6298dbb _public_6298dbb
#define public_6298e3e _public_6298e3e
#define public_6298e5f _public_6298e5f

PROC_DECLARE(0x6298b10, internal_6298b10, public_6298b10);
extern "C" NAKED register_t __cdecl internal_6298b10()
{
    __asm
    {
        sub esp, 0x50
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298e5f
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6298e5f
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6298e5f
        mov cx, word ptr ds : [esi+0x258]
        cmp cx, word ptr ds : [public_63a4aa4]
        je public_6298c23
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298c23
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6298c23
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6298c23
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        push edi
        je public_6298bab
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6298bab
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6298bab
        mov edi, eax
        jmp public_6298bad
        public_6298bab : nop
        xor edi, edi
        public_6298bad : nop
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0xE0]
        test al, al
        jne public_6298bf3
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298bd3
        lea ecx, ds:[eax-0x9C]
        jmp public_6298bd5
        public_6298bd3 : nop
        xor ecx, ecx
        public_6298bd5 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        public_6298bf3 : nop
        mov edx, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x258]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0xDC]
        test al, al
        pop edi
        jne public_6298c87
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298c67
        lea ecx, ds:[eax-0x9C]
        jmp public_6298c69
        public_6298c23 : nop
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298c35
        lea ecx, ds:[eax-0x9C]
        jmp public_6298c37
        public_6298c35 : nop
        xor ecx, ecx
        public_6298c37 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x3C]
        push eax
        call dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x250]
        test eax, eax
        je public_6298c67
        lea ecx, ds:[eax-0x9C]
        jmp public_6298c69
        public_6298c67 : nop
        xor ecx, ecx
        public_6298c69 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x3C]
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        public_6298c87 : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x54]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        fld dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6298d1f
        fsub dword ptr ds : [eax+0x2C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x30], edx
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x2C], ecx
        jmp public_6298d99
        public_6298d1f : nop
        mov ecx, dword ptr ds : [esi+4]
        fsub dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [ecx+0x30]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [ecx+0x34]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x48]
        push edx
        call dword ptr ds : [eax+0x54]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x2C], edx
        public_6298d99 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0x94]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [edx+0x90]
        test eax, eax
        mov dword ptr ss : [esp+8], ecx
        je public_6298dbb
        mov dword ptr ss : [esp+8], 0x4E6E6B28
        public_6298dbb : nop
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call public_6298f40
        add esp, 0x10
        test al, al
        je public_6298e3e
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+4]
        pop esi
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp]
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov al, 1
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x50
        ret 4
        public_6298e3e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        pop esi
        add esp, 0x50
        ret 4
        public_6298e5f : nop
        xor al, al
        pop esi
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x6298b10)
    }
}

#undef public_6298bab
#undef public_6298bad
#undef public_6298bd3
#undef public_6298bd5
#undef public_6298bf3
#undef public_6298c23
#undef public_6298c35
#undef public_6298c37
#undef public_6298c67
#undef public_6298c69
#undef public_6298c87
#undef public_6298d1f
#undef public_6298d99
#undef public_6298dbb
#undef public_6298e3e
#undef public_6298e5f
