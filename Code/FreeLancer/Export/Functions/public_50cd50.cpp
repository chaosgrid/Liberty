#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_50cd50);

#define public_50cd7e _public_50cd7e
#define public_50cd82 _public_50cd82
#define public_50d2ed _public_50d2ed

PROC_DECLARE(0x50cd50, internal_50cd50, public_50cd50);
extern "C" NAKED register_t __cdecl internal_50cd50()
{
    __asm
    {
        sub esp, 0xCC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_50d2ed
        push 0xBE2
        call public_421dd0
        mov al, byte ptr ds : [esi+0x4C]
        add esp, 4
        test al, al
        je public_50cd7e
        push 6
        push 5
        jmp public_50cd82
        public_50cd7e : nop
        push 4
        push 2
        public_50cd82 : nop
        call public_4220c0
        mov ecx, dword ptr ds : [esi+0x48]
        add esp, 8
        push ebx
        push ebp
        push edi
        push 0
        call public_425640
        push eax
        call public_4220a0
        mov eax, dword ptr ss : [esp+0xE4]
        mov ecx, dword ptr ss : [esp+0xE8]
        mov edi, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [esp+0xEC]
        mov dword ptr ss : [esp+0x60], eax
        push edi
        lea eax, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x68], ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x74], edx
        call public_411d60
        fld dword ptr ds : [esi+0x24]
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        call public_411d60
        push edi
        lea ecx, ss:[esp+0x100]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_411d60
        fld dword ptr ds : [esi+0x24]
        add esp, 0x14
        lea eax, ss:[esp+0x14]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        call public_411d60
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x94]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x94]
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_423b30
        add esp, 0x48
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x94]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call public_423b60
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0xF0]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0xF8]
        push eax
        lea ecx, ss:[esp+0x108]
        push ecx
        call public_423b30
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0x110]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_423b30
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_5c94f8]
        add esp, 0x48
        sub esp, 0xC
        lea ecx, ss:[esp+0xC4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c94f8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c94f8]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x50]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0xB8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x44]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x44]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c75e0]
        lea ecx, ss:[esp+0xAC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x58], edx
        fadd dword ptr ss : [esp+0x58]
        fmul qword ptr ds : [public_5c75e8]
        mov edx, dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x54], edx
        fadd dword ptr ss : [esp+0x54]
        push 6
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x70]
        call public_421670
        mov edi, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x28]
        push edi
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ebx, dword ptr ss : [esp+0x80]
        mov ebp, dword ptr ss : [esp+0x7C]
        push ebx
        push ebp
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xDC]
        mov edx, dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ss : [esp+0xD4]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        push ecx
        push edx
        push eax
        call public_421bd0
        mov esi, dword ptr ss : [esp+0x8C]
        mov edi, dword ptr ss : [esp+0x90]
        push esi
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x64]
        add esp, 0x40
        push ecx
        push edx
        push eax
        call public_421cc0
        push esi
        push ebp
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x9C]
        push ecx
        push edx
        push eax
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x40]
        push esi
        push ecx
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ss : [esp+0x54]
        push ebx
        push edx
        call public_421ca0
        mov eax, dword ptr ss : [esp+0xF0]
        push eax
        mov ecx, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [esp+0xEC]
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 0x48
        push eax
        push ecx
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        push ecx
        call public_421cc0
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push ebp
        call public_421ca0
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xB0]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x6C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push ebx
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0xEC]
        mov edx, dword ptr ss : [esp+0xE8]
        mov eax, dword ptr ss : [esp+0xE4]
        add esp, 0x44
        push ecx
        push edx
        push eax
        call public_421cc0
        push esi
        push edi
        call public_421ca0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x20
        call public_421690
        pop edi
        pop ebp
        pop ebx
        public_50d2ed : nop
        pop esi
        add esp, 0xCC
        ret 0x2C
        UNREACHABLE_TRAP(0x50cd50)
    }
}

#undef public_50cd7e
#undef public_50cd82
#undef public_50d2ed
