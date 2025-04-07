#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d03500);
CLANG_FORWARD_PROC_SYMBOL(public_6d03740);
CLANG_FORWARD_PROC_SYMBOL(public_6d038a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04810);
CLANG_FORWARD_PROC_SYMBOL(public_6d05230);
CLANG_FORWARD_PROC_SYMBOL(public_6d052a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05320);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d05de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60fd3);

#define public_6d035cf _public_6d035cf
#define public_6d035e0 _public_6d035e0
#define public_6d035ee _public_6d035ee
#define public_6d035f4 _public_6d035f4
#define public_6d03640 _public_6d03640
#define public_6d0368d _public_6d0368d
#define public_6d0368f _public_6d0368f
#define public_6d036e6 _public_6d036e6
#define public_6d036ef _public_6d036ef

PROC_DECLARE(0x6d03500, internal_6d03500, public_6d03500);
extern "C" NAKED register_t __cdecl internal_6d03500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60fd3 @0x6d03502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60fd3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push esi
        call dword ptr ds : [public_6d64630]
        mov ebx, eax
        xor ebp, ebp
        add esp, 4
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebx
        je public_6d036ef
        mov ecx, ebx
        call dword ptr ds : [public_6d6462c]
        mov al, byte ptr ss : [esp+0x68]
        push ebp
        push ebp
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x30], al
        call public_6cfc340
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x24], ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], ebp
        call public_6d052a0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6d8d980
        mov byte ptr ss : [esp+0x68], 1
        call public_6d05de0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x60], 0
        call public_6d03740
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x60], 2
        je public_6d035cf
        call dword ptr ds : [public_6d64618]
        public_6d035cf : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d035f4
        lea esp, ss:[esp]
        public_6d035e0 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        je public_6d035ee
        push 1
        call public_6d038a0
        public_6d035ee : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d035e0
        public_6d035f4 : nop
        lea ecx, ss:[esp+0x2C]
        call public_6d05320
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_6cecb50
        mov edi, dword ptr ss : [esp+0x20]
        inc dword ptr ds : [edi+0x24]
        mov ecx, ebx
        mov dword ptr ds : [edi+0x10], ebx
        call dword ptr ds : [public_6d6462c]
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x20], eax
        call dword ptr ds : [public_6d64628]
        mov esi, eax
        cmp esi, ebp
        je public_6d036e6
        lea ebx, ds:[edi+0x14]
        lea esp, ss:[esp]
        public_6d03640 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64624]
        push 0x20
        call public_6d60012
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x64], 3
        je public_6d0368d
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[ebp+4]
        call public_6d05230
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0x1C], 0
        mov dword ptr ss : [ebp+0x18], 0xFA
        jmp public_6d0368f
        public_6d0368d : nop
        xor ebp, ebp
        public_6d0368f : nop
        mov eax, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], ebp
        call public_6d05d90
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+8]
        push esi
        mov ecx, ebp
        call public_6d04810
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, esi
        mov dword ptr ss : [ebp+0x1C], eax
        call dword ptr ds : [public_6d6461c]
        mov ecx, dword ptr ds : [edi+0x10]
        call dword ptr ds : [public_6d64620]
        mov esi, eax
        test esi, esi
        jne public_6d03640
        mov ebx, dword ptr ss : [esp+0x18]
        public_6d036e6 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d64618]
        pop edi
        public_6d036ef : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6d03500)
    }
}

#undef public_6d035cf
#undef public_6d035e0
#undef public_6d035ee
#undef public_6d035f4
#undef public_6d03640
#undef public_6d0368d
#undef public_6d0368f
#undef public_6d036e6
#undef public_6d036ef
