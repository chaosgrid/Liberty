#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62408f2 _public_62408f2
#define public_6240912 _public_6240912
#define public_6240916 _public_6240916
#define public_624091b _public_624091b
#define public_62409d3 _public_62409d3
#define public_62409d5 _public_62409d5
#define public_62409eb _public_62409eb
#define public_6240a0c _public_6240a0c
#define public_6240a24 _public_6240a24
#define public_6240a36 _public_6240a36

PROC_DECLARE(0x62408d0, internal_62408d0, public_62408d0);
extern "C" NAKED register_t __cdecl internal_62408d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        xor ecx, ecx
        push esi
        mov eax, dword ptr ss : [ebp]
        push edi
        cmp eax, 8
        jne public_6240a24
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_62408f2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6240916
        cmp al, bl
        je public_6240912
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6240916
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_62408f2
        public_6240912 : nop
        xor eax, eax
        jmp public_624091b
        public_6240916 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_624091b : nop
        cmp eax, ebx
        jne public_6240a24
        push 0xA0
        call public_624612c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_62409d3
        lea edi, ds:[esi+0x20]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        call public_6206c70
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x50]
        mov ecx, edi
        call public_6206c70
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], 0x42C80000
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], 0x3F800000
        mov byte ptr ds : [esi+0x98], bl
        mov byte ptr ds : [esi+0x99], bl
        mov byte ptr ds : [esi+0x9A], bl
        mov dword ptr ds : [esi+4], offset public_624f930
        mov dword ptr ds : [esi+0x1C], esi
        mov dword ptr ds : [esi], offset public_624b190
        mov dword ptr ds : [esi+4], offset public_624b230
        mov dword ptr ds : [esi+0x9C], 1
        jmp public_62409d5
        public_62409d3 : nop
        xor esi, esi
        public_62409d5 : nop
        cmp esi, ebx
        jne public_62409eb
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_62409eb : nop
        mov edx, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_6240a36
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, ebx
        je public_6240a0c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_6240a0c : nop
        push esi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov eax, ebp
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebx
        pop ebp
        pop ebx
        ret 0xC
        public_6240a24 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6240a36 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62408d0)
    }
}

#undef public_62408f2
#undef public_6240912
#undef public_6240916
#undef public_624091b
#undef public_62409d3
#undef public_62409d5
#undef public_62409eb
#undef public_6240a0c
#undef public_6240a24
#undef public_6240a36
