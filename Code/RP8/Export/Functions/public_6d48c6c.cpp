#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43d69);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);
CLANG_FORWARD_PROC_SYMBOL(public_6d484e4);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c6c);

#define public_6d48c98 _public_6d48c98
#define public_6d48ce3 _public_6d48ce3
#define public_6d48d02 _public_6d48d02
#define public_6d48d1e _public_6d48d1e
#define public_6d48d43 _public_6d48d43
#define public_6d48d4f _public_6d48d4f
#define public_6d48d5d _public_6d48d5d
#define public_6d48d75 _public_6d48d75
#define public_6d48d8a _public_6d48d8a
#define public_6d48d9f _public_6d48d9f
#define public_6d48db3 _public_6d48db3
#define public_6d48db5 _public_6d48db5

PROC_DECLARE(0x6d48c6c, internal_6d48c6c, public_6d48c6c);
extern "C" NAKED register_t __cdecl internal_6d48c6c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        and dword ptr ds : [esi+0x68], 0
        push edi
        push esi
        call public_6d43d69
        cmp byte ptr ds : [esi+0x113], 0
        mov eax, dword ptr ds : [esi+0xBC]
        pop ecx
        je public_6d48ce3
        test byte ptr ds : [esi+0x60], 2
        jne public_6d48c98
        add eax, 7
        shr eax, 3
        public_6d48c98 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0xC0], eax
        movzx eax, byte ptr ds : [esi+0x114]
        shl eax, 2
        mov ecx, dword ptr ds : [eax+public_6d6159c]
        mov edx, edi
        sub edx, dword ptr ds : [eax+public_6d61580]
        lea eax, ds:[edx+ecx-1]
        xor edx, edx
        div ecx
        movzx ecx, byte ptr ds : [esi+0x119]
        imul ecx, eax
        add ecx, 7
        shr ecx, 3
        inc ecx
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xCC], ecx
        jmp public_6d48d02
        public_6d48ce3 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0xC0], eax
        mov eax, dword ptr ds : [esi+0xC8]
        inc eax
        mov dword ptr ds : [esi+0xD0], edi
        mov dword ptr ds : [esi+0xCC], eax
        public_6d48d02 : nop
        movzx eax, byte ptr ds : [esi+0x119]
        push ebx
        mov ebx, dword ptr ds : [esi+0x60]
        test bl, 4
        je public_6d48d1e
        cmp byte ptr ds : [esi+0x117], 8
        jae public_6d48d1e
        push 8
        pop eax
        public_6d48d1e : nop
        test bh, 0x10
        je public_6d48d75
        mov cl, byte ptr ds : [esi+0x116]
        cmp cl, 3
        jne public_6d48d43
        xor eax, eax
        cmp word ptr ds : [esi+0x10A], ax
        setne al
        lea eax, ds:[eax*8+0x18]
        jmp public_6d48d75
        public_6d48d43 : nop
        test cl, cl
        jne public_6d48d5d
        cmp eax, 8
        jge public_6d48d4f
        push 8
        pop eax
        public_6d48d4f : nop
        cmp word ptr ds : [esi+0x10A], 0
        je public_6d48d75
        add eax, eax
        jmp public_6d48d75
        public_6d48d5d : nop
        cmp cl, 2
        jne public_6d48d75
        cmp word ptr ds : [esi+0x10A], 0
        je public_6d48d75
        shl eax, 2
        push 3
        cdq 
        pop ecx
        idiv ecx
        public_6d48d75 : nop
        test bh, bh
        pop ebx
        jns public_6d48db5
        mov cl, byte ptr ds : [esi+0x116]
        cmp cl, 3
        jne public_6d48d8a
        push 0x20
        pop eax
        jmp public_6d48db5
        public_6d48d8a : nop
        test cl, cl
        jne public_6d48d9f
        xor ecx, ecx
        cmp eax, 8
        setg cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x20
        jmp public_6d48db3
        public_6d48d9f : nop
        cmp cl, 2
        jne public_6d48db5
        xor ecx, ecx
        cmp eax, 0x20
        setg cl
        dec ecx
        and ecx, 0xFFFFFFE0
        add ecx, 0x40
        public_6d48db3 : nop
        mov eax, ecx
        public_6d48db5 : nop
        add edi, 7
        and edi, 0xFFFFFFF8
        imul edi, eax
        add eax, 7
        add edi, 7
        sar eax, 3
        shr edi, 3
        lea eax, ds:[edi+eax+1]
        push eax
        push esi
        call public_6d48472
        mov dword ptr ds : [esi+0xDC], eax
        lea edi, ds:[esi+0xC8]
        mov eax, dword ptr ds : [edi]
        inc eax
        push eax
        push esi
        call public_6d48472
        mov ecx, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0
        push eax
        push esi
        mov dword ptr ds : [esi+0xD8], eax
        call public_6d484e4
        or dword ptr ds : [esi+0x5C], 0x40
        add esp, 0x20
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d48c6c)
    }
}

#undef public_6d48c98
#undef public_6d48ce3
#undef public_6d48d02
#undef public_6d48d1e
#undef public_6d48d43
#undef public_6d48d4f
#undef public_6d48d5d
#undef public_6d48d75
#undef public_6d48d8a
#undef public_6d48d9f
#undef public_6d48db3
#undef public_6d48db5
