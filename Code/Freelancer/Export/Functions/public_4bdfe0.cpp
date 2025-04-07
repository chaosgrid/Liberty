#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_414570);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4be20e _public_4be20e
#define public_4be275 _public_4be275

PROC_DECLARE(0x4bdfe0, internal_4bdfe0, public_4bdfe0);
extern "C" NAKED register_t __cdecl internal_4bdfe0()
{
    __asm
    {
        sub esp, 0x44
        push esi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4be275
        push 0x13
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4be275
        test byte ptr ds : [esi+0x6C], 2
        je public_4be275
        call public_41a3e0
        test al, al
        jne public_4be275
        push ebx
        push edi
        call public_45a9f0
        xor ebx, ebx
        push ebx
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 0xC
        lea edi, ds:[esi+0x7C]
        push eax
        push 0x3EB33333
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], edi
        call public_4145d0
        fld dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [esi+0xB4]
        fchs 
        lea edx, ss:[esp+0x30]
        fstp dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [esi+0xC4], ecx
        push edx
        mov ecx, edi
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        call public_414570
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        fild qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ebx
        fstp dword ptr ds : [esi+0xB4]
        lea edx, ds:[esi+0x60]
        fild qword ptr ss : [esp+0x28]
        push edx
        fstp dword ptr ds : [esi+0xB8]
        call public_417730
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ds : [esi+0xE1]
        add esp, 4
        test al, al
        mov dword ptr ss : [esp+0x2C], edx
        je public_4be20e
        fld dword ptr ss : [esp+0x28]
        push ebp
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x38]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fstp dword ptr ss : [esp+0x1C]
        push 0x1701
        fld dword ptr ds : [esi+0xB4]
        fadd dword ptr ds : [public_5d4f28]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0xB8]
        fadd dword ptr ds : [public_5d55b4]
        fstp dword ptr ss : [esp+0x30]
        call public_401e90
        call public_422a70
        call public_4225e0
        lea eax, ds:[esi+0xD8]
        push eax
        call public_421ba0
        push 0xDE1
        call public_421ed0
        push 8
        call public_421670
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        mov edi, ecx
        mov ebp, edx
        push edi
        push ebp
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        call public_421cc0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x34]
        push ebx
        push edi
        fstp dword ptr ss : [esp+0x4C]
        mov ebx, dword ptr ss : [esp+0x4C]
        push ebx
        call public_421cc0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x44]
        push 0
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        push ebx
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x4C]
        push 0
        push ecx
        push ebp
        call public_421cc0
        add esp, 0x48
        call public_421690
/*FIXUP push offset public_679bb4 @0x4be1b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_421ba0
        push 7
        call public_421670
        push 0
        push edi
        push ebp
        call public_421cc0
        push 0
        push edi
        push ebx
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x30]
        push 0
        push edi
        push ebx
        call public_421cc0
        push 0
        push edi
        push ebp
        call public_421cc0
        call public_421690
        push 0x1701
        call public_401e90
        add esp, 0x3C
        call public_422ab0
        mov edi, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        pop ebp
        public_4be20e : nop
        lea edx, ds:[esi+0xCC]
        push edx
        call public_417780
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [public_5c75dc]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 4
        push ebx
        fstp dword ptr ss : [esp+0x3C]
        push ebx
        fld dword ptr ds : [esi+0xB4]
        push edi
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [esi+0xB8]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x54], 1
        call public_4143c0
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        add esp, 8
        pop edi
        pop ebx
        public_4be275 : nop
        pop esi
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x4bdfe0)
    }
}

#undef public_4be20e
#undef public_4be275
