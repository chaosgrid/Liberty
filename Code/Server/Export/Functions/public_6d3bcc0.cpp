#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3bd00 _public_6d3bd00
#define public_6d3bd1b _public_6d3bd1b
#define public_6d3bd29 _public_6d3bd29
#define public_6d3bd3e _public_6d3bd3e
#define public_6d3bd73 _public_6d3bd73
#define public_6d3bd87 _public_6d3bd87
#define public_6d3bda7 _public_6d3bda7
#define public_6d3bdb9 _public_6d3bdb9
#define public_6d3bdc7 _public_6d3bdc7
#define public_6d3bddf _public_6d3bddf
#define public_6d3bdf2 _public_6d3bdf2
#define public_6d3bdfa _public_6d3bdfa
#define public_6d3be11 _public_6d3be11
#define public_6d3be13 _public_6d3be13
#define public_6d3be24 _public_6d3be24

PROC_DECLARE(0x6d3bcc0, internal_6d3bcc0, public_6d3bcc0);
extern "C" NAKED register_t __cdecl internal_6d3bcc0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x18], edx
        mov ebx, dword ptr ds : [eax+0x18]
        push edi
        mov edi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, ecx
        je public_6d3bd29
        mov ecx, edi
        sub ebx, edi
        lea esp, ss:[esp]
        public_6d3bd00 : nop
        cmp dword ptr ds : [esi+0xC], edx
        je public_6d3bdfa
        mov di, word ptr ds : [edx]
        cmp word ptr ds : [ecx], di
        je public_6d3bd1b
        cmp word ptr ds : [ecx+ebx], di
        jne public_6d3bdfa
        public_6d3bd1b : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d3bd00
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d3bd29 : nop
        mov eax, edx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], edx
        jne public_6d3bd73
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d3bd3e : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3be11
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3be13
        public_6d3bd73 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3bdf2
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d3bd3e
        public_6d3bd87 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x18], eax
        mov edi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edx+0xC]
        cmp edi, ebx
        mov ecx, dword ptr ds : [esi+0x10]
        je public_6d3bdc7
        mov edx, dword ptr ds : [edx+0x18]
        mov ebp, dword ptr ds : [esi+0xC]
        mov eax, edi
        sub edx, edi
        public_6d3bda7 : nop
        cmp ebp, ecx
        je public_6d3bddf
        mov di, word ptr ds : [ecx]
        cmp word ptr ds : [eax], di
        je public_6d3bdb9
        cmp word ptr ds : [eax+edx], di
        jne public_6d3bddf
        public_6d3bdb9 : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6d3bda7
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3bdc7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d3bd87
        jmp public_6d3bd3e
        public_6d3bddf : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d3bdf2 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3bd3e
        public_6d3bdfa : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3bd3e
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d3be11 : nop
        mov eax, edx
        public_6d3be13 : nop
        test eax, eax
        je public_6d3be24
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        public_6d3be24 : nop
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3bcc0)
    }
}

#undef public_6d3bd00
#undef public_6d3bd1b
#undef public_6d3bd29
#undef public_6d3bd3e
#undef public_6d3bd73
#undef public_6d3bd87
#undef public_6d3bda7
#undef public_6d3bdb9
#undef public_6d3bdc7
#undef public_6d3bddf
#undef public_6d3bdf2
#undef public_6d3bdfa
#undef public_6d3be11
#undef public_6d3be13
#undef public_6d3be24
