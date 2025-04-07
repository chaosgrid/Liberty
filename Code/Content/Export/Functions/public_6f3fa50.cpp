#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fa50);
CLANG_FORWARD_PROC_SYMBOL(public_6f433e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46390);
CLANG_FORWARD_PROC_SYMBOL(public_6f463b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f46900);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3fa70 _public_6f3fa70
#define public_6f3fa83 _public_6f3fa83
#define public_6f3fa86 _public_6f3fa86
#define public_6f3fa8a _public_6f3fa8a
#define public_6f3fae9 _public_6f3fae9
#define public_6f3fb01 _public_6f3fb01
#define public_6f3fb0b _public_6f3fb0b
#define public_6f3fb0f _public_6f3fb0f
#define public_6f3fb20 _public_6f3fb20
#define public_6f3fb5b _public_6f3fb5b
#define public_6f3fb6a _public_6f3fb6a
#define public_6f3fb8b _public_6f3fb8b
#define public_6f3fbac _public_6f3fbac
#define public_6f3fbba _public_6f3fbba
#define public_6f3fbd9 _public_6f3fbd9
#define public_6f3fbe5 _public_6f3fbe5
#define public_6f3fc01 _public_6f3fc01
#define public_6f3fc1c _public_6f3fc1c
#define public_6f3fc23 _public_6f3fc23
#define public_6f3fc46 _public_6f3fc46

PROC_DECLARE(0x6f3fa50, internal_6f3fa50, public_6f3fa50);
extern "C" NAKED register_t __cdecl internal_6f3fa50()
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
        je public_6f3fa8a
        lea esp, ss:[esp]
        public_6f3fa70 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3fa83
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3fa86
        public_6f3fa83 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3fa86 : nop
        cmp ebp, edx
        jne public_6f3fa70
        public_6f3fa8a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3fc01
        push 0
        push esi
        mov ecx, edi
        call public_6f46390
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f46900
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3fae9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3fae9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3fae9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3fb0f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3fb0f
        public_6f3fae9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3fb01
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3fb0b
        public_6f3fb01 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3fb0b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3fb0b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3fb0f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3fbe5
        lea ecx, ds:[ecx]
        public_6f3fb20 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_6f3fbe5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3fb8b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f3fb5b
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3fbd9
        public_6f3fb5b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3fb6a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3fb6a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x28], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3fbd9
        public_6f3fb8b : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f3fbac
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x28], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3fbd9
        public_6f3fbac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3fbba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3fbba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3fbd9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3fb20
        public_6f3fbe5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3fc01 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3fc1c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3fc23
        lea ecx, ss:[esp+0x10]
        call public_6f463b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3fc1c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3fc46
        public_6f3fc23 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f433e0
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
        public_6f3fc46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3fa50)
    }
}

#undef public_6f3fa70
#undef public_6f3fa83
#undef public_6f3fa86
#undef public_6f3fa8a
#undef public_6f3fae9
#undef public_6f3fb01
#undef public_6f3fb0b
#undef public_6f3fb0f
#undef public_6f3fb20
#undef public_6f3fb5b
#undef public_6f3fb6a
#undef public_6f3fb8b
#undef public_6f3fbac
#undef public_6f3fbba
#undef public_6f3fbd9
#undef public_6f3fbe5
#undef public_6f3fc01
#undef public_6f3fc1c
#undef public_6f3fc23
#undef public_6f3fc46
