#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401300);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_42eaa0);
CLANG_FORWARD_PROC_SYMBOL(public_42ec80);
CLANG_FORWARD_PROC_SYMBOL(public_42ee70);
CLANG_FORWARD_PROC_SYMBOL(public_42f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8dd9);

#define public_42eb70 _public_42eb70
#define public_42eb91 _public_42eb91
#define public_42ebaf _public_42ebaf
#define public_42ebe1 _public_42ebe1
#define public_42ebff _public_42ebff
#define public_42ec1d _public_42ec1d

PROC_DECLARE(0x42eaa0, internal_42eaa0, public_42eaa0);
extern "C" NAKED register_t __cdecl internal_42eaa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8dd9 @0x42eaa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8dd9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push esi
        mov esi, dword ptr ds : [public_5c69a0]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0xC]
        call esi
        lea ecx, ss:[esp+0x14]
        call esi
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        xor esi, esi
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x98], esi
        mov dword ptr ss : [esp+0x54], eax
        call public_42ee70
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x9C], 1
        call public_42f0f0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x4C], ecx
        cmp dword ptr ss : [esp+0x74], esi
        mov byte ptr ss : [esp+0x94], 3
        jle public_42ebaf
        lea ecx, ss:[esp+0x7C]
        xor edi, edi
        call public_5ad970
        test eax, eax
        jbe public_42eb91
        nop 
        lea esp, ss:[esp]
        public_42eb70 : nop
        mov edx, dword ptr ss : [esp+0x80]
        lea eax, ds:[edx+edi*4]
        push eax
        call public_41b030
        add esp, 4
        lea ecx, ss:[esp+0x7C]
        inc edi
        call public_5ad970
        cmp edi, eax
        jb public_42eb70
        public_42eb91 : nop
        lea ecx, ss:[esp+0x7C]
        call public_42ec80
        mov ecx, dword ptr ss : [esp+0x78]
        push ecx
        call public_401300
        add esp, 4
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        public_42ebaf : nop
        lea ecx, ss:[esp+0x7C]
        call public_4de730
        lea ecx, ss:[esp+0x60]
        call public_4de730
        cmp dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x94], 5
        jle public_42ec1d
        lea ecx, ss:[esp+0x34]
        xor edi, edi
        call public_5ad970
        test eax, eax
        jbe public_42ebff
        public_42ebe1 : nop
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ds:[edx+edi*4]
        push eax
        call public_41b030
        add esp, 4
        lea ecx, ss:[esp+0x34]
        inc edi
        call public_5ad970
        cmp edi, eax
        jb public_42ebe1
        public_42ebff : nop
        lea ecx, ss:[esp+0x34]
        call public_42ec80
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        call public_401300
        add esp, 4
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_42ec1d : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x9C], 4
        call public_53aaa0
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        call public_4de730
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        lea eax, ds:[edx+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x42eaa0)
    }
}

#undef public_42eb70
#undef public_42eb91
#undef public_42ebaf
#undef public_42ebe1
#undef public_42ebff
#undef public_42ec1d
