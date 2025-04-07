#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f23120);
CLANG_FORWARD_PROC_SYMBOL(public_6f233e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadff8);

#define public_6f23410 _public_6f23410
#define public_6f234a7 _public_6f234a7
#define public_6f234c9 _public_6f234c9
#define public_6f234e9 _public_6f234e9
#define public_6f23554 _public_6f23554
#define public_6f235d0 _public_6f235d0
#define public_6f235f5 _public_6f235f5
#define public_6f23670 _public_6f23670

PROC_DECLARE(0x6f233e0, internal_6f233e0, public_6f233e0);
extern "C" NAKED register_t __cdecl internal_6f233e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadff8 @0x6f233e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadff8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        mov esi, dword ptr ss : [esp+0x24]
        push ebx
        mov dword ptr ss : [esp+0x20], 0
        lea edi, ds:[esi+4]
        push ebp
        nop 
        lea esp, ss:[esp]
        public_6f23410 : nop
        mov ebp, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, ebp
        sub edi, 0x88
        call public_6f15710
        push edi
        mov ecx, ebp
        mov ebx, eax
        call public_6f15710
        test ebx, ebx
        je public_6f23554
        test eax, eax
        je public_6f23554
        mov edx, dword ptr ds : [eax+0x14C]
        mov ebx, dword ptr ds : [ebx+0x14C]
        cmp ebx, edx
        setl al
        test al, al
        je public_6f23554
        lea ecx, ds:[edi+4]
        push ecx
        lea ecx, ds:[esi+4]
        call public_6ed0160
        mov edx, dword ptr ds : [edi+0x34]
        lea ebx, ds:[esi+0x3C]
        lea eax, ds:[edi+0x38]
        cmp ebx, eax
        mov dword ptr ds : [esi+0x38], edx
        je public_6f234e9
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_6f1df30
        mov ebp, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[edi+0x38]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ss : [esp+0x14], edx
        je public_6f234c9
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6f234a7 : nop
        cmp ecx, edx
        je public_6f234c9
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_6f234a7
        public_6f234c9 : nop
        push ebp
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6ed0230
        public_6f234e9 : nop
        mov dl, byte ptr ds : [edi+0x44]
        mov byte ptr ds : [esi+0x48], dl
        mov al, byte ptr ds : [edi+0x45]
        mov byte ptr ds : [esi+0x49], al
        mov ecx, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x4C], ecx
        mov dl, byte ptr ds : [edi+0x4C]
        lea ecx, ds:[edi+0x54]
        mov byte ptr ds : [esi+0x50], dl
        mov eax, dword ptr ds : [edi+0x50]
        push ecx
        lea ecx, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x54], eax
        call public_6f20230
        mov edx, dword ptr ds : [edi+0x60]
        lea eax, ds:[edi+0x64]
        push eax
        lea ecx, ds:[esi+0x68]
        mov dword ptr ds : [esi+0x64], edx
        call public_6f23120
        lea ecx, ds:[edi+0x68]
        push ecx
        lea ecx, ds:[esi+0x6C]
        call public_6ef8910
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x80], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x84], ecx
        lea esi, ds:[edi-4]
        jmp public_6f23410
        public_6f23554 : nop
        lea edx, ss:[esp+0x38]
        lea ecx, ds:[esi+4]
        push edx
        call public_6ed0160
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ds:[esi+0x3C]
        mov dword ptr ds : [esi+0x38], eax
        call public_6f93490
        mov dl, byte ptr ss : [esp+0x78]
        mov al, byte ptr ss : [esp+0x79]
        mov ecx, dword ptr ss : [esp+0x7C]
        mov byte ptr ds : [esi+0x48], dl
        mov dl, byte ptr ss : [esp+0x80]
        mov byte ptr ds : [esi+0x49], al
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [esi+0x4C], ecx
        lea edi, ds:[esi+0x58]
        mov ecx, edi
        mov byte ptr ds : [esi+0x50], dl
        mov dword ptr ds : [esi+0x54], eax
        call public_6ed2a00
        lea ecx, ss:[esp+0x88]
        push ecx
        mov ecx, edi
        call public_6f93490
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        pop ebp
        pop ebx
        je public_6f235f5
        public_6f235d0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        jne public_6f235d0
        public_6f235f5 : nop
        mov edx, dword ptr ss : [esp+0x8C]
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ds:[esi+0x68]
        mov dword ptr ds : [esi+0x64], edx
        call public_6f23120
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ds:[esi+0x6C]
        call public_6ef8910
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov dword ptr ds : [esi+0x7C], edx
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], ecx
        mov dword ptr ss : [esp+0x28], offset public_6fb60a8
        mov ecx, dword ptr ss : [esp+0x90]
        test ecx, ecx
        pop edi
        mov dword ptr ss : [esp+0x18], 4
        pop esi
        je public_6f23670
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x88], 0
        public_6f23670 : nop
        lea ecx, ss:[esp+0x8C]
        call public_6eec8d0
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x14], 2
        call public_6f28e10
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x14], 1
        call public_6ecfa90
        lea ecx, ss:[esp+0x5C]
        call public_6f15350
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f233e0)
    }
}

#undef public_6f23410
#undef public_6f234a7
#undef public_6f234c9
#undef public_6f234e9
#undef public_6f23554
#undef public_6f235d0
#undef public_6f235f5
#undef public_6f23670
