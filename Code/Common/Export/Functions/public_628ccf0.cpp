#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628ccf0);
CLANG_FORWARD_PROC_SYMBOL(public_628fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6346290);
CLANG_FORWARD_PROC_SYMBOL(public_6349a60);
CLANG_FORWARD_PROC_SYMBOL(public_634a990);
CLANG_FORWARD_PROC_SYMBOL(public_634d210);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_634d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_63934ac);

#define public_628cd33 _public_628cd33
#define public_628cd36 _public_628cd36
#define public_628cdd7 _public_628cdd7
#define public_628cee1 _public_628cee1
#define public_628cf28 _public_628cf28
#define public_628cf48 _public_628cf48
#define public_628cf4c _public_628cf4c
#define public_628cf51 _public_628cf51
#define public_628cf55 _public_628cf55
#define public_628cf5d _public_628cf5d
#define public_628cf6e _public_628cf6e
#define public_628cf99 _public_628cf99
#define public_628cf9d _public_628cf9d
#define public_628d036 _public_628d036
#define public_628d057 _public_628d057
#define public_628d162 _public_628d162

PROC_DECLARE(0x628ccf0, internal_628ccf0, public_628ccf0);
extern "C" NAKED register_t __cdecl internal_628ccf0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_63934ac @0x628ccf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63934ac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x211C
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ss : [esp+0x212C]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [eax+0x11C]
        xor ebx, ebx
        cmp cl, bl
        mov dword ptr ss : [esp+0x30], edi
        je public_628cd33
        add eax, 0x110
        jmp public_628cd36
        public_628cd33 : nop
        add eax, 0x2C
        public_628cd36 : nop
        fld dword ptr ds : [public_63fc0fc]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_639c13c]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x2140]
        fcomp dword ptr ss : [esp+0x2144]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        fnstsw ax
        test ah, 5
        jp public_628cdd7
        fld dword ptr ds : [public_63fc0fc]
        push ecx
        fadd dword ptr ss : [esp+0x2148]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x2148]
        fld dword ptr ds : [public_63fc0fc]
        fstp dword ptr ss : [esp]
        push esi
        push ecx
        call public_6288830
        push 0x3F000000
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_6288830
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6288800
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 0x24
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        public_628cdd7 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x2144]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x94], ecx
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        mov dword ptr ss : [esp+0x84], edx
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0xA4], ebx
        call public_636cf40
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x88], ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x90], edx
        mov dword ptr ss : [esp+0x94], eax
        call public_6349a60
        push 8
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x2138], ebx
        call public_634d210
/*FIXUP push offset _public_6261260 @0x628ce8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x100
        push 0x20
        lea edx, ss:[esp+0x138]
        push edx
        mov byte ptr ss : [esp+0x2144], 1
        call public_6273bc0
        mov dword ptr ss : [esp+0xCC], offset public_639c2c4
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x2138], 2
        call public_634a990
        cmp dword ptr ss : [esp+0x128], ebx
        jle public_628d162
        public_628cee1 : nop
        mov ecx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, ebx
        je public_628d162
        mov ebp, dword ptr ds : [eax+0xC]
        cmp ebp, ebx
        je public_628d162
        mov edi, dword ptr ss : [ebp+0x10]
        mov cl, byte ptr ds : [edi+0x84]
        cmp cl, bl
        lea eax, ds:[edi+0x84]
        je public_628cf55
        mov edx, dword ptr ss : [esp+0x213C]
        mov cl, byte ptr ds : [edx+0xF0]
        cmp cl, bl
        lea esi, ds:[edx+0xF0]
        je public_628cf55
        public_628cf28 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_628cf4c
        cmp cl, bl
        je public_628cf48
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_628cf4c
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_628cf28
        public_628cf48 : nop
        xor eax, eax
        jmp public_628cf51
        public_628cf4c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_628cf51 : nop
        cmp eax, ebx
        je public_628cf5d
        public_628cf55 : nop
        cmp dword ptr ds : [edi+0xA4], ebx
        jne public_628cf6e
        public_628cf5d : nop
        lea ecx, ss:[esp+0x118]
        call public_634d4f0
        jmp public_628cee1
        public_628cf6e : nop
        mov eax, dword ptr ss : [esp+0x11C]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0xA4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], edx
        je public_628cf99
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_628cf9d
        public_628cf99 : nop
        mov dword ptr ss : [esp+0x48], ebx
        public_628cf9d : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x8C]
        mov esi, dword ptr ss : [esp+0x213C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x28], eax
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x58], ebx
        call public_6288830
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_62887d0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        add esi, 0x2C
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [edi+0x40]
        add esp, 0x18
        cmp eax, ebx
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        jne public_628d036
        mov eax, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [eax+0x94]
        push edi
        mov ecx, eax
        call public_634d530
        mov dword ptr ds : [edi+0x40], eax
        public_628d036 : nop
        mov eax, dword ptr ds : [edi+0x40]
        inc dword ptr ds : [eax+4]
        cmp byte ptr ds : [edi+0x78], 8
        jge public_628d057
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [eax+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_628d057
        call public_634d640
        public_628d057 : nop
        mov esi, dword ptr ds : [edi+0x40]
        lea ecx, ss:[esp+0x9C]
        push ecx
        push ebp
        mov ecx, esi
        call public_634d9d0
        mov ecx, dword ptr ds : [esi+4]
        dec ecx
        mov dword ptr ds : [esi+4], ecx
        fld dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x5C], edx
        fstp dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x64], ecx
        fstp dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [edx+0x54]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x98]
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0xC0]
        push eax
        call public_6346290
        mov ecx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x213C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x54]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x6C], edx
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x40]
        push edx
        add ecx, 0x1C
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_628fa40
        public_628d162 : nop
        mov dword ptr ss : [esp+0xCC], offset public_639c2c4
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x2134], 3
        call public_634d260
        mov ecx, dword ptr ss : [esp+0x212C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2128
        ret 0xC
        UNREACHABLE_TRAP(0x628ccf0)
    }
}

#undef public_628cd33
#undef public_628cd36
#undef public_628cdd7
#undef public_628cee1
#undef public_628cf28
#undef public_628cf48
#undef public_628cf4c
#undef public_628cf51
#undef public_628cf55
#undef public_628cf5d
#undef public_628cf6e
#undef public_628cf99
#undef public_628cf9d
#undef public_628d036
#undef public_628d057
#undef public_628d162
