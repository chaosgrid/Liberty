#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3360);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);

#define public_6ce33bb _public_6ce33bb
#define public_6ce33c0 _public_6ce33c0
#define public_6ce33cc _public_6ce33cc
#define public_6ce33ce _public_6ce33ce
#define public_6ce33e7 _public_6ce33e7
#define public_6ce33eb _public_6ce33eb
#define public_6ce3430 _public_6ce3430
#define public_6ce3440 _public_6ce3440
#define public_6ce344d _public_6ce344d
#define public_6ce3450 _public_6ce3450
#define public_6ce3455 _public_6ce3455
#define public_6ce3458 _public_6ce3458
#define public_6ce34b2 _public_6ce34b2
#define public_6ce34c2 _public_6ce34c2

PROC_DECLARE(0x6ce3360, internal_6ce3360, public_6ce3360);
extern "C" NAKED register_t __cdecl internal_6ce3360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ds : [ecx]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov word ptr ds : [eax], dx
        xor ebp, ebp
        call dword ptr ds : [public_6d64018]
        add esp, 4
        test eax, eax
        je public_6ce33eb
        mov ecx, dword ptr ds : [eax+0x4C]
        mov edx, ecx
        and edx, 3
        cmp dl, 3
        jne public_6ce33e7
        and ecx, 0x67
        cmp cl, 0x67
        je public_6ce33bb
        mov eax, dword ptr ds : [eax+0xB0]
        push eax
        mov ecx, ebx
        call public_6d0c840
        mov ebp, eax
        jmp public_6ce33e7
        public_6ce33bb : nop
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6ce33c0 : nop
        test esi, esi
        jne public_6ce33cc
        mov esi, dword ptr ds : [ebx+0x88]
        jmp public_6ce33ce
        public_6ce33cc : nop
        mov esi, dword ptr ds : [esi]
        public_6ce33ce : nop
        test esi, esi
        je public_6ce33e7
        mov edi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, dword ptr ss : [esp+0x14]
        jne public_6ce33c0
        mov ebp, edi
        public_6ce33e7 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6ce33eb : nop
        test ebp, ebp
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebp
        je public_6ce34c2
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_6ce34b2
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6ce34b2
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ce34b2
        mov eax, dword ptr ds : [edi+0x5C]
        test eax, eax
        jne public_6ce3430
        mov eax, dword ptr ds : [edi+4]
        jmp public_6ce3450
        public_6ce3430 : nop
        mov eax, dword ptr ds : [edi+0x68]
        mov ecx, dword ptr ds : [edi+0x6C]
        cmp eax, ecx
        je public_6ce3455
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, edi
        public_6ce3440 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ce344d
        add eax, 0xC
        cmp eax, ecx
        jne public_6ce3440
        jmp public_6ce3455
        public_6ce344d : nop
        mov eax, dword ptr ds : [eax+4]
        public_6ce3450 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6ce3458
        public_6ce3455 : nop
        mov eax, dword ptr ds : [edi+4]
        public_6ce3458 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xF4]
        mov edi, dword ptr ss : [esp+0x20]
        mov word ptr ds : [edi], ax
        push eax
        call dword ptr ds : [public_6d64028]
        add esp, 4
        test al, al
        jne public_6ce34c2
        push 0x100
        lea ecx, ds:[esi+0xE4]
        call dword ptr ds : [public_6d64024]
        push eax
        call dword ptr ds : [public_6d64020]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ce34c2
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6ce34c2
        mov cx, word ptr ds : [esi+8]
        mov word ptr ds : [edi], cx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6ce34b2 : nop
        mov edx, dword ptr ds : [public_6d6401c]
        mov ax, word ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [ecx], ax
        public_6ce34c2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ce3360)
    }
}

#undef public_6ce33bb
#undef public_6ce33c0
#undef public_6ce33cc
#undef public_6ce33ce
#undef public_6ce33e7
#undef public_6ce33eb
#undef public_6ce3430
#undef public_6ce3440
#undef public_6ce344d
#undef public_6ce3450
#undef public_6ce3455
#undef public_6ce3458
#undef public_6ce34b2
#undef public_6ce34c2
