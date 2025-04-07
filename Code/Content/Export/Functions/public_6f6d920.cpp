#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f14400);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f579c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d920);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe14);

#define public_6f6d99b _public_6f6d99b
#define public_6f6da10 _public_6f6da10
#define public_6f6da3a _public_6f6da3a
#define public_6f6da6a _public_6f6da6a
#define public_6f6da75 _public_6f6da75
#define public_6f6da90 _public_6f6da90
#define public_6f6dace _public_6f6dace
#define public_6f6dad9 _public_6f6dad9
#define public_6f6daf3 _public_6f6daf3
#define public_6f6db00 _public_6f6db00
#define public_6f6db1a _public_6f6db1a
#define public_6f6db50 _public_6f6db50
#define public_6f6dc20 _public_6f6dc20
#define public_6f6dc3a _public_6f6dc3a
#define public_6f6dc4d _public_6f6dc4d
#define public_6f6dc59 _public_6f6dc59
#define public_6f6dc68 _public_6f6dc68
#define public_6f6dc75 _public_6f6dc75
#define public_6f6dcb6 _public_6f6dcb6
#define public_6f6dcbd _public_6f6dcbd
#define public_6f6dce0 _public_6f6dce0
#define public_6f6dd02 _public_6f6dd02
#define public_6f6dd2f _public_6f6dd2f
#define public_6f6dd31 _public_6f6dd31
#define public_6f6dd51 _public_6f6dd51
#define public_6f6dd76 _public_6f6dd76

PROC_DECLARE(0x6f6d920, internal_6f6d920, public_6f6d920);
extern "C" NAKED register_t __cdecl internal_6f6d920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafe14 @0x6f6d922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe14
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push ebx
        push ebp
        push edi
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0xC4]
        xor ebp, ebp
        push ecx
        mov dword ptr ss : [esp+0xC0], ebp
        call public_6f75f30
        mov edx, dword ptr ss : [esp+0xCC]
        mov edi, eax
        mov eax, dword ptr ds : [edx]
        add esp, 4
        push eax
        mov ecx, edi
        call public_6f73930
        mov ebx, eax
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x54], ebx
        je public_6f6dd51
        cmp dword ptr ds : [ebx+0x14C], ebp
        je public_6f6d99b
        cmp dword ptr ds : [ebx+0x154], 0xFFFFFFFF
        jne public_6f6dd51
        public_6f6d99b : nop
        mov eax, dword ptr ds : [ebx+0x154]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_6f66220
        mov ecx, dword ptr ss : [esp+0x50]
        add esp, 8
        cmp ecx, ebp
        je public_6f6dd51
        mov eax, dword ptr ss : [esp+0x4C]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6f6dd51
        mov dl, byte ptr ss : [esp+0xF]
        push esi
        mov byte ptr ss : [esp+0x38], dl
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0xC4], 1
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        lea esi, ds:[ecx+4]
        cmp esi, eax
        mov byte ptr ss : [esp+0xC0], 2
        je public_6f6da75
        nop 
        public_6f6da10 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f73990
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        je public_6f6da3a
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eb5770
        jmp public_6f6da6a
        public_6f6da3a : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6f49bc0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x30], eax
        call public_6eb5770
        public_6f6da6a : nop
        mov eax, dword ptr ss : [esp+0x50]
        add esi, 4
        cmp esi, eax
        jne public_6f6da10
        public_6f6da75 : nop
        mov esi, dword ptr ss : [esp+0x3C]
        cmp esi, ebp
        je public_6f6dad9
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, ebp
        je public_6f6dad9
        cmp esi, ecx
        je public_6f6dad9
        public_6f6da90 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6f67090
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push ebx
        call public_6f579c0
        mov ecx, ebx
        call public_6f34ca0
        cmp eax, ebp
        je public_6f6dace
        mov edx, dword ptr ds : [eax]
        push ebp
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        push eax
        call public_6f34b70
        mov ecx, dword ptr ds : [esi]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        public_6f6dace : nop
        mov eax, dword ptr ss : [esp+0x40]
        add esi, 4
        cmp esi, eax
        jne public_6f6da90
        public_6f6dad9 : nop
        mov al, byte ptr ss : [esp+0xD4]
        test al, al
        mov bl, byte ptr ss : [esp+0xD0]
        jne public_6f6daf3
        test bl, bl
        je public_6f6dd76
        public_6f6daf3 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp esi, ecx
        je public_6f6db1a
        nop 
        public_6f6db00 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6f67090
        mov ecx, dword ptr ss : [esp+0x24]
        add esi, 4
        add esp, 4
        cmp esi, ecx
        jne public_6f6db00
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f6db1a : nop
        test bl, bl
        je public_6f6dd31
        cmp esi, ebp
        je public_6f6dd31
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, ebp
        je public_6f6dd31
        cmp esi, ecx
        mov ebp, esi
        je public_6f6dd2f
        mov ebx, dword ptr ds : [public_6fb3408]
        lea esp, ss:[esp]
        public_6f6db50 : nop
        mov esi, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        call public_6f14400
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        mov byte ptr ss : [esp+0xC0], 3
        je public_6f6dc59
        mov edx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 0x13
        jne public_6f6dcbd
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x110]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [eax+0x114]
        mov ecx, dword ptr ds : [public_6fb3248]
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [eax+0x118]
        mov dword ptr ss : [esp+0x6C], edx
        mov ecx, dword ptr ds : [eax+0x11C]
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x70], ecx
        mov dl, byte ptr ds : [eax+0x120]
        mov byte ptr ss : [esp+0x74], dl
        mov ecx, dword ptr ds : [eax+0x124]
        mov dword ptr ss : [esp+0x78], ecx
        mov edx, dword ptr ds : [eax+0x128]
        mov dword ptr ss : [esp+0x7C], edx
        mov ecx, dword ptr ds : [eax+0x12C]
        mov dword ptr ss : [esp+0x80], ecx
        mov edx, dword ptr ds : [eax+0x130]
        mov ecx, dword ptr ds : [public_6fb3244]
        mov dword ptr ss : [esp+0x84], edx
        mov eax, dword ptr ds : [eax+0x134]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f6dc4d
        nop 
        public_6f6dc20 : nop
        cmp dword ptr ds : [eax+0xC], esi
        je public_6f6dc3a
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6dc20
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x60]
        jmp public_6f6dcb6
        public_6f6dc3a : nop
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x6C], edx
        mov byte ptr ss : [esp+0x74], 1
        mov dword ptr ss : [esp+0x78], ecx
        public_6f6dc4d : nop
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x60]
        jmp public_6f6dcb6
        public_6f6dc59 : nop
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov esi, dword ptr ds : [esi+4]
        je public_6f6dcbd
        public_6f6dc68 : nop
        cmp dword ptr ds : [eax+0xC], esi
        je public_6f6dc75
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6dc68
        jmp public_6f6dcbd
        public_6f6dc75 : nop
        mov esi, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_6fb31a0]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x98], edi
        mov dword ptr ss : [esp+0x94], 1
        mov byte ptr ss : [esp+0xA0], 1
        mov dword ptr ss : [esp+0xA4], esi
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x8C]
        public_6f6dcb6 : nop
        push ecx
        push eax
        call ebx
        add esp, 8
        public_6f6dcbd : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xC4], 4
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x30]
        je public_6f6dd02
        lea ecx, ds:[ecx]
        public_6f6dce0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x30]
        jne public_6f6dce0
        public_6f6dd02 : nop
        lea ecx, ss:[esp+0x2C]
        call public_6ecfec0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xC0], 2
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x20]
        add ebp, 4
        cmp ebp, eax
        jne public_6f6db50
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f6dd2f : nop
        xor ebp, ebp
        public_6f6dd31 : nop
        push esi
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        call public_6fa8fe0
        add esp, 8
        pop esi
        public_6f6dd51 : nop
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xB8]
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 
        public_6f6dd76 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        jmp public_6f6dd31
        UNREACHABLE_TRAP(0x6f6d920)
    }
}

#undef public_6f6d99b
#undef public_6f6da10
#undef public_6f6da3a
#undef public_6f6da6a
#undef public_6f6da75
#undef public_6f6da90
#undef public_6f6dace
#undef public_6f6dad9
#undef public_6f6daf3
#undef public_6f6db00
#undef public_6f6db1a
#undef public_6f6db50
#undef public_6f6dc20
#undef public_6f6dc3a
#undef public_6f6dc4d
#undef public_6f6dc59
#undef public_6f6dc68
#undef public_6f6dc75
#undef public_6f6dcb6
#undef public_6f6dcbd
#undef public_6f6dce0
#undef public_6f6dd02
#undef public_6f6dd2f
#undef public_6f6dd31
#undef public_6f6dd51
#undef public_6f6dd76
