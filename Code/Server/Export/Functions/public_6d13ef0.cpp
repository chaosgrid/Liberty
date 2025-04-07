#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d117c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d13ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d17120);

#define public_6d13f14 _public_6d13f14
#define public_6d13f16 _public_6d13f16
#define public_6d13f41 _public_6d13f41
#define public_6d13f60 _public_6d13f60
#define public_6d13f69 _public_6d13f69
#define public_6d13f6b _public_6d13f6b
#define public_6d13f87 _public_6d13f87
#define public_6d13fa7 _public_6d13fa7
#define public_6d13fc1 _public_6d13fc1
#define public_6d13fd3 _public_6d13fd3
#define public_6d13ff3 _public_6d13ff3
#define public_6d1400d _public_6d1400d
#define public_6d1401f _public_6d1401f
#define public_6d14023 _public_6d14023
#define public_6d14046 _public_6d14046
#define public_6d14059 _public_6d14059
#define public_6d14060 _public_6d14060
#define public_6d14069 _public_6d14069
#define public_6d1406b _public_6d1406b
#define public_6d14087 _public_6d14087
#define public_6d14090 _public_6d14090
#define public_6d14099 _public_6d14099
#define public_6d1409b _public_6d1409b
#define public_6d140b7 _public_6d140b7
#define public_6d140bb _public_6d140bb
#define public_6d140dc _public_6d140dc

PROC_DECLARE(0x6d13ef0, internal_6d13ef0, public_6d13ef0);
extern "C" NAKED register_t __cdecl internal_6d13ef0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebx
        jle public_6d140dc
        push ebp
        push esi
        mov dword ptr ss : [esp+0x1C], ebx
        jmp public_6d13f16
        public_6d13f14 : nop
        xor ebx, ebx
        public_6d13f16 : nop
        mov esi, dword ptr ds : [edi]
        add esi, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[esi+0x40]
        mov dword ptr ss : [esp+0x10], esi
        call public_6d117c0
        test al, al
        jne public_6d140bb
        cmp dword ptr ds : [esi+0xC], ebx
        mov dword ptr ss : [esp+0x20], ebx
        jle public_6d14046
        mov dword ptr ss : [esp+0x18], ebx
        public_6d13f41 : nop
        mov ebx, dword ptr ds : [esi+8]
        add ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ebx+0x54]
        call public_6d117c0
        test al, al
        jne public_6d14023
        lea ebp, ds:[ebx+0xC]
        xor edi, edi
        lea ecx, ds:[ecx]
        public_6d13f60 : nop
        test edi, edi
        jne public_6d13f69
        mov edi, dword ptr ss : [ebp+8]
        jmp public_6d13f6b
        public_6d13f69 : nop
        mov edi, dword ptr ds : [edi]
        public_6d13f6b : nop
        test edi, edi
        je public_6d13f87
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_6d13f60
        push esi
        mov ecx, ebp
        call public_6d17120
        mov byte ptr ds : [esi+8], 0
        jmp public_6d13f60
        public_6d13f87 : nop
        lea edi, ds:[ebx+0x24]
        push 1
        lea eax, ss:[esp+0x18]
        lea ebp, ds:[edi+4]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0
        call public_6d16120
        test al, al
        je public_6d13fd3
        public_6d13fa7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_6d13fc1
        push esi
        mov ecx, edi
        call public_6d17120
        mov byte ptr ds : [esi+8], 0
        public_6d13fc1 : nop
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6d16120
        test al, al
        jne public_6d13fa7
        public_6d13fd3 : nop
        lea edi, ds:[ebx+0x3C]
        push 1
        lea eax, ss:[esp+0x18]
        lea ebp, ds:[edi+4]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0
        call public_6d16120
        test al, al
        je public_6d1401f
        public_6d13ff3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_6d1400d
        push esi
        mov ecx, edi
        call public_6d17120
        mov byte ptr ds : [esi+8], 0
        public_6d1400d : nop
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_6d16120
        test al, al
        jne public_6d13ff3
        public_6d1401f : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6d14023 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0xC]
        inc eax
        add edx, 0x68
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], edx
        jl public_6d13f41
        mov edi, dword ptr ss : [esp+0x24]
        public_6d14046 : nop
        lea ecx, ds:[esi+0x40]
        call public_6d117c0
        test al, al
        jne public_6d140bb
        lea ebx, ds:[esi+0x10]
        xor edi, edi
        jmp public_6d14060
        public_6d14059 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6d14060 : nop
        test edi, edi
        jne public_6d14069
        mov edi, dword ptr ds : [ebx+8]
        jmp public_6d1406b
        public_6d14069 : nop
        mov edi, dword ptr ds : [edi]
        public_6d1406b : nop
        test edi, edi
        je public_6d14087
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_6d14059
        push esi
        mov ecx, ebx
        call public_6d17120
        mov byte ptr ds : [esi+8], 0
        jmp public_6d14059
        public_6d14087 : nop
        lea ebx, ds:[esi+0x28]
        xor edi, edi
        lea esp, ss:[esp]
        public_6d14090 : nop
        test edi, edi
        jne public_6d14099
        mov edi, dword ptr ds : [ebx+8]
        jmp public_6d1409b
        public_6d14099 : nop
        mov edi, dword ptr ds : [edi]
        public_6d1409b : nop
        test edi, edi
        je public_6d140b7
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_6d14090
        push esi
        mov ecx, ebx
        call public_6d17120
        mov byte ptr ds : [esi+8], 0
        jmp public_6d14090
        public_6d140b7 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_6d140bb : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+4]
        inc eax
        add edx, 0x54
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], edx
        jl public_6d13f14
        pop esi
        pop ebp
        public_6d140dc : nop
        pop edi
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6d13ef0)
    }
}

#undef public_6d13f14
#undef public_6d13f16
#undef public_6d13f41
#undef public_6d13f60
#undef public_6d13f69
#undef public_6d13f6b
#undef public_6d13f87
#undef public_6d13fa7
#undef public_6d13fc1
#undef public_6d13fd3
#undef public_6d13ff3
#undef public_6d1400d
#undef public_6d1401f
#undef public_6d14023
#undef public_6d14046
#undef public_6d14059
#undef public_6d14060
#undef public_6d14069
#undef public_6d1406b
#undef public_6d14087
#undef public_6d14090
#undef public_6d14099
#undef public_6d1409b
#undef public_6d140b7
#undef public_6d140bb
#undef public_6d140dc
