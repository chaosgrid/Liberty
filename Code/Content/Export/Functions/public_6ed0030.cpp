#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab0ab);

#define public_6ed0090 _public_6ed0090
#define public_6ed00ad _public_6ed00ad
#define public_6ed00d9 _public_6ed00d9
#define public_6ed00f8 _public_6ed00f8
#define public_6ed0100 _public_6ed0100
#define public_6ed0106 _public_6ed0106
#define public_6ed0121 _public_6ed0121
#define public_6ed0129 _public_6ed0129
#define public_6ed0133 _public_6ed0133

PROC_DECLARE(0x6ed0030, internal_6ed0030, public_6ed0030);
extern "C" NAKED register_t __cdecl internal_6ed0030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab0ab @0x6ed0032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab0ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ss : [ebp+8]
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi+8], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ed00d9
        nop 
        public_6ed0090 : nop
        mov eax, dword ptr ds : [ebx+4]
        push 0xC
        mov dword ptr ss : [esp+0x2C], eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebx
        jne public_6ed00ad
        mov ecx, eax
        public_6ed00ad : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6ed0090
        public_6ed00d9 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov dl, byte ptr ss : [ebp+0x18]
        mov byte ptr ds : [esi+0x18], dl
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0
        jne public_6ed00f8
        xor eax, eax
        jmp public_6ed0100
        public_6ed00f8 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        sub eax, ecx
        sar eax, 2
        public_6ed0100 : nop
        test eax, eax
        jge public_6ed0106
        xor eax, eax
        public_6ed0106 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [esi+0x1C], eax
        mov edx, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x1C]
        add esp, 4
        cmp eax, edx
        je public_6ed0133
        public_6ed0121 : nop
        test ecx, ecx
        je public_6ed0129
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        public_6ed0129 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ed0121
        public_6ed0133 : nop
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi+0x24], ecx
        mov cl, byte ptr ss : [ebp+0x28]
        mov byte ptr ds : [esi+0x28], cl
        mov edx, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ed0030)
    }
}

#undef public_6ed0090
#undef public_6ed00ad
#undef public_6ed00d9
#undef public_6ed00f8
#undef public_6ed0100
#undef public_6ed0106
#undef public_6ed0121
#undef public_6ed0129
#undef public_6ed0133
