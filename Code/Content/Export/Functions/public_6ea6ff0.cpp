#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7450);
CLANG_FORWARD_PROC_SYMBOL(public_6efdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f32920);
CLANG_FORWARD_PROC_SYMBOL(public_6f32b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa990a);

#define public_6ea7090 _public_6ea7090
#define public_6ea7108 _public_6ea7108
#define public_6ea7118 _public_6ea7118
#define public_6ea711b _public_6ea711b
#define public_6ea711f _public_6ea711f
#define public_6ea714d _public_6ea714d
#define public_6ea718e _public_6ea718e
#define public_6ea7197 _public_6ea7197
#define public_6ea71c6 _public_6ea71c6
#define public_6ea71ce _public_6ea71ce
#define public_6ea71d8 _public_6ea71d8
#define public_6ea71f1 _public_6ea71f1
#define public_6ea722f _public_6ea722f
#define public_6ea7238 _public_6ea7238
#define public_6ea72a9 _public_6ea72a9
#define public_6ea72ba _public_6ea72ba
#define public_6ea72cb _public_6ea72cb
#define public_6ea72ee _public_6ea72ee

PROC_DECLARE(0x6ea6ff0, internal_6ea6ff0, public_6ea6ff0);
extern "C" NAKED register_t __cdecl internal_6ea6ff0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6fa990a @0x6ea6ff8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa990a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x161C
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ds : [edi], offset public_6fb385c
        mov ecx, dword ptr ss : [esp+0x163C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+4]
        push 0xBF800000
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x163C], ebx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edi], offset public_6fb43c0
        call dword ptr ds : [public_6fb36a4]
        add esp, 8
        lea ecx, ss:[esp+0xC4]
        call dword ptr ds : [public_6fb300c]
        lea eax, ss:[esp+0xC4]
        push eax
/*FIXUP push offset public_6fb43a4 @0x6ea7060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb43a4
        mov byte ptr ss : [esp+0x163C], 1
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0xC4]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ea71f1
        mov ebp, dword ptr ds : [public_6fb3030]
/*FIXUP public_6ea7090 : nop
        push offset public_6fb43a0 @0x6ea7090*/
  FIXUP public_6ea7090 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb43a0
        lea ecx, ss:[esp+0xC8]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6ea71d8
        lea ecx, ss:[esp+0x80]
        call public_6f32920
        lea ecx, ss:[esp+0x18]
        call ebp
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f32b70
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x44], edx
        mov ecx, 0x11
        lea esi, ss:[esp+0x8C]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov edi, dword ptr ds : [public_6fd0820]
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [public_6fd0824]
        add esp, 0xC
        cmp esi, ecx
        mov al, 1
        je public_6ea711f
        public_6ea7108 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        cmp al, bl
        mov edi, esi
        je public_6ea7118
        mov esi, dword ptr ds : [esi]
        jmp public_6ea711b
        public_6ea7118 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ea711b : nop
        cmp esi, ecx
        jne public_6ea7108
        public_6ea711f : nop
        cmp byte ptr ds : [public_6fd0828], bl
        je public_6ea714d
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, offset public_6fd081c
        call public_6ea7450
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        mov byte ptr ss : [esp+0x20], 1
        jmp public_6ea71d8
        public_6ea714d : nop
        cmp al, bl
        mov dword ptr ss : [esp+0x14], edi
        je public_6ea7197
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, offset public_6fd081c
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax]
        jne public_6ea718e
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, offset public_6fd081c
        mov byte ptr ss : [esp+0x27], 1
        call public_6ea7450
        jmp public_6ea71ce
        public_6ea718e : nop
        lea ecx, ss:[esp+0x14]
        call public_6efdfa0
        public_6ea7197 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x13]
        push edx
        jae public_6ea71c6
        lea eax, ss:[esp+0x3C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, offset public_6fd081c
        mov byte ptr ss : [esp+0x27], 1
        call public_6ea7450
        jmp public_6ea71ce
        public_6ea71c6 : nop
        mov byte ptr ss : [esp+0x17], bl
        lea eax, ss:[esp+0x18]
        public_6ea71ce : nop
        lea ecx, ss:[esp+0x20]
        push eax
        call public_6fa6e80
        public_6ea71d8 : nop
        lea ecx, ss:[esp+0xC4]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ea7090
        mov edi, dword ptr ss : [esp+0x24]
        public_6ea71f1 : nop
        lea ecx, ss:[esp+0x14EC]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x14EC]
        mov byte ptr ss : [esp+0x1634], 3
        call dword ptr ds : [public_6fb304c]
        mov eax, dword ptr ss : [esp+0x14F0]
        cmp eax, ebx
        je public_6ea7238
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea722f
        cmp cl, 0xFF
        je public_6ea722f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea7238
        public_6ea722f : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea7238 : nop
        mov dword ptr ss : [esp+0x14F0], ebx
        mov dword ptr ss : [esp+0x14F4], ebx
        mov dword ptr ss : [esp+0x14F8], ebx
        mov edx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0xCC]
        mov byte ptr ss : [esp+0x163C], 4
        call dword ptr ds : [public_6fb3308]
        mov eax, dword ptr ss : [esp+0xD4]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_6ea72cb
        cmp dword ptr ss : [esp+0xD8], ebx
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6ea72ba
        mov eax, dword ptr ss : [esp+0xDC]
        cmp eax, ebx
        je public_6ea72a9
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0xE0], ebx
        public_6ea72a9 : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        push ecx
        call esi
        mov dword ptr ss : [esp+0xD8], ebx
        public_6ea72ba : nop
        mov edx, dword ptr ss : [esp+0xD4]
        push edx
        call esi
        mov dword ptr ss : [esp+0xD4], ebp
        public_6ea72cb : nop
        mov eax, dword ptr ss : [esp+0xDC]
        cmp eax, ebx
        je public_6ea72ee
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0xE0], ebx
        public_6ea72ee : nop
        push 1
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0xE8], ebx
        mov byte ptr ss : [esp+0x1638], bl
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x162C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1628
        ret 8
        UNREACHABLE_TRAP(0x6ea6ff0)
    }
}

#undef public_6ea7090
#undef public_6ea7108
#undef public_6ea7118
#undef public_6ea711b
#undef public_6ea711f
#undef public_6ea714d
#undef public_6ea718e
#undef public_6ea7197
#undef public_6ea71c6
#undef public_6ea71ce
#undef public_6ea71d8
#undef public_6ea71f1
#undef public_6ea722f
#undef public_6ea7238
#undef public_6ea72a9
#undef public_6ea72ba
#undef public_6ea72cb
#undef public_6ea72ee
