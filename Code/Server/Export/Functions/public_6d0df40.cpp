#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0df40);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d0df60 _public_6d0df60
#define public_6d0df6d _public_6d0df6d
#define public_6d0df6f _public_6d0df6f
#define public_6d0df9c _public_6d0df9c
#define public_6d0df9e _public_6d0df9e
#define public_6d0e015 _public_6d0e015
#define public_6d0e02a _public_6d0e02a
#define public_6d0e02c _public_6d0e02c
#define public_6d0e059 _public_6d0e059
#define public_6d0e05b _public_6d0e05b
#define public_6d0e0b6 _public_6d0e0b6
#define public_6d0e0e0 _public_6d0e0e0
#define public_6d0e10a _public_6d0e10a
#define public_6d0e115 _public_6d0e115

PROC_DECLARE(0x6d0df40, internal_6d0df40, public_6d0df40);
extern "C" NAKED register_t __cdecl internal_6d0df40()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        push esi
        xor ebx, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebx
        xor esi, esi
        nop 
        lea esp, ss:[esp]
        public_6d0df60 : nop
        cmp esi, ebx
        jne public_6d0df6d
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x38]
        jmp public_6d0df6f
        public_6d0df6d : nop
        mov esi, dword ptr ds : [esi]
        public_6d0df6f : nop
        cmp esi, ebx
        je public_6d0e0b6
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        jne public_6d0e015
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        je public_6d0df9c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0df9e
        public_6d0df9c : nop
        xor eax, eax
        public_6d0df9e : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebp
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x20]
        push eax
        push 0x16
        call public_6d43650
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ebx
        je public_6d0df60
        add eax, 0xC
        cmp eax, ebx
        je public_6d0df60
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d0df60
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6d0df60
        push 1
        call dword ptr ds : [public_6d646e8]
        jmp public_6d0df60
        public_6d0e015 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6d0e02a
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0e02c
        public_6d0e02a : nop
        xor eax, eax
        public_6d0e02c : nop
        cmp dword ptr ds : [eax+0xB4], ebx
        jne public_6d0df60
        cmp ecx, ebx
        je public_6d0e059
        lea eax, ds:[ecx+0xC]
        cmp eax, ebx
        je public_6d0e059
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d0e059
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_6d0e05b
        public_6d0e059 : nop
        xor ecx, ecx
        public_6d0e05b : nop
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebx
        je public_6d0df60
        mov ecx, dword ptr ss : [esp+0x60]
        mov dl, byte ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x42], dl
        mov dword ptr ss : [esp+0x44], ecx
        lea edx, ss:[esp+0x40]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov byte ptr ss : [esp+0x45], bl
        mov byte ptr ss : [esp+0x44], 1
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x1C], 4
        call dword ptr ds : [edx]
        jmp public_6d0df60
        public_6d0e0b6 : nop
        mov al, byte ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x60]
        mov byte ptr ss : [esp+0x3C], al
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], ebp
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0e115
        nop 
        lea esp, ss:[esp]
        public_6d0e0e0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [esi+0x40]
        je public_6d0e10a
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e10a
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        call dword ptr ds : [eax+0x18]
        public_6d0e10a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0xC]
        jne public_6d0e0e0
        public_6d0e115 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 0x14
        UNREACHABLE_TRAP(0x6d0df40)
    }
}

#undef public_6d0df60
#undef public_6d0df6d
#undef public_6d0df6f
#undef public_6d0df9c
#undef public_6d0df9e
#undef public_6d0e015
#undef public_6d0e02a
#undef public_6d0e02c
#undef public_6d0e059
#undef public_6d0e05b
#undef public_6d0e0b6
#undef public_6d0e0e0
#undef public_6d0e10a
#undef public_6d0e115
