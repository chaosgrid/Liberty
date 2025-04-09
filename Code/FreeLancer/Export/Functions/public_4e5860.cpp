#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_4e5860);
CLANG_FORWARD_PROC_SYMBOL(public_4e5d70);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_4e5880 _public_4e5880
#define public_4e5895 _public_4e5895
#define public_4e5898 _public_4e5898
#define public_4e589c _public_4e589c
#define public_4e58fd _public_4e58fd
#define public_4e5915 _public_4e5915
#define public_4e591f _public_4e591f
#define public_4e5923 _public_4e5923
#define public_4e5931 _public_4e5931
#define public_4e596f _public_4e596f
#define public_4e597e _public_4e597e
#define public_4e599f _public_4e599f
#define public_4e59c0 _public_4e59c0
#define public_4e59ce _public_4e59ce
#define public_4e59ed _public_4e59ed
#define public_4e59f9 _public_4e59f9
#define public_4e5a15 _public_4e5a15
#define public_4e5a30 _public_4e5a30
#define public_4e5a39 _public_4e5a39
#define public_4e5a5c _public_4e5a5c

PROC_DECLARE(0x4e5860, internal_4e5860, public_4e5860);
extern "C" NAKED register_t __cdecl internal_4e5860()
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
        je public_4e589c
        lea esp, ss:[esp]
        public_4e5880 : nop
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_4e5895
        mov ebp, dword ptr ss : [ebp]
        jmp public_4e5898
        public_4e5895 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_4e5898 : nop
        cmp ebp, edx
        jne public_4e5880
        public_4e589c : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_4e5a15
        push 0
        push esi
        mov ecx, edi
        call public_40f110
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4e58fd
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4e58fd
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_4e58fd
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4e5923
        mov dword ptr ds : [eax+8], ebx
        jmp public_4e5923
        public_4e58fd : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_4e5915
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_4e591f
        public_4e5915 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4e591f
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_4e591f : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_4e5923 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4e59f9
        public_4e5931 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_4e59f9
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4e599f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4e596f
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4e59ed
        public_4e596f : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_4e597e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_4e597e : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_4e59ed
        public_4e599f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4e59c0
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4e59ed
        public_4e59c0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4e59ce
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_4e59ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_4e59ed : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4e5931
        public_4e59f9 : nop
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
        public_4e5a15 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4e5a30
        cmp esi, dword ptr ds : [ecx]
        je public_4e5a39
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x10]
        public_4e5a30 : nop
        mov ax, word ptr ds : [edx+0xC]
        cmp ax, word ptr ds : [ebx]
        jae public_4e5a5c
        public_4e5a39 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4e5d70
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
        public_4e5a5c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4e5860)
    }
}

#undef public_4e5880
#undef public_4e5895
#undef public_4e5898
#undef public_4e589c
#undef public_4e58fd
#undef public_4e5915
#undef public_4e591f
#undef public_4e5923
#undef public_4e5931
#undef public_4e596f
#undef public_4e597e
#undef public_4e599f
#undef public_4e59c0
#undef public_4e59ce
#undef public_4e59ed
#undef public_4e59f9
#undef public_4e5a15
#undef public_4e5a30
#undef public_4e5a39
#undef public_4e5a5c
