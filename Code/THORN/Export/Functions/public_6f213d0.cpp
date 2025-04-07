#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f213d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f23540);
CLANG_FORWARD_PROC_SYMBOL(public_6f23570);
CLANG_FORWARD_PROC_SYMBOL(public_6f235a0);

PROC_DECLARE(0x6f213d0, internal_6f213d0, public_6f213d0);
extern "C" NAKED register_t __cdecl internal_6f213d0()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xE8]
        push edi
        lea eax, ss:[esp+0xAC]
        push eax
        mov ecx, esi
        call public_6f23090
        mov ebx, dword ptr ss : [esp+0xF4]
        push ebx
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_6f23540
        push 0x40800000
        lea eax, ss:[esp+0xD4]
        push ebx
        push eax
        call public_6f235a0
        mov ebp, dword ptr ss : [esp+0x108]
        push 0x40A00000
        lea ecx, ss:[esp+0xEC]
        push ebp
        push ecx
        call public_6f235a0
        fld dword ptr ds : [esi+8]
        fadd st(0), st
        add esp, 0x18
        lea ecx, ss:[esp+0xC4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_6f22d50
        lea edx, ss:[esp+0xD0]
        push edx
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0xE4]
        push ecx
        call public_6f23570
        lea edx, ss:[esp+0xD0]
        push edx
        lea eax, ss:[esp+0xEC]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_6f23540
        fld dword ptr ss : [esp+0x30]
        mov edi, dword ptr ss : [esp+0x110]
        fsub dword ptr ds : [edi+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xAC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0xFC]
        sub esp, 0xC
        fadd st(0), st
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0xB4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6f22d50
        fld dword ptr ds : [ebx+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_6f5a1b4]
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [ebp+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_6f5a1b4]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x9C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x88]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x84]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x90]
        sub esp, 0xC
        fadd dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x98]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x94]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0xFC]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x108]
        fmul dword ptr ds : [public_6f5a1b4]
        fld dword ptr ss : [esp+0x84]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fmul st, st(1)
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6f22d50
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x70]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x100]
        fmul dword ptr ds : [public_6f5a1b0]
        mov edx, eax
        pop edi
        pop esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_6f5a1b0]
        mov dword ptr ds : [edx], ecx
        pop ebp
        pop ebx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_6f5a1b0]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_6f5a1b8]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        xor eax, eax
        add esp, 0xD8
        ret 0x18
        UNREACHABLE_TRAP(0x6f213d0)
    }
}
