#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6341e10);
CLANG_FORWARD_PROC_SYMBOL(public_6342590);
CLANG_FORWARD_PROC_SYMBOL(public_6342880);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);
CLANG_FORWARD_PROC_SYMBOL(public_6342990);
CLANG_FORWARD_PROC_SYMBOL(public_6342a90);

#define public_6341e30 _public_6341e30
#define public_6341e43 _public_6341e43
#define public_6341e46 _public_6341e46
#define public_6341e4a _public_6341e4a
#define public_6341ea9 _public_6341ea9
#define public_6341ec1 _public_6341ec1
#define public_6341ecb _public_6341ecb
#define public_6341ecf _public_6341ecf
#define public_6341ee0 _public_6341ee0
#define public_6341f1b _public_6341f1b
#define public_6341f2a _public_6341f2a
#define public_6341f4b _public_6341f4b
#define public_6341f6c _public_6341f6c
#define public_6341f7a _public_6341f7a
#define public_6341f99 _public_6341f99
#define public_6341fa5 _public_6341fa5
#define public_6341fc1 _public_6341fc1
#define public_6341fdc _public_6341fdc
#define public_6341fe3 _public_6341fe3
#define public_6342006 _public_6342006

PROC_DECLARE(0x6341e10, internal_6341e10, public_6341e10);
extern "C" NAKED register_t __cdecl internal_6341e10()
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
        je public_6341e4a
        lea esp, ss:[esp]
        public_6341e30 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6341e43
        mov ebp, dword ptr ss : [ebp]
        jmp public_6341e46
        public_6341e43 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6341e46 : nop
        cmp ebp, edx
        jne public_6341e30
        public_6341e4a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6341fc1
        push 0
        push esi
        mov ecx, edi
        call public_6342880
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6342a90
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6341ea9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6341ea9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6341ea9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6341ecf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6341ecf
        public_6341ea9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6341ec1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6341ecb
        public_6341ec1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6341ecb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6341ecb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6341ecf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6341fa5
        lea ecx, ds:[ecx]
        public_6341ee0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6341fa5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6341f4b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6341f1b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6341f99
        public_6341f1b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6341f2a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6341f2a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6341f99
        public_6341f4b : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6341f6c
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6341f99
        public_6341f6c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6341f7a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6341f7a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6341f99 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6341ee0
        public_6341fa5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6341fc1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6341fdc
        cmp esi, dword ptr ds : [ecx]
        je public_6341fe3
        lea ecx, ss:[esp+0x10]
        call public_6342990
        mov edx, dword ptr ss : [esp+0x10]
        public_6341fdc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6342006
        public_6341fe3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6342590
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
        public_6342006 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6341e10)
    }
}

#undef public_6341e30
#undef public_6341e43
#undef public_6341e46
#undef public_6341e4a
#undef public_6341ea9
#undef public_6341ec1
#undef public_6341ecb
#undef public_6341ecf
#undef public_6341ee0
#undef public_6341f1b
#undef public_6341f2a
#undef public_6341f4b
#undef public_6341f6c
#undef public_6341f7a
#undef public_6341f99
#undef public_6341fa5
#undef public_6341fc1
#undef public_6341fdc
#undef public_6341fe3
#undef public_6342006
