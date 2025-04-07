#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f53350);
CLANG_FORWARD_PROC_SYMBOL(public_6f546e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f550f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55120);
CLANG_FORWARD_PROC_SYMBOL(public_6f556e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f53370 _public_6f53370
#define public_6f53383 _public_6f53383
#define public_6f53386 _public_6f53386
#define public_6f5338a _public_6f5338a
#define public_6f533e9 _public_6f533e9
#define public_6f53401 _public_6f53401
#define public_6f5340b _public_6f5340b
#define public_6f5340f _public_6f5340f
#define public_6f53420 _public_6f53420
#define public_6f5346d _public_6f5346d
#define public_6f5347c _public_6f5347c
#define public_6f534a3 _public_6f534a3
#define public_6f534d0 _public_6f534d0
#define public_6f534de _public_6f534de
#define public_6f53503 _public_6f53503
#define public_6f5350f _public_6f5350f
#define public_6f5352e _public_6f5352e
#define public_6f53549 _public_6f53549
#define public_6f53550 _public_6f53550
#define public_6f53573 _public_6f53573

PROC_DECLARE(0x6f53350, internal_6f53350, public_6f53350);
extern "C" NAKED register_t __cdecl internal_6f53350()
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
        je public_6f5338a
        lea esp, ss:[esp]
        public_6f53370 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f53383
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f53386
        public_6f53383 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f53386 : nop
        cmp ebp, edx
        jne public_6f53370
        public_6f5338a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f5352e
        push 0
        push esi
        mov ecx, edi
        call public_6f550f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f556e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f533e9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f533e9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f533e9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5340f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f5340f
        public_6f533e9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f53401
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f5340b
        public_6f53401 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5340b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f5340b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f5340f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f5350f
        lea ecx, ds:[ecx]
        public_6f53420 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x108]
        test cl, cl
        jne public_6f5350f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f534a3
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x108]
        test dl, dl
        jne public_6f5346d
        mov byte ptr ds : [eax+0x108], 1
        mov byte ptr ds : [ecx+0x108], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x108], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f53503
        public_6f5346d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5347c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f5347c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x108], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x108], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f53503
        public_6f534a3 : nop
        mov dl, byte ptr ds : [ecx+0x108]
        test dl, dl
        jne public_6f534d0
        mov byte ptr ds : [eax+0x108], 1
        mov byte ptr ds : [ecx+0x108], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x108], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f53503
        public_6f534d0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f534de
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f534de : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x108], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x108], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f53503 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f53420
        public_6f5350f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x108], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f5352e : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f53549
        cmp esi, dword ptr ds : [ecx]
        je public_6f53550
        lea ecx, ss:[esp+0x10]
        call public_6f55120
        mov edx, dword ptr ss : [esp+0x10]
        public_6f53549 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f53573
        public_6f53550 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f546e0
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
        public_6f53573 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f53350)
    }
}

#undef public_6f53370
#undef public_6f53383
#undef public_6f53386
#undef public_6f5338a
#undef public_6f533e9
#undef public_6f53401
#undef public_6f5340b
#undef public_6f5340f
#undef public_6f53420
#undef public_6f5346d
#undef public_6f5347c
#undef public_6f534a3
#undef public_6f534d0
#undef public_6f534de
#undef public_6f53503
#undef public_6f5350f
#undef public_6f5352e
#undef public_6f53549
#undef public_6f53550
#undef public_6f53573
