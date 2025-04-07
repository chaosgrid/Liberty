#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318b50);
CLANG_FORWARD_PROC_SYMBOL(public_6319600);
CLANG_FORWARD_PROC_SYMBOL(public_6319850);
CLANG_FORWARD_PROC_SYMBOL(public_6319bd0);
CLANG_FORWARD_PROC_SYMBOL(public_631a340);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6318b70 _public_6318b70
#define public_6318b83 _public_6318b83
#define public_6318b86 _public_6318b86
#define public_6318b8a _public_6318b8a
#define public_6318be9 _public_6318be9
#define public_6318c01 _public_6318c01
#define public_6318c0b _public_6318c0b
#define public_6318c0f _public_6318c0f
#define public_6318c20 _public_6318c20
#define public_6318c5b _public_6318c5b
#define public_6318c6a _public_6318c6a
#define public_6318c8b _public_6318c8b
#define public_6318cac _public_6318cac
#define public_6318cba _public_6318cba
#define public_6318cd9 _public_6318cd9
#define public_6318ce5 _public_6318ce5
#define public_6318d01 _public_6318d01
#define public_6318d1c _public_6318d1c
#define public_6318d23 _public_6318d23
#define public_6318d46 _public_6318d46

PROC_DECLARE(0x6318b50, internal_6318b50, public_6318b50);
extern "C" NAKED register_t __cdecl internal_6318b50()
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
        je public_6318b8a
        lea esp, ss:[esp]
        public_6318b70 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6318b83
        mov ebp, dword ptr ss : [ebp]
        jmp public_6318b86
        public_6318b83 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6318b86 : nop
        cmp ebp, edx
        jne public_6318b70
        public_6318b8a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6318d01
        push 0
        push esi
        mov ecx, edi
        call public_6319850
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_631a340
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6318be9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6318be9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6318be9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6318c0f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6318c0f
        public_6318be9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6318c01
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6318c0b
        public_6318c01 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6318c0b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6318c0b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6318c0f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6318ce5
        lea ecx, ds:[ecx]
        public_6318c20 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x74]
        test cl, cl
        jne public_6318ce5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6318c8b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x74]
        test dl, dl
        jne public_6318c5b
        mov byte ptr ds : [eax+0x74], 1
        mov byte ptr ds : [ecx+0x74], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6318cd9
        public_6318c5b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6318c6a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6318c6a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x74], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x74], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6318cd9
        public_6318c8b : nop
        mov dl, byte ptr ds : [ecx+0x74]
        test dl, dl
        jne public_6318cac
        mov byte ptr ds : [eax+0x74], 1
        mov byte ptr ds : [ecx+0x74], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x74], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6318cd9
        public_6318cac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6318cba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6318cba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x74], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6318cd9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6318c20
        public_6318ce5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x74], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6318d01 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6318d1c
        cmp esi, dword ptr ds : [ecx]
        je public_6318d23
        lea ecx, ss:[esp+0x10]
        call public_6319bd0
        mov edx, dword ptr ss : [esp+0x10]
        public_6318d1c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6318d46
        public_6318d23 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6319600
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
        public_6318d46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6318b50)
    }
}

#undef public_6318b70
#undef public_6318b83
#undef public_6318b86
#undef public_6318b8a
#undef public_6318be9
#undef public_6318c01
#undef public_6318c0b
#undef public_6318c0f
#undef public_6318c20
#undef public_6318c5b
#undef public_6318c6a
#undef public_6318c8b
#undef public_6318cac
#undef public_6318cba
#undef public_6318cd9
#undef public_6318ce5
#undef public_6318d01
#undef public_6318d1c
#undef public_6318d23
#undef public_6318d46
