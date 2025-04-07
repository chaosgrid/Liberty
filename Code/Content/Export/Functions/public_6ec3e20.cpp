#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec3e50 _public_6ec3e50
#define public_6ec3e78 _public_6ec3e78
#define public_6ec3e83 _public_6ec3e83
#define public_6ec3e86 _public_6ec3e86
#define public_6ec3ea6 _public_6ec3ea6
#define public_6ec3eaa _public_6ec3eaa
#define public_6ec3eaf _public_6ec3eaf
#define public_6ec3eb3 _public_6ec3eb3
#define public_6ec3ec4 _public_6ec3ec4
#define public_6ec3ee7 _public_6ec3ee7
#define public_6ec3eeb _public_6ec3eeb
#define public_6ec3f0d _public_6ec3f0d
#define public_6ec3f12 _public_6ec3f12
#define public_6ec3f1a _public_6ec3f1a
#define public_6ec3f1f _public_6ec3f1f
#define public_6ec3f22 _public_6ec3f22
#define public_6ec3f39 _public_6ec3f39
#define public_6ec3f6b _public_6ec3f6b
#define public_6ec3f6d _public_6ec3f6d

PROC_DECLARE(0x6ec3e20, internal_6ec3e20, public_6ec3e20);
extern "C" NAKED register_t __cdecl internal_6ec3e20()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        xor al, al
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], esi
        je public_6ec3f6d
        mov eax, dword ptr ds : [esi+0x28]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov cl, 1
        mov byte ptr ss : [esp+0xB], cl
        je public_6ec3f6b
        push ebx
        push edi
        mov edi, edi
        public_6ec3e50 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea ebx, ss:[ebp+8]
        push ebx
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ec3f39
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6ec3eeb
        public_6ec3e78 : nop
        lea esi, ds:[edi+0xC]
        test esi, esi
        jne public_6ec3e83
        mov eax, dword ptr ds : [ebx]
        jmp public_6ec3eb3
        public_6ec3e83 : nop
        lea eax, ds:[ebx+4]
        public_6ec3e86 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ec3eaa
        test cl, cl
        je public_6ec3ea6
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ec3eaa
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec3e86
        public_6ec3ea6 : nop
        xor eax, eax
        jmp public_6ec3eaf
        public_6ec3eaa : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec3eaf : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6ec3eb3 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec3ec4
        mov edi, dword ptr ds : [edi]
        cmp edi, ecx
        jne public_6ec3e78
        jmp public_6ec3ee7
        public_6ec3ec4 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x20]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+0x20], ecx
        public_6ec3ee7 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6ec3eeb : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec3f12
        mov eax, dword ptr ds : [eax+4]
        test eax, 0x3FFFFFFF
        je public_6ec3f1f
        cmp eax, dword ptr ds : [esi+0x30]
        je public_6ec3f0d
        mov cl, byte ptr ds : [esi+0x34]
        test cl, cl
        je public_6ec3f1f
        public_6ec3f0d : nop
        mov dword ptr ss : [ebp+0x3C], eax
        jmp public_6ec3f1f
        public_6ec3f12 : nop
        mov edx, dword ptr ss : [ebp+0x3C]
        cmp edx, dword ptr ds : [eax+4]
        je public_6ec3f1f
        public_6ec3f1a : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ec3f1f : nop
        mov ebp, dword ptr ss : [ebp]
        public_6ec3f22 : nop
        cmp ebp, dword ptr ds : [esi+0x28]
        jne public_6ec3e50
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        public_6ec3f39 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6ec3f1a
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax], esi
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        push ebp
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x2C]
        add esp, 4
        dec ecx
        mov ebp, esi
        mov dword ptr ds : [eax+0x2C], ecx
        mov esi, eax
        jmp public_6ec3f22
        public_6ec3f6b : nop
        mov al, cl
        public_6ec3f6d : nop
        pop esi
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6ec3e20)
    }
}

#undef public_6ec3e50
#undef public_6ec3e78
#undef public_6ec3e83
#undef public_6ec3e86
#undef public_6ec3ea6
#undef public_6ec3eaa
#undef public_6ec3eaf
#undef public_6ec3eb3
#undef public_6ec3ec4
#undef public_6ec3ee7
#undef public_6ec3eeb
#undef public_6ec3f0d
#undef public_6ec3f12
#undef public_6ec3f1a
#undef public_6ec3f1f
#undef public_6ec3f22
#undef public_6ec3f39
#undef public_6ec3f6b
#undef public_6ec3f6d
