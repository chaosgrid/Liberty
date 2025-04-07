#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f37e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b520);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58e9b);

#define public_6f3f4f5 _public_6f3f4f5
#define public_6f3f519 _public_6f3f519
#define public_6f3f51d _public_6f3f51d
#define public_6f3f522 _public_6f3f522
#define public_6f3f592 _public_6f3f592
#define public_6f3f599 _public_6f3f599
#define public_6f3f59b _public_6f3f59b
#define public_6f3f5b4 _public_6f3f5b4
#define public_6f3f5cf _public_6f3f5cf
#define public_6f3f5ea _public_6f3f5ea
#define public_6f3f5f7 _public_6f3f5f7
#define public_6f3f5fd _public_6f3f5fd
#define public_6f3f5ff _public_6f3f5ff

PROC_DECLARE(0x6f3f4c0, internal_6f3f4c0, public_6f3f4c0);
extern "C" NAKED register_t __cdecl internal_6f3f4c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58e9b @0x6f3f4c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58e9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6f3f5ea
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6f3f4f5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3f51d
        test cl, cl
        je public_6f3f519
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3f51d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f3f4f5
        public_6f3f519 : nop
        xor eax, eax
        jmp public_6f3f522
        public_6f3f51d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f3f522 : nop
        test eax, eax
        jne public_6f3f5ea
        push 1
        push 0x118
        call dword ptr ds : [public_6f5a094]
        mov esi, eax
        add esp, 8
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f3f599
        mov ecx, esi
        call public_6f37b50
        lea eax, ds:[esi+0x10C]
        mov dword ptr ds : [eax], offset public_6f5b004
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6f5af50
        mov dword ptr ds : [esi+4], offset public_6f5af34
        mov dword ptr ds : [esi+8], offset public_6f5af18
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x108], ecx
        jne public_6f3f592
        mov dword ptr ds : [esi+0x108], eax
        jmp public_6f3f59b
        public_6f3f592 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6f3f59b
        public_6f3f599 : nop
        xor esi, esi
        public_6f3f59b : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f3f5b4
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], esi
        jmp public_6f3f5ff
        public_6f3f5b4 : nop
        push ebp
        mov ecx, esi
        call public_6f3b520
        mov edi, eax
        test edi, edi
        je public_6f3f5f7
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6f3f5cf
        mov dword ptr ds : [eax], 0
        public_6f3f5cf : nop
        mov ecx, esi
        call public_6f37e00
        push esi
        call dword ptr ds : [public_6f5a090]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f3f5fd
        public_6f3f5ea : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6f3f5ff
        public_6f3f5f7 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f3f5fd : nop
        mov eax, edi
        public_6f3f5ff : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f3f4c0)
    }
}

#undef public_6f3f4f5
#undef public_6f3f519
#undef public_6f3f51d
#undef public_6f3f522
#undef public_6f3f592
#undef public_6f3f599
#undef public_6f3f59b
#undef public_6f3f5b4
#undef public_6f3f5cf
#undef public_6f3f5ea
#undef public_6f3f5f7
#undef public_6f3f5fd
#undef public_6f3f5ff
