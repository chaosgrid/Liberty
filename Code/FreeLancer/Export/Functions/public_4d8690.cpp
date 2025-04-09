#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_54bd40);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);

#define public_4d8767 _public_4d8767
#define public_4d87ac _public_4d87ac
#define public_4d8843 _public_4d8843
#define public_4d8888 _public_4d8888
#define public_4d88d9 _public_4d88d9
#define public_4d88e0 _public_4d88e0

PROC_DECLARE(0x4d8690, internal_4d8690, public_4d8690);
extern "C" NAKED register_t __cdecl internal_4d8690()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call public_54bd40
        test al, al
        jne public_4d88e0
/*FIXUP push offset public_5d8444 @0x4d86a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8444
        call public_5b36b0
        fld dword ptr ds : [eax+0x14]
        fcomp qword ptr ds : [public_5c8b68]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_4d88d9
        mov ecx, dword ptr ds : [ebx+0x380]
        add ecx, 0x80
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_420d60
        test al, al
        je public_4d8767
        mov edx, dword ptr ds : [ebx+0x380]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x18]
        rep movsd
        jmp public_4d87ac
        public_4d8767 : nop
        mov eax, dword ptr ds : [ebx+0x380]
        fld dword ptr ds : [eax+0x60]
        fadd dword ptr ds : [eax+0xA8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0x64]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x44], edx
        public_4d87ac : nop
        mov eax, dword ptr ds : [ebx+0x380]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+0xC0]
        add eax, 0xC0
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+0xC]
        push eax
        fstp dword ptr ss : [esp+0x48]
        call public_59da70
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[ebx+0x398]
        call public_5a1130
        test al, al
        jne public_4d88d9
        mov ecx, dword ptr ds : [ebx+0x384]
        add ecx, 0x80
        call public_420d60
        test al, al
        je public_4d8843
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x384]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x18]
        rep movsd
        jmp public_4d8888
        public_4d8843 : nop
        mov eax, dword ptr ds : [ebx+0x384]
        fld dword ptr ds : [eax+0x60]
        fadd dword ptr ds : [eax+0xA8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0x64]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x44], edx
        public_4d8888 : nop
        mov eax, dword ptr ds : [ebx+0x384]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+0xC0]
        add eax, 0xC0
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+0xC]
        push eax
        fstp dword ptr ss : [esp+0x48]
        call public_59da70
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[ebx+0x3A4]
        call public_5a1130
        test al, al
        je public_4d88e0
        public_4d88d9 : nop
        mov ecx, ebx
        call public_5a0760
        public_4d88e0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x4d8690)
    }
}

#undef public_4d8767
#undef public_4d87ac
#undef public_4d8843
#undef public_4d8888
#undef public_4d88d9
#undef public_4d88e0
