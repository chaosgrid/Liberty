#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f408c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f451b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f46470);
CLANG_FORWARD_PROC_SYMBOL(public_6f46490);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f408e0 _public_6f408e0
#define public_6f408f3 _public_6f408f3
#define public_6f408f6 _public_6f408f6
#define public_6f408fa _public_6f408fa
#define public_6f40959 _public_6f40959
#define public_6f40971 _public_6f40971
#define public_6f4097b _public_6f4097b
#define public_6f4097f _public_6f4097f
#define public_6f40990 _public_6f40990
#define public_6f409cb _public_6f409cb
#define public_6f409da _public_6f409da
#define public_6f409fb _public_6f409fb
#define public_6f40a1c _public_6f40a1c
#define public_6f40a2a _public_6f40a2a
#define public_6f40a49 _public_6f40a49
#define public_6f40a55 _public_6f40a55
#define public_6f40a71 _public_6f40a71
#define public_6f40a8c _public_6f40a8c
#define public_6f40a93 _public_6f40a93
#define public_6f40ab6 _public_6f40ab6

PROC_DECLARE(0x6f408c0, internal_6f408c0, public_6f408c0);
extern "C" NAKED register_t __cdecl internal_6f408c0()
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
        je public_6f408fa
        lea esp, ss:[esp]
        public_6f408e0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f408f3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f408f6
        public_6f408f3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f408f6 : nop
        cmp ebp, edx
        jne public_6f408e0
        public_6f408fa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f40a71
        push 0
        push esi
        mov ecx, edi
        call public_6f46470
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f36ef0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f40959
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f40959
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f40959
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4097f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4097f
        public_6f40959 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f40971
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4097b
        public_6f40971 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4097b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f4097b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f4097f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f40a55
        lea ecx, ds:[ecx]
        public_6f40990 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_6f40a55
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f409fb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6f409cb
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f40a49
        public_6f409cb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f409da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f409da : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f40a49
        public_6f409fb : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6f40a1c
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f40a49
        public_6f40a1c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f40a2a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f40a2a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f40a49 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f40990
        public_6f40a55 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f40a71 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f40a8c
        cmp esi, dword ptr ds : [ecx]
        je public_6f40a93
        lea ecx, ss:[esp+0x10]
        call public_6f46490
        mov edx, dword ptr ss : [esp+0x10]
        public_6f40a8c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f40ab6
        public_6f40a93 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f451b0
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
        public_6f40ab6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f408c0)
    }
}

#undef public_6f408e0
#undef public_6f408f3
#undef public_6f408f6
#undef public_6f408fa
#undef public_6f40959
#undef public_6f40971
#undef public_6f4097b
#undef public_6f4097f
#undef public_6f40990
#undef public_6f409cb
#undef public_6f409da
#undef public_6f409fb
#undef public_6f40a1c
#undef public_6f40a2a
#undef public_6f40a49
#undef public_6f40a55
#undef public_6f40a71
#undef public_6f40a8c
#undef public_6f40a93
#undef public_6f40ab6
