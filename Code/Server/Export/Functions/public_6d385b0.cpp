#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d38600 _public_6d38600
#define public_6d3861e _public_6d3861e
#define public_6d38638 _public_6d38638
#define public_6d3866d _public_6d3866d
#define public_6d38681 _public_6d38681
#define public_6d386b0 _public_6d386b0
#define public_6d386c6 _public_6d386c6
#define public_6d386de _public_6d386de
#define public_6d386ef _public_6d386ef
#define public_6d386f7 _public_6d386f7
#define public_6d3870c _public_6d3870c
#define public_6d3870e _public_6d3870e
#define public_6d3871f _public_6d3871f

PROC_DECLARE(0x6d385b0, internal_6d385b0, public_6d385b0);
extern "C" NAKED register_t __cdecl internal_6d385b0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push edi
        mov dword ptr ss : [esp+0x18], 0
        je public_6d386f7
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3861e
        mov edi, dword ptr ds : [esi+0xC]
        nop 
        lea esp, ss:[esp]
        public_6d38600 : nop
        cmp edi, eax
        je public_6d386f7
        mov bp, word ptr ds : [eax]
        cmp bp, word ptr ds : [ecx]
        jne public_6d386f7
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d38600
        public_6d3861e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, eax
        sub edx, ecx
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d3866d
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x18], eax
        public_6d38638 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3870c
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3870e
        public_6d3866d : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d386ef
        cmp eax, 1
        mov dword ptr ss : [esp+0x18], 1
        jbe public_6d38638
        public_6d38681 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_6d386de
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d386c6
        mov edi, dword ptr ds : [esi+0xC]
        mov edi, edi
        public_6d386b0 : nop
        cmp edi, eax
        je public_6d386de
        mov bp, word ptr ds : [eax]
        cmp bp, word ptr ds : [ecx]
        jne public_6d386de
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d386b0
        public_6d386c6 : nop
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_6d38681
        jmp public_6d38638
        public_6d386de : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d386ef : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d38638
        public_6d386f7 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d38638
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3870c : nop
        mov eax, edx
        public_6d3870e : nop
        test eax, eax
        je public_6d3871f
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d3871f : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d385b0)
    }
}

#undef public_6d38600
#undef public_6d3861e
#undef public_6d38638
#undef public_6d3866d
#undef public_6d38681
#undef public_6d386b0
#undef public_6d386c6
#undef public_6d386de
#undef public_6d386ef
#undef public_6d386f7
#undef public_6d3870c
#undef public_6d3870e
#undef public_6d3871f
