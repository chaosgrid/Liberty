#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ee70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8e4c);

#define public_42eec1 _public_42eec1
#define public_42eec9 _public_42eec9
#define public_42eecf _public_42eecf
#define public_42eef6 _public_42eef6
#define public_42ef17 _public_42ef17
#define public_42ef25 _public_42ef25
#define public_42ef66 _public_42ef66
#define public_42ef6e _public_42ef6e
#define public_42ef74 _public_42ef74
#define public_42ef90 _public_42ef90
#define public_42ef98 _public_42ef98
#define public_42efa2 _public_42efa2

PROC_DECLARE(0x42ee70, internal_42ee70, public_42ee70);
extern "C" NAKED register_t __cdecl internal_42ee70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8e4c @0x42ee72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8e4c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        lea ebx, ds:[edi+8]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_5c69a0]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], edx
        mov al, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_42eec1
        xor eax, eax
        jmp public_42eec9
        public_42eec1 : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        public_42eec9 : nop
        test eax, eax
        jge public_42eecf
        xor eax, eax
        public_42eecf : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ebp, ecx
        mov ebx, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], ebx
        je public_42ef25
        public_42eef6 : nop
        mov dword ptr ss : [esp+0x18], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x24], 0
        je public_42ef17
        mov ecx, ebx
        call dword ptr ds : [public_5c69a0]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx], edx
        public_42ef17 : nop
        add ebx, 4
        add ebp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_42eef6
        public_42ef25 : nop
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov cl, byte ptr ds : [esi+0x1C]
        mov al, byte ptr ds : [edi+0x1C]
        xor cl, al
        and cl, 1
        xor cl, al
        mov byte ptr ds : [edi+0x1C], cl
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], eax
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        mov dl, byte ptr ds : [esi+0x28]
        mov byte ptr ds : [edi+0x28], dl
        mov ecx, dword ptr ds : [esi+0x2C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 1
        jne public_42ef66
        xor eax, eax
        jmp public_42ef6e
        public_42ef66 : nop
        mov eax, dword ptr ds : [esi+0x30]
        sub eax, ecx
        sar eax, 2
        public_42ef6e : nop
        test eax, eax
        jge public_42ef74
        xor eax, eax
        public_42ef74 : nop
        shl eax, 2
        push eax
        call public_5b7e84
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x30]
        mov esi, dword ptr ds : [esi+0x2C]
        add esp, 4
        cmp esi, ecx
        je public_42efa2
        lea ecx, ds:[ecx]
        public_42ef90 : nop
        test eax, eax
        je public_42ef98
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_42ef98 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_42ef90
        public_42efa2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x30], eax
        mov dword ptr ds : [edi+0x34], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x42ee70)
    }
}

#undef public_42eec1
#undef public_42eec9
#undef public_42eecf
#undef public_42eef6
#undef public_42ef17
#undef public_42ef25
#undef public_42ef66
#undef public_42ef6e
#undef public_42ef74
#undef public_42ef90
#undef public_42ef98
#undef public_42efa2
