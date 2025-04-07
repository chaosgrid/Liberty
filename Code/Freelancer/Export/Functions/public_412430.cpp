#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412430);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);

#define public_41248c _public_41248c
#define public_41249d _public_41249d
#define public_4124e2 _public_4124e2
#define public_412502 _public_412502
#define public_4125c2 _public_4125c2

PROC_DECLARE(0x412430, internal_412430, public_412430);
extern "C" NAKED register_t __cdecl internal_412430()
{
    __asm
    {
        sub esp, 0x14
        fld dword ptr ds : [public_6105a8]
        mov eax, dword ptr ds : [public_6105a8]
        fcomp qword ptr ds : [public_5c8ba8]
        mov dword ptr ss : [esp+0xC], eax
        fnstsw ax
        test ah, 0x41
        jne public_4125c2
        call public_4225e0
        push 0xB4
/*FIXUP push offset public_5c8b74 @0x41245d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b74
        push 0
        call public_422610
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c8b70]
        add esp, 0xC
        push 0xBE2
        fnstsw ax
        test ah, 1
        jne public_41248c
        call public_421ed0
        add esp, 4
        jmp public_41249d
        public_41248c : nop
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        add esp, 0xC
        public_41249d : nop
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0
        call public_422190
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        test eax, eax
        je public_4124e2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], eax
        jmp public_412502
        public_4124e2 : nop
        mov edx, dword ptr ds : [public_610854]
        mov ecx, dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], edx
        public_412502 : nop
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_6164f4]
        mov dword ptr ss : [esp], ecx
        fsub dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [public_6164f8]
        push ebx
        push esi
        fstp dword ptr ss : [esp+0x18]
        push edi
        fild dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_6164f0]
        push ecx
        fadd dword ptr ds : [public_5c75e0]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x1C]
        fild dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x34]
        fild dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x24]
        call public_421bd0
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ss : [esp+0x30]
        push 0
        push esi
        push edi
        call public_421cc0
        push 0
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push esi
        call public_421cc0
        mov ebx, dword ptr ss : [esp+0x40]
        push 0
        push ebx
        push esi
        call public_421cc0
        push 0
        push ebx
        push edi
        call public_421cc0
        add esp, 0x44
        call public_421690
        push 0xB71
        call public_421dd0
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        mov dword ptr ss : [esp+4], 1
        jmp public_422190
        public_4125c2 : nop
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x412430)
    }
}

#undef public_41248c
#undef public_41249d
#undef public_4124e2
#undef public_412502
#undef public_4125c2
