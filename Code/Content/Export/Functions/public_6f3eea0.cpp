#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f417d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46290);
CLANG_FORWARD_PROC_SYMBOL(public_6f462b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f468c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f3eec0 _public_6f3eec0
#define public_6f3eed3 _public_6f3eed3
#define public_6f3eed6 _public_6f3eed6
#define public_6f3eeda _public_6f3eeda
#define public_6f3ef39 _public_6f3ef39
#define public_6f3ef51 _public_6f3ef51
#define public_6f3ef5b _public_6f3ef5b
#define public_6f3ef5f _public_6f3ef5f
#define public_6f3ef70 _public_6f3ef70
#define public_6f3efab _public_6f3efab
#define public_6f3efba _public_6f3efba
#define public_6f3efdb _public_6f3efdb
#define public_6f3effc _public_6f3effc
#define public_6f3f00a _public_6f3f00a
#define public_6f3f029 _public_6f3f029
#define public_6f3f035 _public_6f3f035
#define public_6f3f051 _public_6f3f051
#define public_6f3f06c _public_6f3f06c
#define public_6f3f073 _public_6f3f073
#define public_6f3f096 _public_6f3f096

PROC_DECLARE(0x6f3eea0, internal_6f3eea0, public_6f3eea0);
extern "C" NAKED register_t __cdecl internal_6f3eea0()
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
        je public_6f3eeda
        lea esp, ss:[esp]
        public_6f3eec0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3eed3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3eed6
        public_6f3eed3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3eed6 : nop
        cmp ebp, edx
        jne public_6f3eec0
        public_6f3eeda : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3f051
        push 0
        push esi
        mov ecx, edi
        call public_6f46290
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f468c0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3ef39
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3ef39
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3ef39
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3ef5f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3ef5f
        public_6f3ef39 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3ef51
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ef5b
        public_6f3ef51 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3ef5b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3ef5b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3ef5f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3f035
        lea ecx, ds:[ecx]
        public_6f3ef70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x70]
        test cl, cl
        jne public_6f3f035
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3efdb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_6f3efab
        mov byte ptr ds : [eax+0x70], 1
        mov byte ptr ds : [ecx+0x70], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3f029
        public_6f3efab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3efba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3efba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x70], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x70], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3f029
        public_6f3efdb : nop
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_6f3effc
        mov byte ptr ds : [eax+0x70], 1
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x70], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3f029
        public_6f3effc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3f00a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3f00a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x70], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3f029 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3ef70
        public_6f3f035 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x70], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3f051 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3f06c
        cmp esi, dword ptr ds : [ecx]
        je public_6f3f073
        lea ecx, ss:[esp+0x10]
        call public_6f462b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3f06c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3f096
        public_6f3f073 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f417d0
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
        public_6f3f096 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3eea0)
    }
}

#undef public_6f3eec0
#undef public_6f3eed3
#undef public_6f3eed6
#undef public_6f3eeda
#undef public_6f3ef39
#undef public_6f3ef51
#undef public_6f3ef5b
#undef public_6f3ef5f
#undef public_6f3ef70
#undef public_6f3efab
#undef public_6f3efba
#undef public_6f3efdb
#undef public_6f3effc
#undef public_6f3f00a
#undef public_6f3f029
#undef public_6f3f035
#undef public_6f3f051
#undef public_6f3f06c
#undef public_6f3f073
#undef public_6f3f096
