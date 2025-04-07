#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22770);

#define public_6d22795 _public_6d22795
#define public_6d227aa _public_6d227aa
#define public_6d227c0 _public_6d227c0
#define public_6d227d2 _public_6d227d2
#define public_6d227de _public_6d227de
#define public_6d227e2 _public_6d227e2
#define public_6d227fc _public_6d227fc
#define public_6d22804 _public_6d22804

PROC_DECLARE(0x6d22770, internal_6d22770, public_6d22770);
extern "C" NAKED register_t __cdecl internal_6d22770()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi]
        add edi, 2
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ecx]
        test dh, 2
        mov eax, edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6d22804
        cmp eax, edi
        je public_6d227fc
        mov ebx, dword ptr ds : [public_6d64c18]
        public_6d22795 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d227aa
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d22804
        public_6d227aa : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d227de
        lea ebx, ds:[ebx]
        public_6d227c0 : nop
        cmp eax, edi
        je public_6d227fc
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d227c0
        public_6d227d2 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d22795
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6d227de : nop
        cmp eax, edi
        je public_6d227fc
        public_6d227e2 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d227d2
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d227e2
        public_6d227fc : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6d22804 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d227fc
        cmp word ptr ds : [eax], 0x3F
        jne public_6d227fc
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d22770)
    }
}

#undef public_6d22795
#undef public_6d227aa
#undef public_6d227c0
#undef public_6d227d2
#undef public_6d227de
#undef public_6d227e2
#undef public_6d227fc
#undef public_6d22804
