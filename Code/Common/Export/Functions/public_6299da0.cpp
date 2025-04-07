#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6299de0 _public_6299de0
#define public_6299df0 _public_6299df0
#define public_6299e00 _public_6299e00
#define public_6299e5b _public_6299e5b
#define public_6299edb _public_6299edb
#define public_6299f0b _public_6299f0b

PROC_DECLARE(0x6299da0, internal_6299da0, public_6299da0);
extern "C" NAKED register_t __cdecl internal_6299da0()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x54]
        lea ebx, ds:[esi+0x54]
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+8], eax
        je public_6299df0
        mov ecx, ebx
        lea esp, ss:[esp]
        public_6299de0 : nop
        mov edx, dword ptr ds : [ecx+0x34]
        add ecx, 0x34
        inc eax
        cmp edx, 0xFFFFFFFF
        jne public_6299de0
        mov dword ptr ss : [esp+8], eax
        public_6299df0 : nop
        test eax, eax
        jle public_6299f0b
        push ebp
        push edi
        mov ebp, eax
        lea esp, ss:[esp]
        public_6299e00 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299edb
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc194]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        jne public_6299e5b
        call public_6391cf0
        mov dword ptr ds : [public_63fc194], eax
        public_6299e5b : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+4]
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x5C]
        push edx
        mov ecx, 9
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x54]
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_628b030
        sub esp, 0xC
        fld dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x48]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        public_6299edb : nop
        fld dword ptr ss : [esp+0x24]
        add ebx, 0x34
        dec ebp
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        jne public_6299e00
        pop edi
        pop ebp
        public_6299f0b : nop
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x8C]
        mov edx, eax
        pop esi
        fdivr dword ptr ds : [public_639a1d0]
        pop ebx
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], ecx
        fstp st(0)
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x6299da0)
    }
}

#undef public_6299de0
#undef public_6299df0
#undef public_6299e00
#undef public_6299e5b
#undef public_6299edb
#undef public_6299f0b
