#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ebe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41170);
CLANG_FORWARD_PROC_SYMBOL(public_6f46210);
CLANG_FORWARD_PROC_SYMBOL(public_6f46230);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f468a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3ec00 _public_6f3ec00
#define public_6f3ec13 _public_6f3ec13
#define public_6f3ec16 _public_6f3ec16
#define public_6f3ec1a _public_6f3ec1a
#define public_6f3ec79 _public_6f3ec79
#define public_6f3ec91 _public_6f3ec91
#define public_6f3ec9b _public_6f3ec9b
#define public_6f3ec9f _public_6f3ec9f
#define public_6f3ecb0 _public_6f3ecb0
#define public_6f3eceb _public_6f3eceb
#define public_6f3ecfa _public_6f3ecfa
#define public_6f3ed1b _public_6f3ed1b
#define public_6f3ed3c _public_6f3ed3c
#define public_6f3ed4a _public_6f3ed4a
#define public_6f3ed69 _public_6f3ed69
#define public_6f3ed75 _public_6f3ed75
#define public_6f3ed91 _public_6f3ed91
#define public_6f3edac _public_6f3edac
#define public_6f3edb3 _public_6f3edb3
#define public_6f3edd6 _public_6f3edd6

PROC_DECLARE(0x6f3ebe0, internal_6f3ebe0, public_6f3ebe0);
extern "C" NAKED register_t __cdecl internal_6f3ebe0()
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
        je public_6f3ec1a
        lea esp, ss:[esp]
        public_6f3ec00 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3ec13
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3ec16
        public_6f3ec13 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3ec16 : nop
        cmp ebp, edx
        jne public_6f3ec00
        public_6f3ec1a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3ed91
        push 0
        push esi
        mov ecx, edi
        call public_6f46210
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f468a0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3ec79
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3ec79
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3ec79
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3ec9f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3ec9f
        public_6f3ec79 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3ec91
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ec9b
        public_6f3ec91 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3ec9b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3ec9b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3ec9f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3ed75
        lea ecx, ds:[ecx]
        public_6f3ecb0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x4C]
        test cl, cl
        jne public_6f3ed75
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3ed1b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6f3eceb
        mov byte ptr ds : [eax+0x4C], 1
        mov byte ptr ds : [ecx+0x4C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3ed69
        public_6f3eceb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3ecfa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3ecfa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x4C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x4C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3ed69
        public_6f3ed1b : nop
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6f3ed3c
        mov byte ptr ds : [eax+0x4C], 1
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x4C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3ed69
        public_6f3ed3c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3ed4a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3ed4a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x4C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3ed69 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3ecb0
        public_6f3ed75 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x4C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3ed91 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3edac
        cmp esi, dword ptr ds : [ecx]
        je public_6f3edb3
        lea ecx, ss:[esp+0x10]
        call public_6f46230
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3edac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3edd6
        public_6f3edb3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f41170
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
        public_6f3edd6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3ebe0)
    }
}

#undef public_6f3ec00
#undef public_6f3ec13
#undef public_6f3ec16
#undef public_6f3ec1a
#undef public_6f3ec79
#undef public_6f3ec91
#undef public_6f3ec9b
#undef public_6f3ec9f
#undef public_6f3ecb0
#undef public_6f3eceb
#undef public_6f3ecfa
#undef public_6f3ed1b
#undef public_6f3ed3c
#undef public_6f3ed4a
#undef public_6f3ed69
#undef public_6f3ed75
#undef public_6f3ed91
#undef public_6f3edac
#undef public_6f3edb3
#undef public_6f3edd6
