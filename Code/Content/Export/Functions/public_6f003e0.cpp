#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f00400 _public_6f00400
#define public_6f00413 _public_6f00413
#define public_6f00416 _public_6f00416
#define public_6f0041a _public_6f0041a
#define public_6f00479 _public_6f00479
#define public_6f00491 _public_6f00491
#define public_6f0049b _public_6f0049b
#define public_6f0049f _public_6f0049f
#define public_6f004b0 _public_6f004b0
#define public_6f004eb _public_6f004eb
#define public_6f004fa _public_6f004fa
#define public_6f0051b _public_6f0051b
#define public_6f0053c _public_6f0053c
#define public_6f0054a _public_6f0054a
#define public_6f00569 _public_6f00569
#define public_6f00575 _public_6f00575
#define public_6f00591 _public_6f00591
#define public_6f005ac _public_6f005ac
#define public_6f005b3 _public_6f005b3
#define public_6f005d6 _public_6f005d6

PROC_DECLARE(0x6f003e0, internal_6f003e0, public_6f003e0);
extern "C" NAKED register_t __cdecl internal_6f003e0()
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
        je public_6f0041a
        lea esp, ss:[esp]
        public_6f00400 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f00413
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f00416
        public_6f00413 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f00416 : nop
        cmp ebp, edx
        jne public_6f00400
        public_6f0041a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f00591
        push 0
        push esi
        mov ecx, edi
        call public_6f214c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f305b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f00479
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f00479
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f00479
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f0049f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f0049f
        public_6f00479 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f00491
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f0049b
        public_6f00491 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f0049b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f0049b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f0049f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f00575
        lea ecx, ds:[ecx]
        public_6f004b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6f00575
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f0051b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f004eb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f00569
        public_6f004eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f004fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f004fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f00569
        public_6f0051b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f0053c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f00569
        public_6f0053c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f0054a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f0054a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f00569 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f004b0
        public_6f00575 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f00591 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f005ac
        cmp esi, dword ptr ds : [ecx]
        je public_6f005b3
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov edx, dword ptr ss : [esp+0x10]
        public_6f005ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f005d6
        public_6f005b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f7c9e0
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
        public_6f005d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f003e0)
    }
}

#undef public_6f00400
#undef public_6f00413
#undef public_6f00416
#undef public_6f0041a
#undef public_6f00479
#undef public_6f00491
#undef public_6f0049b
#undef public_6f0049f
#undef public_6f004b0
#undef public_6f004eb
#undef public_6f004fa
#undef public_6f0051b
#undef public_6f0053c
#undef public_6f0054a
#undef public_6f00569
#undef public_6f00575
#undef public_6f00591
#undef public_6f005ac
#undef public_6f005b3
#undef public_6f005d6
