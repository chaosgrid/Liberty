#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed04c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed16a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3150);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cca0);

#define public_6ed04e0 _public_6ed04e0
#define public_6ed04f3 _public_6ed04f3
#define public_6ed04f6 _public_6ed04f6
#define public_6ed04fa _public_6ed04fa
#define public_6ed0559 _public_6ed0559
#define public_6ed0571 _public_6ed0571
#define public_6ed057b _public_6ed057b
#define public_6ed057f _public_6ed057f
#define public_6ed0590 _public_6ed0590
#define public_6ed05cb _public_6ed05cb
#define public_6ed05da _public_6ed05da
#define public_6ed05fb _public_6ed05fb
#define public_6ed061c _public_6ed061c
#define public_6ed062a _public_6ed062a
#define public_6ed0649 _public_6ed0649
#define public_6ed0655 _public_6ed0655
#define public_6ed0671 _public_6ed0671
#define public_6ed068c _public_6ed068c
#define public_6ed0693 _public_6ed0693
#define public_6ed06b6 _public_6ed06b6

PROC_DECLARE(0x6ed04c0, internal_6ed04c0, public_6ed04c0);
extern "C" NAKED register_t __cdecl internal_6ed04c0()
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
        je public_6ed04fa
        lea esp, ss:[esp]
        public_6ed04e0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6ed04f3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ed04f6
        public_6ed04f3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ed04f6 : nop
        cmp ebp, edx
        jne public_6ed04e0
        public_6ed04fa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ed0671
        push 0
        push esi
        mov ecx, edi
        call public_6f7cc80
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ed3150
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ed0559
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ed0559
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6ed0559
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ed057f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ed057f
        public_6ed0559 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ed0571
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed057b
        public_6ed0571 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ed057b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ed057b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ed057f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ed0655
        lea ecx, ds:[ecx]
        public_6ed0590 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x5C]
        test cl, cl
        jne public_6ed0655
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ed05fb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6ed05cb
        mov byte ptr ds : [eax+0x5C], 1
        mov byte ptr ds : [ecx+0x5C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ed0649
        public_6ed05cb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ed05da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6ed05da : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x5C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6ed0649
        public_6ed05fb : nop
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6ed061c
        mov byte ptr ds : [eax+0x5C], 1
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x5C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ed0649
        public_6ed061c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ed062a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6ed062a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x5C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6ed0649 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ed0590
        public_6ed0655 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ed0671 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ed068c
        cmp esi, dword ptr ds : [ecx]
        je public_6ed0693
        lea ecx, ss:[esp+0x10]
        call public_6f7cca0
        mov edx, dword ptr ss : [esp+0x10]
        public_6ed068c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6ed06b6
        public_6ed0693 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ed16a0
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
        public_6ed06b6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ed04c0)
    }
}

#undef public_6ed04e0
#undef public_6ed04f3
#undef public_6ed04f6
#undef public_6ed04fa
#undef public_6ed0559
#undef public_6ed0571
#undef public_6ed057b
#undef public_6ed057f
#undef public_6ed0590
#undef public_6ed05cb
#undef public_6ed05da
#undef public_6ed05fb
#undef public_6ed061c
#undef public_6ed062a
#undef public_6ed0649
#undef public_6ed0655
#undef public_6ed0671
#undef public_6ed068c
#undef public_6ed0693
#undef public_6ed06b6
