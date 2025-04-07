#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_462b01 _public_462b01
#define public_462b34 _public_462b34
#define public_462b6a _public_462b6a
#define public_462b72 _public_462b72
#define public_462b79 _public_462b79
#define public_462b80 _public_462b80
#define public_462b8e _public_462b8e
#define public_462b95 _public_462b95

PROC_DECLARE(0x462ab0, internal_462ab0, public_462ab0);
extern "C" NAKED register_t __cdecl internal_462ab0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x32C]
        test eax, eax
        push esi
        push edi
        je public_462b79
        test byte ptr ss : [ebp+0x6C], 2
        mov byte ptr ss : [esp+0x13], 0
        jne public_462b79
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [ebp+0x358]
        mov esi, dword ptr ds : [eax]
        mov ebx, edx
        imul ebx, 0x3E8
        cmp esi, eax
        je public_462b79
        public_462b01 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, ebx
        sub ecx, edx
        cmp ecx, 0x4E20
        jbe public_462b6a
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, dword ptr ds : [public_66da48]
        je public_462b34
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_462b34
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        movzx edx, dx
        push edx
        call dword ptr ds : [eax+0x158]
        public_462b34 : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+0x35C]
        add esp, 4
        dec ecx
        mov dword ptr ss : [ebp+0x35C], ecx
        cmp edi, dword ptr ss : [ebp+0x358]
        mov esi, edi
        mov byte ptr ss : [esp+0x13], 1
        jne public_462b01
        jmp public_462b72
        public_462b6a : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_462b79
        public_462b72 : nop
        mov ecx, ebp
        call public_462e30
        public_462b79 : nop
        mov ebp, dword ptr ss : [ebp+0xC]
        test ebp, ebp
        je public_462b95
        public_462b80 : nop
        test byte ptr ss : [ebp+0x6C], 1
        jne public_462b8e
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x30]
        public_462b8e : nop
        mov ebp, dword ptr ss : [ebp+8]
        test ebp, ebp
        jne public_462b80
        public_462b95 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x462ab0)
    }
}

#undef public_462b01
#undef public_462b34
#undef public_462b6a
#undef public_462b72
#undef public_462b79
#undef public_462b80
#undef public_462b8e
#undef public_462b95
