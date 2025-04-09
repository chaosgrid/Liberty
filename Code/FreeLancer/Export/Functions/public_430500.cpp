#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430500);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8ead);

#define public_43056f _public_43056f
#define public_430577 _public_430577
#define public_43057d _public_43057d
#define public_4305a6 _public_4305a6
#define public_4305c4 _public_4305c4
#define public_4305d2 _public_4305d2
#define public_430610 _public_430610
#define public_430618 _public_430618
#define public_43061e _public_43061e
#define public_430637 _public_430637
#define public_43063f _public_43063f
#define public_430649 _public_430649
#define public_430652 _public_430652

PROC_DECLARE(0x430500, internal_430500, public_430500);
extern "C" NAKED register_t __cdecl internal_430500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8ead @0x430502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8ead
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x1C], 0
        je public_430652
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        add edi, 4
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+8]
        lea ebx, ds:[edi+8]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi+4], edx
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0xC], cl
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_43056f
        xor eax, eax
        jmp public_430577
        public_43056f : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        public_430577 : nop
        test eax, eax
        jge public_43057d
        xor eax, eax
        public_43057d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov dword ptr ds : [edi+0x10], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        cmp ecx, edx
        mov ebp, eax
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, ecx
        je public_4305d2
        public_4305a6 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x28], 1
        je public_4305c4
        mov ecx, ebp
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp], eax
        public_4305c4 : nop
        add ebp, 4
        add ebx, 4
        cmp ebx, edx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_4305a6
        public_4305d2 : nop
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov cl, byte ptr ds : [esi+0x20]
        mov al, byte ptr ds : [edi+0x1C]
        xor cl, al
        and cl, 1
        xor cl, al
        mov byte ptr ds : [edi+0x1C], cl
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x20], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x24], ecx
        mov dl, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [edi+0x28], dl
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        mov byte ptr ss : [esp+0x28], 2
        jne public_430610
        xor eax, eax
        jmp public_430618
        public_430610 : nop
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        public_430618 : nop
        test eax, eax
        jge public_43061e
        xor eax, eax
        public_43061e : nop
        shl eax, 2
        push eax
        call public_5b7e84
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x34]
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 4
        cmp esi, ecx
        je public_430649
        public_430637 : nop
        test eax, eax
        je public_43063f
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_43063f : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_430637
        public_430649 : nop
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x30], eax
        mov dword ptr ds : [edi+0x34], eax
        pop ebx
        public_430652 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x430500)
    }
}

#undef public_43056f
#undef public_430577
#undef public_43057d
#undef public_4305a6
#undef public_4305c4
#undef public_4305d2
#undef public_430610
#undef public_430618
#undef public_43061e
#undef public_430637
#undef public_43063f
#undef public_430649
#undef public_430652
