#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed06d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1a30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2370);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3170);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3c60);

#define public_6ed06f0 _public_6ed06f0
#define public_6ed0703 _public_6ed0703
#define public_6ed0706 _public_6ed0706
#define public_6ed070a _public_6ed070a
#define public_6ed0769 _public_6ed0769
#define public_6ed0781 _public_6ed0781
#define public_6ed078b _public_6ed078b
#define public_6ed078f _public_6ed078f
#define public_6ed07a0 _public_6ed07a0
#define public_6ed07db _public_6ed07db
#define public_6ed07ea _public_6ed07ea
#define public_6ed080b _public_6ed080b
#define public_6ed082c _public_6ed082c
#define public_6ed083a _public_6ed083a
#define public_6ed0859 _public_6ed0859
#define public_6ed0865 _public_6ed0865
#define public_6ed0881 _public_6ed0881
#define public_6ed089c _public_6ed089c
#define public_6ed08a3 _public_6ed08a3
#define public_6ed08c6 _public_6ed08c6

PROC_DECLARE(0x6ed06d0, internal_6ed06d0, public_6ed06d0);
extern "C" NAKED register_t __cdecl internal_6ed06d0()
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
        je public_6ed070a
        lea esp, ss:[esp]
        public_6ed06f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6ed0703
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ed0706
        public_6ed0703 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ed0706 : nop
        cmp ebp, edx
        jne public_6ed06f0
        public_6ed070a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ed0881
        push 0
        push esi
        mov ecx, edi
        call public_6fa3c60
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ed3170
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ed0769
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ed0769
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6ed0769
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ed078f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ed078f
        public_6ed0769 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ed0781
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ed078b
        public_6ed0781 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ed078b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ed078b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ed078f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ed0865
        lea ecx, ds:[ecx]
        public_6ed07a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x40]
        test cl, cl
        jne public_6ed0865
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ed080b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6ed07db
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ed0859
        public_6ed07db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ed07ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6ed07ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6ed0859
        public_6ed080b : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_6ed082c
        mov byte ptr ds : [eax+0x40], 1
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x40], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ed0859
        public_6ed082c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ed083a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6ed083a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x40], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6ed0859 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ed07a0
        public_6ed0865 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x40], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ed0881 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ed089c
        cmp esi, dword ptr ds : [ecx]
        je public_6ed08a3
        lea ecx, ss:[esp+0x10]
        call public_6ed2370
        mov edx, dword ptr ss : [esp+0x10]
        public_6ed089c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6ed08c6
        public_6ed08a3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ed1a30
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
        public_6ed08c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ed06d0)
    }
}

#undef public_6ed06f0
#undef public_6ed0703
#undef public_6ed0706
#undef public_6ed070a
#undef public_6ed0769
#undef public_6ed0781
#undef public_6ed078b
#undef public_6ed078f
#undef public_6ed07a0
#undef public_6ed07db
#undef public_6ed07ea
#undef public_6ed080b
#undef public_6ed082c
#undef public_6ed083a
#undef public_6ed0859
#undef public_6ed0865
#undef public_6ed0881
#undef public_6ed089c
#undef public_6ed08a3
#undef public_6ed08c6
