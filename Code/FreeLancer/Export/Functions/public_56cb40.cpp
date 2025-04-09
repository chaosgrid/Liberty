#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488b70);
CLANG_FORWARD_PROC_SYMBOL(public_4890c0);
CLANG_FORWARD_PROC_SYMBOL(public_489160);
CLANG_FORWARD_PROC_SYMBOL(public_56cb40);
CLANG_FORWARD_PROC_SYMBOL(public_5756a0);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_575700);
CLANG_FORWARD_PROC_SYMBOL(public_5758e0);
CLANG_FORWARD_PROC_SYMBOL(public_575950);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_5a1f50);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2a8a);

#define public_56cbe6 _public_56cbe6
#define public_56cc42 _public_56cc42
#define public_56cc50 _public_56cc50
#define public_56cd11 _public_56cd11
#define public_56cd2b _public_56cd2b
#define public_56cd68 _public_56cd68
#define public_56cd7b _public_56cd7b
#define public_56cddd _public_56cddd
#define public_56cde0 _public_56cde0

PROC_DECLARE(0x56cb40, internal_56cb40, public_56cb40);
extern "C" NAKED register_t __cdecl internal_56cb40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2a8a @0x56cb42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2a8a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xD8]
        xor ebp, ebp
        mov dword ptr ds : [eax+0x8A4], ebp
        mov eax, dword ptr ds : [esi+0xDC]
        push edi
        mov dword ptr ds : [eax+0x8A4], ebp
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x41A00000
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x3F800000
        call public_595e10
        mov eax, dword ptr ds : [esi+0xD4]
        mov bl, byte ptr ds : [eax+0x6C]
        or bl, 3
        mov ecx, offset public_67e96c
        mov byte ptr ds : [eax+0x6C], bl
        mov dword ptr ss : [esp+0x18], ebp
        call public_575950
        mov ecx, dword ptr ds : [esi+0x35C]
        lea edi, ds:[esi+0x358]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        call public_4890c0
        mov ecx, edi
        call public_5756a0
        cmp eax, ebx
        jae public_56cc42
        cmp ebx, ebp
        mov eax, ebx
        jge public_56cbe6
        xor eax, eax
        public_56cbe6 : nop
        lea eax, ds:[eax+eax*8]
        shl eax, 2
        push eax
        call public_5b7e84
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push ecx
        push edx
        mov ecx, edi
        call public_5758e0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call public_489160
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        lea edx, ds:[ebx+ebx*8]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], eax
        call public_5756d0
        lea ecx, ds:[eax+eax*8]
        lea edx, ss:[ebp+ecx*4]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], edx
        xor ebp, ebp
        public_56cc42 : nop
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], ebp
        jbe public_56cd7b
        mov edi, edi
        public_56cc50 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov ebp, eax
        test ebp, ebp
        je public_56cd68
        mov al, byte ptr ss : [ebp+0x200]
        test al, al
        jne public_56cd68
        lea ecx, ss:[esp+0x12]
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6fc0]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_5c6fc0]
        push ebp
        mov dword ptr ss : [esp+0x50], 1
        mov dword ptr ss : [esp+0x24], ebp
        call public_488b70
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 8
        push eax
        push ebx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6fb0]
        add ebp, 0x228
        push ebp
        call dword ptr ds : [public_5c63d0]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 8
        push eax
        push ebx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6fb0]
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        mov ecx, edi
        call public_575700
        mov ebp, dword ptr ds : [esi+0x360]
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        mov ebx, dword ptr ss : [ebp-0x24]
        jne public_56cd11
        mov eax, dword ptr ds : [public_5c700c]
        public_56cd11 : nop
        mov ecx, dword ptr ds : [esi+0xD8]
        push ebx
        push eax
        call public_5a1f50
        mov ebp, dword ptr ss : [ebp-0xC]
        test ebp, ebp
        jne public_56cd2b
        mov ebp, dword ptr ds : [public_5c700c]
        public_56cd2b : nop
        mov ecx, dword ptr ds : [esi+0xDC]
        push ebx
        push ebp
        call public_5a1f50
        inc dword ptr ss : [esp+0x18]
        push 1
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 2
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_56cd68 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jb public_56cc50
        xor ebp, ebp
        public_56cd7b : nop
        fild dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xD4]
        fstp dword ptr ss : [esp]
        push ebp
        call public_595d60
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x41A00000
        call public_595de0
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0xD4]
        push ebp
        call public_595db0
        mov edx, dword ptr ds : [esi+0xD8]
        mov eax, dword ptr ds : [edx+0x8A4]
        sub eax, 0x14
        cmp eax, 1
        mov eax, dword ptr ds : [esi+0xD4]
        mov cl, byte ptr ds : [eax+0x6C]
        jge public_56cddd
        and cl, 0xFC
        jmp public_56cde0
        public_56cddd : nop
        or cl, 3
        public_56cde0 : nop
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0xD4]
        mov edi, dword ptr ds : [esi+0xD8]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [edi+0x88C], eax
        mov ecx, dword ptr ds : [esi+0xD4]
        mov esi, dword ptr ds : [esi+0xDC]
        call public_595dd0
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        mov dword ptr ds : [esi+0x88C], eax
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x56cb40)
    }
}

#undef public_56cbe6
#undef public_56cc42
#undef public_56cc50
#undef public_56cd11
#undef public_56cd2b
#undef public_56cd68
#undef public_56cd7b
#undef public_56cddd
#undef public_56cde0
