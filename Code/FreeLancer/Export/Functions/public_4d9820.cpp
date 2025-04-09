#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0340);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

#define public_4d983f _public_4d983f
#define public_4d98e4 _public_4d98e4
#define public_4d9929 _public_4d9929

PROC_DECLARE(0x4d9820, internal_4d9820, public_4d9820);
extern "C" NAKED register_t __cdecl internal_4d9820()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push ebp
        mov ebx, ecx
        call public_5a0340
        test al, al
        je public_4d983f
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 4
        public_4d983f : nop
        mov ecx, dword ptr ds : [ebx+0x384]
        add ecx, 0x80
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_420d60
        test al, al
        je public_4d98e4
        mov edx, dword ptr ds : [ebx+0x384]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x1C]
        rep movsd
        pop edi
        pop esi
        jmp public_4d9929
        public_4d98e4 : nop
        mov eax, dword ptr ds : [ebx+0x384]
        fld dword ptr ds : [eax+0x60]
        fadd dword ptr ds : [eax+0xA8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x64]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x40], edx
        public_4d9929 : nop
        mov eax, dword ptr ds : [ebx+0x384]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [eax+0xC0]
        add eax, 0xC0
        push ebp
        lea ecx, ds:[ebx+0x3A4]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x18]
        push eax
        fstp dword ptr ss : [esp+0x48]
        call public_5a1130
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x4d9820)
    }
}

#undef public_4d983f
#undef public_4d98e4
#undef public_4d9929
