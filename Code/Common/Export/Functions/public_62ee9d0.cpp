#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);

#define public_62eea1d _public_62eea1d
#define public_62eea32 _public_62eea32
#define public_62eeb14 _public_62eeb14
#define public_62eeb41 _public_62eeb41
#define public_62eeb47 _public_62eeb47
#define public_62eeb63 _public_62eeb63

PROC_DECLARE(0x62ee9d0, internal_62ee9d0, public_62ee9d0);
extern "C" NAKED register_t __cdecl internal_62ee9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [public_639c39c]
        sub esp, 0x30
        cmp eax, 0x80
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        push esi
        mov ebp, ecx
        jne public_62eeb47
        mov esi, dword ptr ss : [ebp+4]
        fstp st(0)
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62eea1d
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62eea1d : nop
        mov eax, dword ptr ss : [ebp+4]
        xor ecx, ecx
        add eax, 8
        mov dword ptr ss : [esp+0x44], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62eea32
        lea ecx, ds:[eax-8]
        public_62eea32 : nop
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x48]
        push edx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        mov edi, ecx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+0x18]
        lea eax, ss:[esp+0x34]
        push edi
        push eax
        call public_62e60e0
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        push ecx
        fsub dword ptr ds : [esi+0x10]
        lea edx, ss:[esp+0x40]
        push edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        call public_62e1630
        fcomp dword ptr ds : [public_6399408]
        add esp, 0x10
        pop edi
        fnstsw ax
        test ah, 5
        jp public_62eeb41
        mov esi, dword ptr ss : [ebp+4]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62eeb14
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62eeb14 : nop
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        jmp public_62eeb47
        public_62eeb41 : nop
        fld dword ptr ds : [public_639c39c]
        public_62eeb47 : nop
        fcom dword ptr ss : [ebp+0x10]
        fnstsw ax
        xor al, al
        test ah, 5
        jp public_62eeb63
        pop esi
        fstp dword ptr ss : [ebp+0x10]
        mov word ptr ss : [ebp+0x14], bx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_62eeb63 : nop
        pop esi
        fstp st(0)
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x62ee9d0)
    }
}

#undef public_62eea1d
#undef public_62eea32
#undef public_62eeb14
#undef public_62eeb41
#undef public_62eeb47
#undef public_62eeb63
