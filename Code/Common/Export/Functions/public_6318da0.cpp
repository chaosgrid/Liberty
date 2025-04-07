#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318da0);
CLANG_FORWARD_PROC_SYMBOL(public_6319870);
CLANG_FORWARD_PROC_SYMBOL(public_631a500);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342880);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);
CLANG_FORWARD_PROC_SYMBOL(public_6342990);

#define public_6318dc0 _public_6318dc0
#define public_6318dd3 _public_6318dd3
#define public_6318dd6 _public_6318dd6
#define public_6318dda _public_6318dda
#define public_6318e39 _public_6318e39
#define public_6318e51 _public_6318e51
#define public_6318e5b _public_6318e5b
#define public_6318e5f _public_6318e5f
#define public_6318e70 _public_6318e70
#define public_6318eab _public_6318eab
#define public_6318eba _public_6318eba
#define public_6318edb _public_6318edb
#define public_6318efc _public_6318efc
#define public_6318f0a _public_6318f0a
#define public_6318f29 _public_6318f29
#define public_6318f35 _public_6318f35
#define public_6318f51 _public_6318f51
#define public_6318f6c _public_6318f6c
#define public_6318f73 _public_6318f73
#define public_6318f96 _public_6318f96

PROC_DECLARE(0x6318da0, internal_6318da0, public_6318da0);
extern "C" NAKED register_t __cdecl internal_6318da0()
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
        je public_6318dda
        lea esp, ss:[esp]
        public_6318dc0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6318dd3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6318dd6
        public_6318dd3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6318dd6 : nop
        cmp ebp, edx
        jne public_6318dc0
        public_6318dda : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6318f51
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
        call public_631a500
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6318e39
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6318e39
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6318e39
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6318e5f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6318e5f
        public_6318e39 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6318e51
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6318e5b
        public_6318e51 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6318e5b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6318e5b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6318e5f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6318f35
        lea ecx, ds:[ecx]
        public_6318e70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6318f35
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6318edb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6318eab
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6318f29
        public_6318eab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6318eba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6318eba : nop
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
        jmp public_6318f29
        public_6318edb : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6318efc
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6318f29
        public_6318efc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6318f0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6318f0a : nop
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
        public_6318f29 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6318e70
        public_6318f35 : nop
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
        public_6318f51 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6318f6c
        cmp esi, dword ptr ds : [ecx]
        je public_6318f73
        lea ecx, ss:[esp+0x10]
        call public_6342990
        mov edx, dword ptr ss : [esp+0x10]
        public_6318f6c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6318f96
        public_6318f73 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6319870
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
        public_6318f96 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6318da0)
    }
}

#undef public_6318dc0
#undef public_6318dd3
#undef public_6318dd6
#undef public_6318dda
#undef public_6318e39
#undef public_6318e51
#undef public_6318e5b
#undef public_6318e5f
#undef public_6318e70
#undef public_6318eab
#undef public_6318eba
#undef public_6318edb
#undef public_6318efc
#undef public_6318f0a
#undef public_6318f29
#undef public_6318f35
#undef public_6318f51
#undef public_6318f6c
#undef public_6318f73
#undef public_6318f96
