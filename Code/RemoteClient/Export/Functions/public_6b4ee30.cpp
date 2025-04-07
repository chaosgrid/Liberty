#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f450);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f750);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f770);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f820);

#define public_6b4ee50 _public_6b4ee50
#define public_6b4ee63 _public_6b4ee63
#define public_6b4ee66 _public_6b4ee66
#define public_6b4ee6a _public_6b4ee6a
#define public_6b4eec9 _public_6b4eec9
#define public_6b4eee1 _public_6b4eee1
#define public_6b4eeeb _public_6b4eeeb
#define public_6b4eeef _public_6b4eeef
#define public_6b4ef00 _public_6b4ef00
#define public_6b4ef3b _public_6b4ef3b
#define public_6b4ef4a _public_6b4ef4a
#define public_6b4ef6b _public_6b4ef6b
#define public_6b4ef8c _public_6b4ef8c
#define public_6b4ef9a _public_6b4ef9a
#define public_6b4efb9 _public_6b4efb9
#define public_6b4efc5 _public_6b4efc5
#define public_6b4efe1 _public_6b4efe1
#define public_6b4effc _public_6b4effc
#define public_6b4f003 _public_6b4f003
#define public_6b4f026 _public_6b4f026

PROC_DECLARE(0x6b4ee30, internal_6b4ee30, public_6b4ee30);
extern "C" NAKED register_t __cdecl internal_6b4ee30()
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
        je public_6b4ee6a
        lea esp, ss:[esp]
        public_6b4ee50 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0x10]
        mov esi, ebp
        setb al
        test al, al
        je public_6b4ee63
        mov ebp, dword ptr ss : [ebp]
        jmp public_6b4ee66
        public_6b4ee63 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6b4ee66 : nop
        cmp ebp, edx
        jne public_6b4ee50
        public_6b4ee6a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6b4efe1
        push 0
        push esi
        mov ecx, edi
        call public_6b4f750
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0x10
        push ebx
        push eax
        call public_6b4f820
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6b4eec9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6b4eec9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0x10]
        jb public_6b4eec9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b4eeef
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b4eeef
        public_6b4eec9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6b4eee1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b4eeeb
        public_6b4eee1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b4eeeb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6b4eeeb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6b4eeef : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6b4efc5
        lea ecx, ds:[ecx]
        public_6b4ef00 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        jne public_6b4efc5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b4ef6b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6b4ef3b
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6b4efb9
        public_6b4ef3b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b4ef4a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b4f6a0
        public_6b4ef4a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x48], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6b4f6f0
        jmp public_6b4efb9
        public_6b4ef6b : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6b4ef8c
        mov byte ptr ds : [eax+0x48], 1
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x48], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6b4efb9
        public_6b4ef8c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b4ef9a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b4f6f0
        public_6b4ef9a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x48], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6b4f6a0
        public_6b4efb9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6b4ef00
        public_6b4efc5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6b4efe1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6b4effc
        cmp esi, dword ptr ds : [ecx]
        je public_6b4f003
        lea ecx, ss:[esp+0x10]
        call public_6b4f770
        mov edx, dword ptr ss : [esp+0x10]
        public_6b4effc : nop
        mov eax, dword ptr ds : [edx+0x10]
        cmp eax, dword ptr ds : [ebx]
        jae public_6b4f026
        public_6b4f003 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6b4f450
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
        public_6b4f026 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b4ee30)
    }
}

#undef public_6b4ee50
#undef public_6b4ee63
#undef public_6b4ee66
#undef public_6b4ee6a
#undef public_6b4eec9
#undef public_6b4eee1
#undef public_6b4eeeb
#undef public_6b4eeef
#undef public_6b4ef00
#undef public_6b4ef3b
#undef public_6b4ef4a
#undef public_6b4ef6b
#undef public_6b4ef8c
#undef public_6b4ef9a
#undef public_6b4efb9
#undef public_6b4efc5
#undef public_6b4efe1
#undef public_6b4effc
#undef public_6b4f003
#undef public_6b4f026
