#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb6692 _public_6eb6692
#define public_6eb66b2 _public_6eb66b2
#define public_6eb66b6 _public_6eb66b6
#define public_6eb66bb _public_6eb66bb
#define public_6eb6757 _public_6eb6757
#define public_6eb676e _public_6eb676e
#define public_6eb6786 _public_6eb6786
#define public_6eb678d _public_6eb678d
#define public_6eb679f _public_6eb679f
#define public_6eb67b1 _public_6eb67b1

PROC_DECLARE(0x6eb6670, internal_6eb6670, public_6eb6670);
extern "C" NAKED register_t __cdecl internal_6eb6670()
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
        jne public_6eb679f
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6eb6692 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6eb66b6
        cmp al, bl
        je public_6eb66b2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6eb66b6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6eb6692
        public_6eb66b2 : nop
        xor eax, eax
        jmp public_6eb66bb
        public_6eb66b6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb66bb : nop
        cmp eax, ebx
        jne public_6eb679f
        push 0x8C
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6eb678d
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
        mov dword ptr ds : [esi+0x74], 2
        mov byte ptr ds : [esi+0x78], 1
        mov byte ptr ds : [esi+0x79], 1
        lea eax, ds:[esi+0x80]
        mov dword ptr ds : [eax], offset public_6ed1a3c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed19c8
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x7C], ecx
        jne public_6eb6786
        mov dword ptr ds : [esi+0x7C], eax
        public_6eb6757 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6eb67b1
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6eb676e
        mov dword ptr ds : [eax], ebx
        public_6eb676e : nop
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
        public_6eb6786 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb6757
        public_6eb678d : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6eb679f : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6eb67b1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb6670)
    }
}

#undef public_6eb6692
#undef public_6eb66b2
#undef public_6eb66b6
#undef public_6eb66bb
#undef public_6eb6757
#undef public_6eb676e
#undef public_6eb6786
#undef public_6eb678d
#undef public_6eb679f
#undef public_6eb67b1
