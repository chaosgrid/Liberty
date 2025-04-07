#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627a8a0);
CLANG_FORWARD_PROC_SYMBOL(public_627aec0);
CLANG_FORWARD_PROC_SYMBOL(public_627b160);
CLANG_FORWARD_PROC_SYMBOL(public_632d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632d480);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_627a8c0 _public_627a8c0
#define public_627a8d3 _public_627a8d3
#define public_627a8d6 _public_627a8d6
#define public_627a8da _public_627a8da
#define public_627a939 _public_627a939
#define public_627a951 _public_627a951
#define public_627a95b _public_627a95b
#define public_627a95f _public_627a95f
#define public_627a970 _public_627a970
#define public_627a9ab _public_627a9ab
#define public_627a9ba _public_627a9ba
#define public_627a9db _public_627a9db
#define public_627a9fc _public_627a9fc
#define public_627aa0a _public_627aa0a
#define public_627aa29 _public_627aa29
#define public_627aa35 _public_627aa35
#define public_627aa51 _public_627aa51
#define public_627aa6c _public_627aa6c
#define public_627aa73 _public_627aa73
#define public_627aa96 _public_627aa96

PROC_DECLARE(0x627a8a0, internal_627a8a0, public_627a8a0);
extern "C" NAKED register_t __cdecl internal_627a8a0()
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
        je public_627a8da
        lea esp, ss:[esp]
        public_627a8c0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_627a8d3
        mov ebp, dword ptr ss : [ebp]
        jmp public_627a8d6
        public_627a8d3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_627a8d6 : nop
        cmp ebp, edx
        jne public_627a8c0
        public_627a8da : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_627aa51
        push 0
        push esi
        mov ecx, edi
        call public_632d3f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_627b160
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_627a939
        cmp ebp, dword ptr ds : [edi+8]
        jne public_627a939
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_627a939
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_627a95f
        mov dword ptr ds : [eax+8], ebx
        jmp public_627a95f
        public_627a939 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_627a951
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_627a95b
        public_627a951 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_627a95b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_627a95b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_627a95f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_627aa35
        lea ecx, ds:[ecx]
        public_627a970 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_627aa35
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_627a9db
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_627a9ab
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_627aa29
        public_627a9ab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_627a9ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_627a9ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_627aa29
        public_627a9db : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_627a9fc
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_627aa29
        public_627a9fc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_627aa0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_627aa0a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_627aa29 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_627a970
        public_627aa35 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_627aa51 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_627aa6c
        cmp esi, dword ptr ds : [ecx]
        je public_627aa73
        lea ecx, ss:[esp+0x10]
        call public_632d480
        mov edx, dword ptr ss : [esp+0x10]
        public_627aa6c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_627aa96
        public_627aa73 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_627aec0
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
        public_627aa96 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x627a8a0)
    }
}

#undef public_627a8c0
#undef public_627a8d3
#undef public_627a8d6
#undef public_627a8da
#undef public_627a939
#undef public_627a951
#undef public_627a95b
#undef public_627a95f
#undef public_627a970
#undef public_627a9ab
#undef public_627a9ba
#undef public_627a9db
#undef public_627a9fc
#undef public_627aa0a
#undef public_627aa29
#undef public_627aa35
#undef public_627aa51
#undef public_627aa6c
#undef public_627aa73
#undef public_627aa96
