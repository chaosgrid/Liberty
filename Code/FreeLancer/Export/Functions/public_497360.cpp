#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fb0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_497360);
CLANG_FORWARD_PROC_SYMBOL(public_498470);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4973f7 _public_4973f7
#define public_49749d _public_49749d
#define public_4974a1 _public_4974a1
#define public_497516 _public_497516
#define public_497520 _public_497520
#define public_497553 _public_497553
#define public_497568 _public_497568
#define public_497582 _public_497582

PROC_DECLARE(0x497360, internal_497360, public_497360);
extern "C" NAKED register_t __cdecl internal_497360()
{
    __asm
    {
        sub esp, 0xB0
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        lea eax, ds:[ebx+0x3D4]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x98], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x94], edx
        rep movsd
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        jne public_4973f7
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_4973f7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, 9
        lea esi, ss:[esp+0x9C]
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x60], edx
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], ecx
        call public_422690
        push 0xB50
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        push 4
        call public_421670
        mov ecx, dword ptr ds : [ebx+0x810]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x28
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_497582
        jmp public_4974a1
        public_49749d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_4974a1 : nop
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi]
        add ecx, 8
        call public_420fb0
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        add ecx, 8
        call public_420fb0
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        jne public_497516
        push 0x3BA3D70A
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [eax]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x31], 0x10
        mov byte ptr ss : [esp+0x32], 0x20
        mov byte ptr ss : [esp+0x33], 0
        mov byte ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x2D], 0x40
        mov byte ptr ss : [esp+0x2E], 0x80
        mov byte ptr ss : [esp+0x2F], 0xFF
        mov dword ptr ds : [ecx+8], eax
        jmp public_497553
        public_497516 : nop
        cmp esi, 2
        je public_497520
        cmp esi, 1
        jne public_497568
        public_497520 : nop
        mov edx, dword ptr ds : [public_679b80]
        push 0x3BA3D70A
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_679b80 @0x497532*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679b80
        mov dword ptr ss : [esp+0x1C], edx
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov byte ptr ss : [esp+0x2B], 0
        mov dword ptr ds : [edx+8], eax
        public_497553 : nop
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], ebx
        call public_498470
        add esp, 0x24
        public_497568 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [ecx+0x810]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_49749d
        public_497582 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xB0
        jmp public_421690
        UNREACHABLE_TRAP(0x497360)
    }
}

#undef public_4973f7
#undef public_49749d
#undef public_4974a1
#undef public_497516
#undef public_497520
#undef public_497553
#undef public_497568
#undef public_497582
