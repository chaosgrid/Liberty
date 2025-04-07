#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d382d0 _public_6d382d0
#define public_6d382e6 _public_6d382e6
#define public_6d38300 _public_6d38300
#define public_6d38340 _public_6d38340
#define public_6d38380 _public_6d38380
#define public_6d3839e _public_6d3839e
#define public_6d383a3 _public_6d383a3
#define public_6d383a5 _public_6d383a5
#define public_6d383b2 _public_6d383b2
#define public_6d383c2 _public_6d383c2

PROC_DECLARE(0x6d38280, internal_6d38280, public_6d38280);
extern "C" NAKED register_t __cdecl internal_6d38280()
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
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x18], 0
        je public_6d38300
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
        je public_6d38300
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d382e6
        mov edi, dword ptr ds : [esi+0xC]
        mov edi, edi
        public_6d382d0 : nop
        cmp edi, eax
        je public_6d38300
        mov bp, word ptr ds : [eax]
        cmp bp, word ptr ds : [ecx]
        jne public_6d38300
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d382d0
        public_6d382e6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, eax
        sub edx, ecx
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d38340
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        public_6d38300 : nop
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, dword ptr ds : [ebx+0xC]
        jb public_6d383c2
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebp, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebp
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d383a3
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d383a5
        nop 
        lea esp, ss:[esp]
        public_6d38340 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jae public_6d38300
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
        je public_6d38300
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        cmp ecx, edx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3839e
        mov edi, dword ptr ds : [esi+0xC]
        lea ecx, ds:[ecx]
        public_6d38380 : nop
        cmp edi, eax
        je public_6d38300
        mov bp, word ptr ds : [eax]
        cmp bp, word ptr ds : [ecx]
        jne public_6d38300
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d38380
        public_6d3839e : nop
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d38340
        public_6d383a3 : nop
        mov eax, edx
        public_6d383a5 : nop
        test eax, eax
        je public_6d383b2
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edi
        public_6d383b2 : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d383c2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d38280)
    }
}

#undef public_6d382d0
#undef public_6d382e6
#undef public_6d38300
#undef public_6d38340
#undef public_6d38380
#undef public_6d3839e
#undef public_6d383a3
#undef public_6d383a5
#undef public_6d383b2
#undef public_6d383c2
