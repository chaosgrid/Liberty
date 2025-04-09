#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4cc440);

PROC_DECLARE(0x4cc440, internal_4cc440, public_4cc440);
extern "C" NAKED register_t __cdecl internal_4cc440()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        push edi
        push 0xDE1
        mov esi, ecx
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB60
        call public_421ed0
        push 0x660
/*FIXUP push offset public_5d7220 @0x4cc476*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_67dbf8 @0x4cc47b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
/*FIXUP push offset public_67dbf8 @0x4cc485*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        add esp, 0x20
        call public_4101e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        add esi, 0x5C
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_4215b0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        push 0
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        call public_422690
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 1
        push 2
        call public_4220c0
        push 2
        call public_421670
/*FIXUP push offset public_679bb4 @0x4cc553*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_421ba0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [public_5d2b1c]
        add esp, 0x28
        push esi
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [public_5d2b1c]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d747c]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        fst dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        fsub dword ptr ds : [public_5d747c]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        fstp dword ptr ss : [esp+0x30]
        push ecx
        push eax
        fstp dword ptr ss : [esp+0x28]
        mov esi, ecx
        fld dword ptr ss : [esp+0x2C]
        mov edi, edx
        fsub dword ptr ds : [public_5d747c]
        mov ebx, eax
        mov dword ptr ss : [esp+0x3C], edx
        mov ebp, edx
        fstp dword ptr ss : [esp+0x2C]
        call public_421cc0
        mov edx, dword ptr ss : [esp+0x40]
        push edi
        push esi
        push edx
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x4C]
        push edi
        push esi
        push eax
        call public_421cc0
        mov esi, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ss : [esp+0x40]
        push ebp
        push esi
        push edi
        call public_421cc0
        push ebp
        push esi
        push edi
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x68]
        mov esi, ebp
        push esi
        push edi
        push ebx
        call public_421cc0
        add esp, 0x48
        push esi
        push edi
        push ebx
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        jmp public_421690
        UNREACHABLE_TRAP(0x4cc440)
    }
}
