#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0d00);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1460);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eae0e0 _public_6eae0e0
#define public_6eae0f3 _public_6eae0f3
#define public_6eae0f6 _public_6eae0f6
#define public_6eae0fa _public_6eae0fa
#define public_6eae159 _public_6eae159
#define public_6eae171 _public_6eae171
#define public_6eae17b _public_6eae17b
#define public_6eae17f _public_6eae17f
#define public_6eae190 _public_6eae190
#define public_6eae1dd _public_6eae1dd
#define public_6eae1ec _public_6eae1ec
#define public_6eae213 _public_6eae213
#define public_6eae240 _public_6eae240
#define public_6eae24e _public_6eae24e
#define public_6eae273 _public_6eae273
#define public_6eae27f _public_6eae27f
#define public_6eae29e _public_6eae29e
#define public_6eae2b9 _public_6eae2b9
#define public_6eae2c0 _public_6eae2c0
#define public_6eae2e3 _public_6eae2e3

PROC_DECLARE(0x6eae0c0, internal_6eae0c0, public_6eae0c0);
extern "C" NAKED register_t __cdecl internal_6eae0c0()
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
        je public_6eae0fa
        lea esp, ss:[esp]
        public_6eae0e0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eae0f3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eae0f6
        public_6eae0f3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eae0f6 : nop
        cmp ebp, edx
        jne public_6eae0e0
        public_6eae0fa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eae29e
        push 0
        push esi
        mov ecx, edi
        call public_6eb1460
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb1cd0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eae159
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eae159
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eae159
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eae17f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eae17f
        public_6eae159 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eae171
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eae17b
        public_6eae171 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eae17b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eae17b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eae17f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eae27f
        lea ecx, ds:[ecx]
        public_6eae190 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0xC4]
        test cl, cl
        jne public_6eae27f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eae213
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xC4]
        test dl, dl
        jne public_6eae1dd
        mov byte ptr ds : [eax+0xC4], 1
        mov byte ptr ds : [ecx+0xC4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eae273
        public_6eae1dd : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eae1ec
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eae1ec : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0xC4], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xC4], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eae273
        public_6eae213 : nop
        mov dl, byte ptr ds : [ecx+0xC4]
        test dl, dl
        jne public_6eae240
        mov byte ptr ds : [eax+0xC4], 1
        mov byte ptr ds : [ecx+0xC4], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0xC4], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eae273
        public_6eae240 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eae24e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eae24e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0xC4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eae273 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eae190
        public_6eae27f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xC4], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eae29e : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eae2b9
        cmp esi, dword ptr ds : [ecx]
        je public_6eae2c0
        lea ecx, ss:[esp+0x10]
        call public_6eb1490
        mov edx, dword ptr ss : [esp+0x10]
        public_6eae2b9 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eae2e3
        public_6eae2c0 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eb0d00
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
        public_6eae2e3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eae0c0)
    }
}

#undef public_6eae0e0
#undef public_6eae0f3
#undef public_6eae0f6
#undef public_6eae0fa
#undef public_6eae159
#undef public_6eae171
#undef public_6eae17b
#undef public_6eae17f
#undef public_6eae190
#undef public_6eae1dd
#undef public_6eae1ec
#undef public_6eae213
#undef public_6eae240
#undef public_6eae24e
#undef public_6eae273
#undef public_6eae27f
#undef public_6eae29e
#undef public_6eae2b9
#undef public_6eae2c0
#undef public_6eae2e3
