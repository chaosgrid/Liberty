#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadd42);

#define public_6f1cf9a _public_6f1cf9a
#define public_6f1cfc7 _public_6f1cfc7
#define public_6f1cff9 _public_6f1cff9
#define public_6f1d030 _public_6f1d030
#define public_6f1d062 _public_6f1d062
#define public_6f1d0b5 _public_6f1d0b5
#define public_6f1d0ea _public_6f1d0ea

PROC_DECLARE(0x6f1cee0, internal_6f1cee0, public_6f1cee0);
extern "C" NAKED register_t __cdecl internal_6f1cee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadd42 @0x6f1cee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadd42
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x16]
        push eax
        lea ecx, ss:[esp+0x2C]
        lea esi, ds:[edi+8]
        call public_6f93460
        push esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x28], offset public_6fb479c
        call public_6f1caa0
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, offset public_6fb478c
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x24], ebp
        lea edx, ss:[esp+0x17]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x58], 1
        call public_6f93460
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x48], 0
        mov eax, dword ptr ds : [edi+0x1C]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        push 7
        mov byte ptr ss : [esp+0x60], 2
        mov dword ptr ss : [esp+0x24], 0
        call public_6f19cd0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0xC
        test eax, eax
        je public_6f1cf9a
        mov eax, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6f1e390
        public_6f1cf9a : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, esi
        mov dword ptr ds : [edx+0x1C], 0x89
        call public_6f1cb40
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x40]
        je public_6f1cff9
        lea ebp, ds:[esi+4]
        public_6f1cfc7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6ecfc30
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x40]
        jne public_6f1cfc7
        public_6f1cff9 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], edx
        call public_6f1d110
        mov ecx, esi
        call public_6f1cb40
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x2C]
        je public_6f1d062
        lea edi, ds:[esi+4]
        lea esp, ss:[esp]
        public_6f1d030 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6ecfc30
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x2C]
        jne public_6f1d030
        public_6f1d062 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x10], edx
        mov esi, offset public_6fb479c
        mov dword ptr ss : [esp+0x38], esi
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x54], 3
        call public_6f1cb40
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x54], 1
        call public_6f15350
        mov dword ptr ss : [esp+0x24], esi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x58], 4
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        je public_6f1d0ea
        public_6f1d0b5 : nop
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ecx
        call public_6f1a610
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f1d0b5
        public_6f1d0ea : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_6f15350
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6f1cee0)
    }
}

#undef public_6f1cf9a
#undef public_6f1cfc7
#undef public_6f1cff9
#undef public_6f1d030
#undef public_6f1d062
#undef public_6f1d0b5
#undef public_6f1d0ea
