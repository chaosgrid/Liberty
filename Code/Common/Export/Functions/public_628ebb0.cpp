#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_6290310);
CLANG_FORWARD_PROC_SYMBOL(public_6290390);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393559);

#define public_628ebea _public_628ebea
#define public_628ebec _public_628ebec
#define public_628ec02 _public_628ec02
#define public_628ec04 _public_628ec04
#define public_628ec3a _public_628ec3a
#define public_628ec50 _public_628ec50
#define public_628ec58 _public_628ec58
#define public_628ec76 _public_628ec76
#define public_628ec89 _public_628ec89
#define public_628ec93 _public_628ec93
#define public_628ed32 _public_628ed32
#define public_628ed3c _public_628ed3c
#define public_628ed52 _public_628ed52
#define public_628ed5a _public_628ed5a

PROC_DECLARE(0x628ebb0, internal_628ebb0, public_628ebb0);
extern "C" NAKED register_t __cdecl internal_628ebb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393559 @0x628ebb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393559
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ds : [ebx], offset public_639c288
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], 0
        je public_628ebea
        lea eax, ss:[ebp+4]
        jmp public_628ebec
        public_628ebea : nop
        xor eax, eax
        public_628ebec : nop
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], offset public_639c2a0
        test ebp, ebp
        je public_628ec02
        lea eax, ss:[ebp+0xC]
        jmp public_628ec04
        public_628ec02 : nop
        xor eax, eax
        public_628ec04 : nop
        mov dword ptr ds : [ebx+0xC], offset public_639c40c
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x10], ecx
        mov dword ptr ds : [ebx+0xC], offset public_639c3fc
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], eax
        mov cl, byte ptr ss : [ebp+0x1C]
        mov byte ptr ds : [ebx+0x1C], cl
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        mov byte ptr ss : [esp+0x18], 2
        jne public_628ec3a
        xor edx, edx
        jmp public_628ec50
        public_628ec3a : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_628ec50 : nop
        test edx, edx
        mov eax, edx
        jge public_628ec58
        xor eax, eax
        public_628ec58 : nop
        imul eax, 0x34
        push edi
        push eax
        call public_6391d9c
        mov dword ptr ds : [ebx+0x20], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x20]
        add esp, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_628ec93
        public_628ec76 : nop
        test eax, eax
        je public_628ec89
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        public_628ec89 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ecx
        jne public_628ec76
        public_628ec93 : nop
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], eax
        mov cl, byte ptr ss : [ebp+0x2C]
        lea esi, ds:[ebx+0x2C]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ss : [ebp+0x2D]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ss : [ebp+0x38]
        push 0x14
        mov byte ptr ss : [esp+0x20], 3
        mov byte ptr ds : [esi+0xC], al
        call public_6391d9c
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x11], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov edi, dword ptr ds : [esi+8]
        push 0x14
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x10], 0
        mov byte ptr ds : [eax+0x11], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ss : [ebp+0x30]
        mov edx, dword ptr ds : [ecx+4]
        add esp, 8
        push edi
        push edx
        mov ecx, esi
        call public_6290310
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edx
        pop edi
        je public_628ed52
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], 0
        jne public_628ed3c
        public_628ed32 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x11], 0
        je public_628ed32
        public_628ed3c : nop
        mov dword ptr ds : [eax], ecx
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6290390
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_628ed5a
        public_628ed52 : nop
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_628ed5a : nop
        mov edx, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [ebx+0x40], edx
        mov dword ptr ds : [ebx], offset public_639c3bc
        mov dword ptr ds : [ebx+4], offset public_639c3a4
        mov dword ptr ds : [ebx+0xC], offset public_639c3d4
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x628ebb0)
    }
}

#undef public_628ebea
#undef public_628ebec
#undef public_628ec02
#undef public_628ec04
#undef public_628ec3a
#undef public_628ec50
#undef public_628ec58
#undef public_628ec76
#undef public_628ec89
#undef public_628ec93
#undef public_628ed32
#undef public_628ed3c
#undef public_628ed52
#undef public_628ed5a
