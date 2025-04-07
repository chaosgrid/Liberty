#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac4f8);

#define public_6ef7ca2 _public_6ef7ca2
#define public_6ef7cad _public_6ef7cad
#define public_6ef7cb3 _public_6ef7cb3
#define public_6ef7d55 _public_6ef7d55
#define public_6ef7e1b _public_6ef7e1b

PROC_DECLARE(0x6ef7bd0, internal_6ef7bd0, public_6ef7bd0);
extern "C" NAKED register_t __cdecl internal_6ef7bd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac4f8 @0x6ef7bd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac4f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        je public_6ef7e1b
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        push ebx
        mov ecx, ebp
        call public_6f21fd0
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        lea esi, ds:[ebx+8]
        lea edi, ss:[ebp+8]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        lea eax, ds:[ebx+0x50]
        push eax
        lea ecx, ss:[ebp+0x50]
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ss : [ebp+0x4C], edx
        call public_6eb35b0
        lea ecx, ds:[ebx+0x60]
        push ecx
        lea ecx, ss:[ebp+0x60]
        mov byte ptr ss : [esp+0x24], 2
        call public_6ef7e30
        mov edx, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], edx
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x70], eax
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x74], ecx
        mov dl, byte ptr ds : [ebx+0x78]
        mov byte ptr ss : [ebp+0x78], dl
        mov eax, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], eax
        mov cl, byte ptr ds : [ebx+0x80]
        lea esi, ss:[ebp+0x80]
        mov byte ptr ds : [esi], cl
        mov ecx, dword ptr ds : [ebx+0x84]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 3
        jne public_6ef7ca2
        xor eax, eax
        jmp public_6ef7cad
        public_6ef7ca2 : nop
        mov eax, dword ptr ds : [ebx+0x88]
        sub eax, ecx
        sar eax, 3
        public_6ef7cad : nop
        test eax, eax
        jge public_6ef7cb3
        xor eax, eax
        public_6ef7cb3 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x88]
        mov edx, dword ptr ds : [ebx+0x84]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6ed2700
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea esi, ds:[ebx+0x90]
        lea edi, ss:[ebp+0x90]
        mov ecx, 9
        rep movsd
        lea eax, ds:[ebx+0xB4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0xB4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0xC0]
        mov dword ptr ss : [ebp+0xC0], ecx
        lea esi, ds:[ebx+0xC4]
        lea edi, ss:[ebp+0xC4]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [ebp+0xF8], edx
        mov ecx, dword ptr ds : [ebx+0xFC]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ss : [ebp+0xFC], ecx
        je public_6ef7d55
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6ef7d55 : nop
        mov ecx, dword ptr ds : [ebx+0x100]
        mov dword ptr ss : [ebp+0x100], ecx
        mov edx, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [ebp+0x104], edx
        mov eax, dword ptr ds : [ebx+0x108]
        mov dword ptr ss : [ebp+0x108], eax
        mov ecx, dword ptr ds : [ebx+0x10C]
        mov dword ptr ss : [ebp+0x10C], ecx
        mov edx, dword ptr ds : [ebx+0x110]
        mov dword ptr ss : [ebp+0x110], edx
        mov eax, dword ptr ds : [ebx+0x114]
        mov dword ptr ss : [ebp+0x114], eax
        mov cl, byte ptr ds : [ebx+0x118]
        lea esi, ss:[ebp+0x118]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 5
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [ebx+0x11C]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edx
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        lea esi, ds:[ebx+0x124]
        lea edi, ss:[ebp+0x124]
        mov ecx, 0xF6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x4FC]
        pop edi
        mov dword ptr ss : [ebp+0x4FC], eax
        mov ecx, dword ptr ds : [ebx+0x500]
        pop esi
        mov dword ptr ss : [ebp+0x500], ecx
        pop ebx
        public_6ef7e1b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ef7bd0)
    }
}

#undef public_6ef7ca2
#undef public_6ef7cad
#undef public_6ef7cb3
#undef public_6ef7d55
#undef public_6ef7e1b
