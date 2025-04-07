#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65fe092 _public_65fe092
#define public_65fe0b2 _public_65fe0b2
#define public_65fe0b6 _public_65fe0b6
#define public_65fe0bb _public_65fe0bb
#define public_65fe142 _public_65fe142
#define public_65fe159 _public_65fe159
#define public_65fe171 _public_65fe171
#define public_65fe178 _public_65fe178
#define public_65fe18a _public_65fe18a
#define public_65fe19c _public_65fe19c

PROC_DECLARE(0x65fe070, internal_65fe070, public_65fe070);
extern "C" NAKED register_t __cdecl internal_65fe070()
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
        jne public_65fe18a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_65fe092 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_65fe0b6
        cmp al, bl
        je public_65fe0b2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_65fe0b6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_65fe092
        public_65fe0b2 : nop
        xor eax, eax
        jmp public_65fe0bb
        public_65fe0b6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65fe0bb : nop
        cmp eax, ebx
        jne public_65fe18a
        push 0x78
        call public_6600bb6
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_65fe178
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
        mov dword ptr ds : [eax], offset public_660156c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_66014f8
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x68], ecx
        jne public_65fe171
        mov dword ptr ds : [esi+0x68], eax
        public_65fe142 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_65fe19c
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_65fe159
        mov dword ptr ds : [eax], ebx
        public_65fe159 : nop
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
        public_65fe171 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_65fe142
        public_65fe178 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_65fe18a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_65fe19c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65fe070)
    }
}

#undef public_65fe092
#undef public_65fe0b2
#undef public_65fe0b6
#undef public_65fe0bb
#undef public_65fe142
#undef public_65fe159
#undef public_65fe171
#undef public_65fe178
#undef public_65fe18a
#undef public_65fe19c
