#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d35044 _public_6d35044
#define public_6d35075 _public_6d35075
#define public_6d3509f _public_6d3509f
#define public_6d350a1 _public_6d350a1
#define public_6d350aa _public_6d350aa
#define public_6d350b9 _public_6d350b9

PROC_DECLARE(0x6d35000, internal_6d35000, public_6d35000);
extern "C" NAKED register_t __cdecl internal_6d35000()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        xor ebx, ebx
        test eax, eax
        je public_6d35044
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, ebp
        mov dword ptr ds : [esi+0x18], ecx
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d35044
        cmp cx, 0xA
        je public_6d35044
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d35075
        mov ebx, dword ptr ds : [edi+0xC]
        public_6d35044 : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        jb public_6d350b9
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3509f
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d350a1
        public_6d35075 : nop
        mov eax, dword ptr ds : [edi+0x10]
        inc ebx
        cmp ebx, eax
        jae public_6d35044
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov ax, word ptr ds : [ecx]
        test ax, ax
        je public_6d35044
        cmp ax, 0xA
        je public_6d35044
        add ecx, 2
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d35075
        public_6d3509f : nop
        mov eax, edx
        public_6d350a1 : nop
        test eax, eax
        je public_6d350aa
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d350aa : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d350b9 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d35000)
    }
}

#undef public_6d35044
#undef public_6d35075
#undef public_6d3509f
#undef public_6d350a1
#undef public_6d350aa
#undef public_6d350b9
