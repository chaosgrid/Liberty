#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4870);
CLANG_FORWARD_PROC_SYMBOL(public_6fa49e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2082);

#define public_6fa48d0 _public_6fa48d0
#define public_6fa48d8 _public_6fa48d8
#define public_6fa48de _public_6fa48de
#define public_6fa4900 _public_6fa4900
#define public_6fa4908 _public_6fa4908
#define public_6fa4912 _public_6fa4912
#define public_6fa492e _public_6fa492e
#define public_6fa4936 _public_6fa4936
#define public_6fa493c _public_6fa493c
#define public_6fa4960 _public_6fa4960
#define public_6fa4978 _public_6fa4978
#define public_6fa49c3 _public_6fa49c3

PROC_DECLARE(0x6fa4870, internal_6fa4870, public_6fa4870);
extern "C" NAKED register_t __cdecl internal_6fa4870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2082 @0x6fa4872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2082
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6fa49c3
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        push edi
        lea edi, ds:[eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+8], eax
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0xC], cl
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], edi
        jne public_6fa48d0
        xor eax, eax
        jmp public_6fa48d8
        public_6fa48d0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        public_6fa48d8 : nop
        test eax, eax
        jge public_6fa48de
        xor eax, eax
        public_6fa48de : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x10], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        cmp ecx, edx
        je public_6fa4912
        nop 
        lea esp, ss:[esp]
        public_6fa4900 : nop
        test eax, eax
        je public_6fa4908
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6fa4908 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6fa4900
        public_6fa4912 : nop
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], eax
        mov al, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+0x1C], al
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 1
        jne public_6fa492e
        xor eax, eax
        jmp public_6fa4936
        public_6fa492e : nop
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        public_6fa4936 : nop
        test eax, eax
        jge public_6fa493c
        xor eax, eax
        public_6fa493c : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0x20], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov ebx, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebp, eax
        je public_6fa4978
        nop 
        public_6fa4960 : nop
        push ebx
        push ebp
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x34]
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, eax
        jne public_6fa4960
        public_6fa4978 : nop
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi+0x28], ebp
        mov dl, byte ptr ds : [esi+0x30]
        lea eax, ds:[esi+0x38]
        push eax
        lea ecx, ds:[edi+0x34]
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [edi+0x2C], dl
        call public_6fa49e0
        mov dword ptr ds : [edi+0x30], offset public_6fbd50c
        lea ecx, ds:[esi+0x44]
        push ecx
        lea ecx, ds:[edi+0x40]
        mov byte ptr ss : [esp+0x24], 3
        call public_6fa0050
        mov edx, dword ptr ds : [esi+0x114]
        mov dword ptr ds : [edi+0x110], edx
        mov dword ptr ds : [edi], offset public_6fbd550
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6fa49c3 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6fa4870)
    }
}

#undef public_6fa48d0
#undef public_6fa48d8
#undef public_6fa48de
#undef public_6fa4900
#undef public_6fa4908
#undef public_6fa4912
#undef public_6fa492e
#undef public_6fa4936
#undef public_6fa493c
#undef public_6fa4960
#undef public_6fa4978
#undef public_6fa49c3
