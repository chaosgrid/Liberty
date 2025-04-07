#include "Server-PCH.h"


#define public_6d3b451 _public_6d3b451
#define public_6d3b455 _public_6d3b455
#define public_6d3b47b _public_6d3b47b
#define public_6d3b49a _public_6d3b49a
#define public_6d3b4b6 _public_6d3b4b6
#define public_6d3b4c5 _public_6d3b4c5
#define public_6d3b4da _public_6d3b4da
#define public_6d3b4e6 _public_6d3b4e6
#define public_6d3b4f0 _public_6d3b4f0
#define public_6d3b506 _public_6d3b506
#define public_6d3b515 _public_6d3b515
#define public_6d3b520 _public_6d3b520
#define public_6d3b537 _public_6d3b537
#define public_6d3b53b _public_6d3b53b
#define public_6d3b542 _public_6d3b542
#define public_6d3b54e _public_6d3b54e
#define public_6d3b55a _public_6d3b55a
#define public_6d3b55c _public_6d3b55c
#define public_6d3b584 _public_6d3b584
#define public_6d3b59a _public_6d3b59a
#define public_6d3b59e _public_6d3b59e

PROC_DECLARE(0x6d3b420, internal_6d3b420, public_6d3b420);
extern "C" NAKED register_t __cdecl internal_6d3b420()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+0xC]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], 0
        mov eax, esi
        je public_6d3b47b
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [ebp+0xC]
        jmp public_6d3b455
        public_6d3b451 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d3b455 : nop
        cmp ebp, eax
        je public_6d3b53b
        mov bx, word ptr ds : [ecx]
        cmp bx, word ptr ds : [eax]
        jne public_6d3b537
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b451
        cmp eax, esi
        jne public_6d3b4c5
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d3b47b : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3b49a
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3b49a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3b4b6
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3b4b6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d3b4b6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3b4c5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ecx+0xC]
        test ebx, ebx
        je public_6d3b4da
        mov esi, eax
        mov dword ptr ss : [esp+0x10], 1
        public_6d3b4da : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jae public_6d3b515
        mov edx, dword ptr ds : [edi+0xC]
        mov edi, dword ptr ds : [edi+8]
        public_6d3b4e6 : nop
        cmp edi, edx
        mov eax, esi
        je public_6d3b506
        mov ecx, edi
        mov edi, edi
        public_6d3b4f0 : nop
        cmp ebp, eax
        je public_6d3b542
        mov si, word ptr ds : [ecx]
        cmp si, word ptr ds : [eax]
        jne public_6d3b542
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b4f0
        public_6d3b506 : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d3b4e6
        public_6d3b515 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6d3b520 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d3b54e
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d3b55a
        public_6d3b537 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d3b53b : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d3b520
        public_6d3b542 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3b54e : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3b59e
        cmp dword ptr ds : [eax+8], esi
        jmp public_6d3b55c
        public_6d3b55a : nop
        test al, al
        public_6d3b55c : nop
        jne public_6d3b59e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [ebx+0x10]
        jae public_6d3b542
        mov edx, dword ptr ds : [ebx+8]
        mov edi, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, esi
        je public_6d3b59a
        mov esi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi+0xC]
        public_6d3b584 : nop
        cmp esi, eax
        je public_6d3b542
        mov di, word ptr ds : [ecx]
        cmp di, word ptr ds : [eax]
        jne public_6d3b542
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6d3b584
        public_6d3b59a : nop
        mov esi, eax
        jmp public_6d3b520
        public_6d3b59e : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d3b420)
    }
}

#undef public_6d3b451
#undef public_6d3b455
#undef public_6d3b47b
#undef public_6d3b49a
#undef public_6d3b4b6
#undef public_6d3b4c5
#undef public_6d3b4da
#undef public_6d3b4e6
#undef public_6d3b4f0
#undef public_6d3b506
#undef public_6d3b515
#undef public_6d3b520
#undef public_6d3b537
#undef public_6d3b53b
#undef public_6d3b542
#undef public_6d3b54e
#undef public_6d3b55a
#undef public_6d3b55c
#undef public_6d3b584
#undef public_6d3b59a
#undef public_6d3b59e
