#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0c90);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0e30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1240);
CLANG_FORWARD_PROC_SYMBOL(public_6ef15b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac068);

#define public_6ef1660 _public_6ef1660
#define public_6ef16cc _public_6ef16cc
#define public_6ef16f5 _public_6ef16f5
#define public_6ef16fe _public_6ef16fe
#define public_6ef1710 _public_6ef1710
#define public_6ef1720 _public_6ef1720
#define public_6ef1739 _public_6ef1739
#define public_6ef1749 _public_6ef1749
#define public_6ef1771 _public_6ef1771
#define public_6ef177d _public_6ef177d
#define public_6ef1786 _public_6ef1786
#define public_6ef178d _public_6ef178d
#define public_6ef17a7 _public_6ef17a7
#define public_6ef17b0 _public_6ef17b0
#define public_6ef17b2 _public_6ef17b2
#define public_6ef17e3 _public_6ef17e3

PROC_DECLARE(0x6ef15b0, internal_6ef15b0, public_6ef15b0);
extern "C" NAKED register_t __cdecl internal_6ef15b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac068 @0x6ef15b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac068
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx+0x48]
        push ebp
        push esi
        push edi
        push eax
        mov ebp, ecx
        call public_6f4d5e0
        mov al, byte ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x18], al
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [public_6fb7610]
        lea ecx, ss:[esp+0x14]
        push ecx
        fstp dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x44]
        push esi
        push edi
        push ebx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6ef0e30
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        push edi
        push ebx
        push ecx
        mov ecx, ebp
        call public_6ef0f20
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        push edi
        push ebx
        push eax
        mov ecx, ebp
        call public_6ef1240
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp esi, eax
        je public_6ef1749
        mov edi, edi
        public_6ef1660 : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
        call dword ptr ds : [public_6fb3470]
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x48], eax
        call public_6f75f30
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        push ecx
        mov ecx, eax
        call public_6f72cb0
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [public_6fcf258]
        mov edi, dword ptr ds : [ecx+8]
        mov ebx, eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        call public_6eb5f30
        cmp eax, edi
        jne public_6ef16fe
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        call public_6f50650
        mov ecx, dword ptr ds : [eax+0x94]
        add esp, 4
        cmp ecx, 1
        jne public_6ef16cc
        mov al, byte ptr ds : [ebx+0x12]
        test al, al
        jne public_6ef16f5
        public_6ef16cc : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        call public_6f50650
        mov ecx, dword ptr ds : [eax+0x94]
        add esp, 4
        cmp ecx, 2
        jne public_6ef16fe
        mov al, byte ptr ds : [ebx+0x13]
        test al, al
        je public_6ef16fe
        public_6ef16f5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        jmp public_6ef1739
        public_6ef16fe : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        mov edx, ecx
        je public_6ef1720
        mov ecx, esi
        sub ecx, eax
        nop 
        public_6ef1710 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], edi
        add eax, 4
        cmp eax, edx
        jne public_6ef1710
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6ef1720 : nop
        push ecx
        add ecx, 0xFFFFFFFC
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, 4
        mov dword ptr ss : [esp+0x1C], eax
        public_6ef1739 : nop
        cmp esi, eax
        jne public_6ef1660
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x38]
        public_6ef1749 : nop
        test esi, esi
        je public_6ef17e3
        sub eax, esi
        sar eax, 2
        test eax, eax
        je public_6ef17e3
        lea ecx, ss:[esp+0x14]
        call public_6fa3db0
        test eax, eax
        jne public_6ef1771
        mov eax, dword ptr ss : [esp+0x1C]
        jmp public_6ef17b2
        public_6ef1771 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        jne public_6ef177d
        xor esi, esi
        jmp public_6ef1786
        public_6ef177d : nop
        mov esi, dword ptr ss : [esp+0x1C]
        sub esi, ecx
        sar esi, 2
        public_6ef1786 : nop
        dec esi
        jne public_6ef178d
        xor eax, eax
        jmp public_6ef17a7
        public_6ef178d : nop
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x18]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6ef17a7 : nop
        test eax, eax
        jbe public_6ef17b0
        lea ecx, ds:[ecx+eax*4]
        mov edi, edi
        public_6ef17b0 : nop
        mov eax, ecx
        public_6ef17b2 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3470]
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ebx+0x48]
        add esp, 4
        push edx
        push eax
        push ecx
        mov ecx, ebp
        call public_6ef0c90
        test al, al
        mov esi, dword ptr ss : [esp+0x18]
        je public_6ef17e3
        mov dword ptr ss : [esp+0x10], 0
        public_6ef17e3 : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x6ef15b0)
    }
}

#undef public_6ef1660
#undef public_6ef16cc
#undef public_6ef16f5
#undef public_6ef16fe
#undef public_6ef1710
#undef public_6ef1720
#undef public_6ef1739
#undef public_6ef1749
#undef public_6ef1771
#undef public_6ef177d
#undef public_6ef1786
#undef public_6ef178d
#undef public_6ef17a7
#undef public_6ef17b0
#undef public_6ef17b2
#undef public_6ef17e3
