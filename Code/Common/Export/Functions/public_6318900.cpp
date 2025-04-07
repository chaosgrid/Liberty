#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318900);
CLANG_FORWARD_PROC_SYMBOL(public_6319390);
CLANG_FORWARD_PROC_SYMBOL(public_63195e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b20);
CLANG_FORWARD_PROC_SYMBOL(public_631a1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6318920 _public_6318920
#define public_6318933 _public_6318933
#define public_6318936 _public_6318936
#define public_631893a _public_631893a
#define public_6318999 _public_6318999
#define public_63189b1 _public_63189b1
#define public_63189bb _public_63189bb
#define public_63189bf _public_63189bf
#define public_63189d0 _public_63189d0
#define public_6318a0b _public_6318a0b
#define public_6318a1a _public_6318a1a
#define public_6318a3b _public_6318a3b
#define public_6318a5c _public_6318a5c
#define public_6318a6a _public_6318a6a
#define public_6318a89 _public_6318a89
#define public_6318a95 _public_6318a95
#define public_6318ab1 _public_6318ab1
#define public_6318acc _public_6318acc
#define public_6318ad3 _public_6318ad3
#define public_6318af6 _public_6318af6

PROC_DECLARE(0x6318900, internal_6318900, public_6318900);
extern "C" NAKED register_t __cdecl internal_6318900()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_631893a
        lea esp, ss:[esp]
        public_6318920 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6318933
        mov ebp, dword ptr ss : [ebp]
        jmp public_6318936
        public_6318933 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6318936 : nop
        cmp ebp, edx
        jne public_6318920
        public_631893a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6318ab1
        push 0
        push esi
        mov ecx, edi
        call public_63195e0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_631a1d0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6318999
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6318999
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6318999
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_63189bf
        mov dword ptr ds : [eax+8], ebx
        jmp public_63189bf
        public_6318999 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_63189b1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_63189bb
        public_63189b1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_63189bb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_63189bb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_63189bf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6318a95
        lea ecx, ds:[ecx]
        public_63189d0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x40]
        test cl, cl
        jne public_6318a95
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6318a3b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6318a0b
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6318a89
        public_6318a0b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6318a1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6318a1a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6318a89
        public_6318a3b : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6318a5c
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6318a89
        public_6318a5c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6318a6a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6318a6a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6318a89 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_63189d0
        public_6318a95 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6318ab1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6318acc
        cmp esi, dword ptr ds : [ecx]
        je public_6318ad3
        lea ecx, ss:[esp+0x10]
        call public_6319b20
        mov edx, dword ptr ss : [esp+0x10]
        public_6318acc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6318af6
        public_6318ad3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6319390
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6318af6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6318900)
    }
}

#undef public_6318920
#undef public_6318933
#undef public_6318936
#undef public_631893a
#undef public_6318999
#undef public_63189b1
#undef public_63189bb
#undef public_63189bf
#undef public_63189d0
#undef public_6318a0b
#undef public_6318a1a
#undef public_6318a3b
#undef public_6318a5c
#undef public_6318a6a
#undef public_6318a89
#undef public_6318a95
#undef public_6318ab1
#undef public_6318acc
#undef public_6318ad3
#undef public_6318af6
