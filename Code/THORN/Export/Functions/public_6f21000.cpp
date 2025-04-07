#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21000);
CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f23540);
CLANG_FORWARD_PROC_SYMBOL(public_6f23570);
CLANG_FORWARD_PROC_SYMBOL(public_6f235a0);

PROC_DECLARE(0x6f21000, internal_6f21000, public_6f21000);
extern "C" NAKED register_t __cdecl internal_6f21000()
{
    __asm
    {
        sub esp, 0xF8
        fld dword ptr ss : [esp+0x10C]
        push ebx
        fmul dword ptr ss : [esp+0x110]
        mov ebx, dword ptr ss : [esp+0x104]
        push ebp
        push esi
        push edi
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x11C]
        push 0x40000000
        lea eax, ss:[esp+0x58]
        push ebx
        push eax
        fstp dword ptr ss : [esp+0x20]
        call public_6f235a0
        mov esi, dword ptr ss : [esp+0x118]
        add esp, 0xC
        lea ecx, ss:[esp+0xCC]
        push ecx
        mov ecx, esi
        call public_6f23090
        mov ebp, dword ptr ss : [esp+0x114]
        push ebp
        lea edx, ss:[esp+0xD0]
        push edx
        lea eax, ss:[esp+0x104]
        push eax
        call public_6f23540
        mov ecx, dword ptr ss : [esp+0x128]
        push ecx
        lea edx, ss:[esp+0x10C]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_6f235a0
        push 0x40800000
        lea ecx, ss:[esp+0x100]
        push ebp
        push ecx
        call public_6f235a0
        push 0x40A00000
        lea edx, ss:[esp+0x118]
        push ebx
        push edx
        call public_6f235a0
        fld dword ptr ds : [esi+8]
        fadd st(0), st
        add esp, 0x24
        lea ecx, ss:[esp+0xE4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_6f22d50
        lea eax, ss:[esp+0xF0]
        push eax
        lea ecx, ss:[esp+0xDC]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        call public_6f23570
        lea eax, ss:[esp+0xF0]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6f23540
        fld dword ptr ss : [esp+0x38]
        mov edi, dword ptr ss : [esp+0x130]
        fsub dword ptr ds : [edi+8]
        add esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi]
        lea ecx, ss:[esp+0xB4]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0xB0]
        fmul dword ptr ss : [esp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB8]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xB4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [ebp+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_6f5a1b4]
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ds : [ebx+8]
        sub esp, 0xC
        fmul dword ptr ds : [public_6f5a1b4]
        lea ecx, ss:[esp+0xA8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fmul dword ptr ds : [public_6f5a1b4]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0xA4]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x90]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xAC]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x8C]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x9C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x98]
        sub esp, 0xC
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x84]
        fld dword ptr ss : [esp+0x9C]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x80]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0xCC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0xD4]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x78]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x120]
        fadd dword ptr ss : [esp+0x6C]
        pop edi
        fld dword ptr ss : [esp+0x54]
        pop esi
        fadd dword ptr ss : [esp+0x68]
        pop ebp
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x68]
        pop ebx
        fstp dword ptr ss : [esp+0xAC]
        fxch 
        fmul dword ptr ds : [public_6f5a1b0]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_6f5a1b0]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6f5a1b0]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 0xF8
        ret 0x18
        UNREACHABLE_TRAP(0x6f21000)
    }
}
