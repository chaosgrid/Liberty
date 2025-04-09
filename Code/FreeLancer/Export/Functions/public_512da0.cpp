#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423be0);
CLANG_FORWARD_PROC_SYMBOL(public_53ebe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_512dcd _public_512dcd
#define public_512e80 _public_512e80
#define public_51308c _public_51308c
#define public_513095 _public_513095
#define public_5130ea _public_5130ea
#define public_513227 _public_513227
#define public_513265 _public_513265
#define public_513350 _public_513350
#define public_513360 _public_513360
#define public_513375 _public_513375

PROC_DECLARE(0x512da0, internal_512da0, public_512da0);
extern "C" NAKED register_t __cdecl internal_512da0()
{
    __asm
    {
        sub esp, 0x12C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x8C], edi
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_512dcd
        pop edi
        pop esi
        add esp, 0x12C
        ret 4
        public_512dcd : nop
        push ebx
        push ebp
        lea eax, ss:[esp+0x50]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6610]
        lea ecx, ds:[esi+0x70]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xDC], edx
        mov edx, dword ptr ds : [esi+0x7C]
        mov esi, dword ptr ss : [esp+0x140]
        mov dword ptr ss : [esp+0xE4], ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xE0], eax
        mov dword ptr ss : [esp+0xEC], 0x3E4CCCCD
        mov eax, dword ptr ds : [edx]
        push esi
        mov dword ptr ss : [esp+0xAC], eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xD0], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xD4], ecx
        mov edx, dword ptr ds : [eax+8]
        push 0
        mov dword ptr ss : [esp+0xDC], edx
        mov dword ptr ss : [esp+0xF4], 0x3F800000
        call public_422190
        push 0xB44
        call public_421ed0
        push esi
        call public_422950
        mov ebx, dword ptr ds : [edi+0x54]
        mov eax, dword ptr ds : [edi+0x58]
        add esp, 0xC
        cmp ebx, eax
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x84], ebx
        je public_513375
        nop 
        public_512e80 : nop
        cmp dword ptr ss : [esp+0x5C], 0xA
        jg public_513375
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_513360
        add esi, 0xFFFFFF64
        test esi, esi
        je public_513360
        lea eax, ss:[esp+0x88]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c660c]
        fld dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x58]
        sub esp, 0xC
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x98]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        faddp 
        lea ecx, ds:[esi+0x2C]
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [ecx]
        fmul dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], ecx
        faddp 
        sub esp, 0xC
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], edx
        fsqrt 
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x80]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x80]
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x10C]
        fld dword ptr ss : [esp+0x20]
        push eax
        fmul dword ptr ss : [esp+0x24]
        mov ecx, esi
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [edx+0x64]
        fmul qword ptr ds : [public_5cf100]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x30], ecx
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], edx
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5130ea
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_51308c
        fsqrt 
        fdivr dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x80]
        jmp public_513095
        public_51308c : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x80]
        public_513095 : nop
        fadd dword ptr ss : [esp+0x58]
        sub esp, 0xC
        lea ecx, ss:[esp+0x100]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0xF4]
        mov edx, dword ptr ss : [esp+0xF8]
        mov eax, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        public_5130ea : nop
        push 0x3F000000
        call public_53ebe0
        fstp dword ptr ss : [esp+0x40]
        push 0x3F000000
        call public_53ebe0
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x58]
        fadd st, st(1)
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x38]
        mov esi, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0xB4], edx
        lea edx, ss:[esp+0xAC]
        push edx
        fstp dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xBC], eax
        mov dword ptr ss : [esp+0xC0], ecx
        mov dword ptr ss : [esp+0xC4], esi
        mov dword ptr ss : [esp+0xC8], edi
        mov dword ptr ss : [esp+0xCC], ebp
        mov dword ptr ss : [esp+0xF4], 0x40A00000
        mov byte ptr ss : [esp+0xB0], 0
        call public_423be0
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_513350
        fld dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        fdiv dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        fmul qword ptr ds : [public_5db708]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_5c6280]
        fld dword ptr ss : [esp+0x74]
        add esp, 8
        fmul dword ptr ds : [public_5d3e08]
        mov ebx, 5
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_5d3e08]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [public_5d3e08]
        fstp dword ptr ss : [esp+0x108]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x108]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fld st(0)
        fsin 
        fstp qword ptr ss : [esp+0x3C]
        fcos 
        fstp dword ptr ss : [esp+0x14]
        public_513227 : nop
        push 0x40C90FDB
        call public_53ebe0
        fld st(0)
        fcos 
        mov eax, dword ptr ds : [public_6751b0]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x4C], edx
        fmul qword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x44]
        fsin 
        fmul qword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x48]
        jne public_513265
        call public_5b73e0
        mov dword ptr ds : [public_6751b0], eax
        public_513265 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x11C]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x98]
        fadd dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x44], eax
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x48], ecx
        fadd dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0xB8], eax
        mov eax, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0xC4], eax
        mov dword ptr ss : [esp+0xBC], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0xC0], edx
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0xA4]
        push eax
        mov dword ptr ss : [esp+0xB0], esi
        mov dword ptr ss : [esp+0xB4], edi
        mov dword ptr ss : [esp+0xB8], ebp
        mov dword ptr ss : [esp+0xEC], 0x3F800000
        mov byte ptr ss : [esp+0xA8], 1
        mov dword ptr ss : [esp+0xCC], ecx
        mov dword ptr ss : [esp+0xD0], edx
        call public_423be0
        add esp, 4
        dec ebx
        jne public_513227
        mov ebx, dword ptr ss : [esp+0x84]
        public_513350 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ss : [esp+0x94]
        inc eax
        mov dword ptr ss : [esp+0x5C], eax
        public_513360 : nop
        mov eax, dword ptr ds : [edi+0x58]
        add ebx, 0x24
        cmp ebx, eax
        mov dword ptr ss : [esp+0x84], ebx
        jne public_512e80
        public_513375 : nop
        push 1
        call public_422190
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421ed0
        add esp, 0xC
        pop ebp
        pop ebx
        pop edi
        mov al, 1
        pop esi
        add esp, 0x12C
        ret 4
        UNREACHABLE_TRAP(0x512da0)
    }
}

#undef public_512dcd
#undef public_512e80
#undef public_51308c
#undef public_513095
#undef public_5130ea
#undef public_513227
#undef public_513265
#undef public_513350
#undef public_513360
#undef public_513375
