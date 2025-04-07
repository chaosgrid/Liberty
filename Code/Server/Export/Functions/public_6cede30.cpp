#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d606b9);

#define public_6cedf53 _public_6cedf53
#define public_6cedf7d _public_6cedf7d
#define public_6cedfec _public_6cedfec

PROC_DECLARE(0x6cede30, internal_6cede30, public_6cede30);
extern "C" NAKED register_t __cdecl internal_6cede30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d606b9 @0x6cede32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d606b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [public_6d6433c]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_6d64338]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x34]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6d65750]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        xor ebx, ebx
        cmp al, bl
        mov byte ptr ss : [esp+0xF], al
        je public_6cedfec
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ecx+0x28]
        cmp edi, ebx
        je public_6cedfec
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cedf7d
        mov edx, dword ptr ds : [public_6d6402c]
        xor eax, eax
        mov dword ptr ss : [esp+0x10], ebx
        mov ax, word ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d641b0]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6cedf7d
        push ebp
        lea ebp, ds:[eax+8]
        mov eax, dword ptr ds : [public_6d8d6f8]
        cmp eax, ebx
        jne public_6cedf53
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d6f8], eax
        public_6cedf53 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push ebp
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        pop ebp
        public_6cedf7d : nop
        mov al, byte ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x4C], al
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov ecx, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [ecx+8]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_6d641b4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6d0e2e0
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        call public_6d5ffb0
        mov al, byte ptr ss : [esp+0x13]
        add esp, 4
        public_6cedfec : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 4
        UNREACHABLE_TRAP(0x6cede30)
    }
}

#undef public_6cedf53
#undef public_6cedf7d
#undef public_6cedfec
