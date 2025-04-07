#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1320);
CLANG_FORWARD_PROC_SYMBOL(public_6eb14f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);
CLANG_FORWARD_PROC_SYMBOL(public_6f40080);
CLANG_FORWARD_PROC_SYMBOL(public_6f440e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f400a0 _public_6f400a0
#define public_6f400b3 _public_6f400b3
#define public_6f400b6 _public_6f400b6
#define public_6f400ba _public_6f400ba
#define public_6f40119 _public_6f40119
#define public_6f40131 _public_6f40131
#define public_6f4013b _public_6f4013b
#define public_6f4013f _public_6f4013f
#define public_6f40150 _public_6f40150
#define public_6f4018b _public_6f4018b
#define public_6f4019a _public_6f4019a
#define public_6f401bb _public_6f401bb
#define public_6f401dc _public_6f401dc
#define public_6f401ea _public_6f401ea
#define public_6f40209 _public_6f40209
#define public_6f40215 _public_6f40215
#define public_6f40231 _public_6f40231
#define public_6f4024c _public_6f4024c
#define public_6f40253 _public_6f40253
#define public_6f40276 _public_6f40276

PROC_DECLARE(0x6f40080, internal_6f40080, public_6f40080);
extern "C" NAKED register_t __cdecl internal_6f40080()
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
        je public_6f400ba
        lea esp, ss:[esp]
        public_6f400a0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f400b3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f400b6
        public_6f400b3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f400b6 : nop
        cmp ebp, edx
        jne public_6f400a0
        public_6f400ba : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f40231
        push 0
        push esi
        mov ecx, edi
        call public_6eb1320
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb1810
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f40119
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f40119
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f40119
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4013f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4013f
        public_6f40119 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f40131
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4013b
        public_6f40131 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f4013b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f4013b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f4013f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f40215
        lea ecx, ds:[ecx]
        public_6f40150 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_6f40215
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f401bb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6f4018b
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f40209
        public_6f4018b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4019a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f4019a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f40209
        public_6f401bb : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6f401dc
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f40209
        public_6f401dc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f401ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f401ea : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f40209 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f40150
        public_6f40215 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f40231 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f4024c
        cmp esi, dword ptr ds : [ecx]
        je public_6f40253
        lea ecx, ss:[esp+0x10]
        call public_6eb14f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f4024c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f40276
        public_6f40253 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f440e0
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
        public_6f40276 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f40080)
    }
}

#undef public_6f400a0
#undef public_6f400b3
#undef public_6f400b6
#undef public_6f400ba
#undef public_6f40119
#undef public_6f40131
#undef public_6f4013b
#undef public_6f4013f
#undef public_6f40150
#undef public_6f4018b
#undef public_6f4019a
#undef public_6f401bb
#undef public_6f401dc
#undef public_6f401ea
#undef public_6f40209
#undef public_6f40215
#undef public_6f40231
#undef public_6f4024c
#undef public_6f40253
#undef public_6f40276
