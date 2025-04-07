#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebce32 _public_6ebce32
#define public_6ebce52 _public_6ebce52
#define public_6ebce56 _public_6ebce56
#define public_6ebce5b _public_6ebce5b
#define public_6ebcee2 _public_6ebcee2
#define public_6ebcef9 _public_6ebcef9
#define public_6ebcf11 _public_6ebcf11
#define public_6ebcf18 _public_6ebcf18
#define public_6ebcf2a _public_6ebcf2a
#define public_6ebcf3c _public_6ebcf3c

PROC_DECLARE(0x6ebce10, internal_6ebce10, public_6ebce10);
extern "C" NAKED register_t __cdecl internal_6ebce10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6ebcf2a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6ebce32 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6ebce56
        cmp al, bl
        je public_6ebce52
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6ebce56
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6ebce32
        public_6ebce52 : nop
        xor eax, eax
        jmp public_6ebce5b
        public_6ebce56 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebce5b : nop
        cmp eax, ebx
        jne public_6ebcf2a
        push 0x78
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6ebcf18
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        lea eax, ds:[esi+0x6C]
        mov dword ptr ds : [eax], offset public_6ed264c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed25d8
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x68], ecx
        jne public_6ebcf11
        mov dword ptr ds : [esi+0x68], eax
        public_6ebcee2 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6ebcf3c
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6ebcef9
        mov dword ptr ds : [eax], ebx
        public_6ebcef9 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ebcf11 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ebcee2
        public_6ebcf18 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6ebcf2a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6ebcf3c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebce10)
    }
}

#undef public_6ebce32
#undef public_6ebce52
#undef public_6ebce56
#undef public_6ebce5b
#undef public_6ebcee2
#undef public_6ebcef9
#undef public_6ebcf11
#undef public_6ebcf18
#undef public_6ebcf2a
#undef public_6ebcf3c
