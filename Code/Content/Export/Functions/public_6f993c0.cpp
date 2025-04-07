#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fb1839);

#define public_6f993f6 _public_6f993f6
#define public_6f9940b _public_6f9940b
#define public_6f99417 _public_6f99417
#define public_6f99425 _public_6f99425
#define public_6f9942b _public_6f9942b
#define public_6f99435 _public_6f99435
#define public_6f99446 _public_6f99446
#define public_6f99452 _public_6f99452
#define public_6f99460 _public_6f99460
#define public_6f9946e _public_6f9946e
#define public_6f99474 _public_6f99474
#define public_6f99480 _public_6f99480
#define public_6f99491 _public_6f99491
#define public_6f9949b _public_6f9949b
#define public_6f994f4 _public_6f994f4
#define public_6f9950d _public_6f9950d
#define public_6f9953c _public_6f9953c
#define public_6f9954c _public_6f9954c

PROC_DECLARE(0x6f993c0, internal_6f993c0, public_6f993c0);
extern "C" NAKED register_t __cdecl internal_6f993c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1839 @0x6f993c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1839
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+8], esi
        je public_6f9954c
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        xor ebx, ebx
        public_6f993f6 : nop
        mov eax, dword ptr ds : [edi+4]
        dec eax
        je public_6f99452
        dec eax
        je public_6f9940b
        dec eax
        je public_6f9949b
        jmp public_6f9953c
        public_6f9940b : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, edx
        cmp eax, ecx
        je public_6f9942b
        public_6f99417 : nop
        cmp dword ptr ds : [eax], 1
        je public_6f99425
        add eax, 4
        cmp eax, ecx
        jne public_6f99417
        jmp public_6f9942b
        public_6f99425 : nop
        cmp byte ptr ss : [esp+0x3C], bl
        je public_6f9949b
        public_6f9942b : nop
        mov eax, edx
        cmp eax, ecx
        je public_6f9953c
        public_6f99435 : nop
        cmp dword ptr ds : [eax], 2
        je public_6f99446
        add eax, 4
        cmp eax, ecx
        jne public_6f99435
        jmp public_6f9953c
        public_6f99446 : nop
        cmp byte ptr ss : [esp+0x40], bl
        jne public_6f9953c
        jmp public_6f9949b
        public_6f99452 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, edx
        cmp eax, ecx
        je public_6f99474
        mov edi, edi
        public_6f99460 : nop
        cmp dword ptr ds : [eax], 1
        je public_6f9946e
        add eax, 4
        cmp eax, ecx
        jne public_6f99460
        jmp public_6f99474
        public_6f9946e : nop
        cmp byte ptr ss : [esp+0x3C], bl
        jne public_6f9949b
        public_6f99474 : nop
        mov eax, edx
        cmp eax, ecx
        je public_6f9953c
        mov edi, edi
        public_6f99480 : nop
        cmp dword ptr ds : [eax], 2
        je public_6f99491
        add eax, 4
        cmp eax, ecx
        jne public_6f99480
        jmp public_6f9953c
        public_6f99491 : nop
        cmp byte ptr ss : [esp+0x40], bl
        je public_6f9953c
        public_6f9949b : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_6fb303c]
        mov esi, dword ptr ds : [edi+0xC]
        cmp esi, dword ptr ds : [edi+0x10]
        je public_6f9950d
        public_6f994f4 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x10]
        add esi, 4
        cmp esi, eax
        jne public_6f994f4
        public_6f9950d : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3038]
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6fb328c]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov esi, dword ptr ss : [esp+0x10]
        public_6f9953c : nop
        mov eax, dword ptr ds : [esi+0x10]
        add edi, 0x18
        cmp edi, eax
        jne public_6f993f6
        pop ebp
        pop ebx
        public_6f9954c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x10
        UNREACHABLE_TRAP(0x6f993c0)
    }
}

#undef public_6f993f6
#undef public_6f9940b
#undef public_6f99417
#undef public_6f99425
#undef public_6f9942b
#undef public_6f99435
#undef public_6f99446
#undef public_6f99452
#undef public_6f99460
#undef public_6f9946e
#undef public_6f99474
#undef public_6f99480
#undef public_6f99491
#undef public_6f9949b
#undef public_6f994f4
#undef public_6f9950d
#undef public_6f9953c
#undef public_6f9954c
