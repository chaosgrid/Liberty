#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb6059 _public_6eb6059
#define public_6eb606d _public_6eb606d
#define public_6eb6073 _public_6eb6073
#define public_6eb6081 _public_6eb6081
#define public_6eb60c2 _public_6eb60c2
#define public_6eb60db _public_6eb60db
#define public_6eb60ee _public_6eb60ee
#define public_6eb60f9 _public_6eb60f9
#define public_6eb60fc _public_6eb60fc
#define public_6eb6101 _public_6eb6101
#define public_6eb612a _public_6eb612a
#define public_6eb6143 _public_6eb6143
#define public_6eb6156 _public_6eb6156
#define public_6eb6160 _public_6eb6160
#define public_6eb6183 _public_6eb6183
#define public_6eb619b _public_6eb619b
#define public_6eb61ae _public_6eb61ae
#define public_6eb61bb _public_6eb61bb
#define public_6eb61bd _public_6eb61bd
#define public_6eb61c3 _public_6eb61c3
#define public_6eb61ec _public_6eb61ec
#define public_6eb61ff _public_6eb61ff
#define public_6eb620a _public_6eb620a
#define public_6eb620d _public_6eb620d
#define public_6eb620f _public_6eb620f
#define public_6eb6212 _public_6eb6212
#define public_6eb621e _public_6eb621e

PROC_DECLARE(0x6eb5ff0, internal_6eb5ff0, public_6eb5ff0);
extern "C" NAKED register_t __cdecl internal_6eb5ff0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eb6760
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eb6059
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eb6059
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eb6059
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eb6073
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb6073
        public_6eb6059 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eb606d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eb6073
        public_6eb606d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eb6073
        mov dword ptr ds : [eax], ebx
        public_6eb6073 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eb621e
        public_6eb6081 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6eb621e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eb6160
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6eb60c2
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eb6212
        public_6eb60c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb6101
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb60db
        mov dword ptr ds : [edx+4], eax
        public_6eb60db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb60ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb60fc
        public_6eb60ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eb60f9
        mov dword ptr ds : [edx], ecx
        jmp public_6eb60fc
        public_6eb60f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb60fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb6101 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb612a
        mov dword ptr ds : [edi+4], ecx
        public_6eb612a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb6143
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb620f
        public_6eb6143 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb6156
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb620f
        public_6eb6156 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb620f
        public_6eb6160 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6eb6183
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eb6212
        public_6eb6183 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eb61c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb619b
        mov dword ptr ds : [edx+4], eax
        public_6eb619b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb61ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb61bd
        public_6eb61ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eb61bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb61bd
        public_6eb61bb : nop
        mov dword ptr ds : [edx], ecx
        public_6eb61bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb61c3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb61ec
        mov dword ptr ds : [edi+4], ecx
        public_6eb61ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb61ff
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb620d
        public_6eb61ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb620a
        mov dword ptr ds : [edi], edx
        jmp public_6eb620d
        public_6eb620a : nop
        mov dword ptr ds : [edi+8], edx
        public_6eb620d : nop
        mov dword ptr ds : [edx], ecx
        public_6eb620f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb6212 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb6081
        public_6eb621e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6eb5ff0)
    }
}

#undef public_6eb6059
#undef public_6eb606d
#undef public_6eb6073
#undef public_6eb6081
#undef public_6eb60c2
#undef public_6eb60db
#undef public_6eb60ee
#undef public_6eb60f9
#undef public_6eb60fc
#undef public_6eb6101
#undef public_6eb612a
#undef public_6eb6143
#undef public_6eb6156
#undef public_6eb6160
#undef public_6eb6183
#undef public_6eb619b
#undef public_6eb61ae
#undef public_6eb61bb
#undef public_6eb61bd
#undef public_6eb61c3
#undef public_6eb61ec
#undef public_6eb61ff
#undef public_6eb620a
#undef public_6eb620d
#undef public_6eb620f
#undef public_6eb6212
#undef public_6eb621e
