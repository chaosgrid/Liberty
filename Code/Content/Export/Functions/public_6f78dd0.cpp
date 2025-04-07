#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f78dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f78df9 _public_6f78df9
#define public_6f78dff _public_6f78dff
#define public_6f78e14 _public_6f78e14
#define public_6f78e21 _public_6f78e21
#define public_6f78e2e _public_6f78e2e
#define public_6f78e40 _public_6f78e40
#define public_6f78e50 _public_6f78e50
#define public_6f78e5d _public_6f78e5d
#define public_6f78e70 _public_6f78e70
#define public_6f78e7d _public_6f78e7d
#define public_6f78e90 _public_6f78e90
#define public_6f78e9c _public_6f78e9c
#define public_6f78ead _public_6f78ead
#define public_6f78ebe _public_6f78ebe
#define public_6f78ec4 _public_6f78ec4
#define public_6f78ed1 _public_6f78ed1

PROC_DECLARE(0x6f78dd0, internal_6f78dd0, public_6f78dd0);
extern "C" NAKED register_t __cdecl internal_6f78dd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [eax], 0
        push esi
        push edi
        je public_6f78df9
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[ebx+0xF8]
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [ecx+0x10]
        jmp public_6f78dff
        public_6f78df9 : nop
        mov esi, dword ptr ds : [ebx+0xEC]
        public_6f78dff : nop
        mov eax, dword ptr ds : [ebx+0xF0]
        xor edi, edi
        cmp esi, eax
        je public_6f78ed1
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f78e14 : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [esi+0x60]
        cmp ecx, eax
        je public_6f78e5d
        mov edx, dword ptr ss : [ebp]
        public_6f78e21 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f78e2e
        add ecx, 4
        cmp ecx, eax
        jne public_6f78e21
        jmp public_6f78e5d
        public_6f78e2e : nop
        mov edx, dword ptr ds : [esi+0x60]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f78e50
        sub ecx, eax
        lea ebx, ds:[ebx]
        public_6f78e40 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebp
        add eax, 4
        cmp eax, edx
        jne public_6f78e40
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f78e50 : nop
        add dword ptr ds : [esi+0x60], 0xFFFFFFFC
        call public_6efec10
        fstp dword ptr ds : [esi+0x78]
        inc edi
        public_6f78e5d : nop
        test edi, edi
        jne public_6f78ead
        mov ecx, dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [esi+0x70]
        cmp ecx, eax
        je public_6f78ead
        mov edx, dword ptr ss : [ebp]
        mov edi, edi
        public_6f78e70 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f78e7d
        add ecx, 4
        cmp ecx, eax
        jne public_6f78e70
        jmp public_6f78ead
        public_6f78e7d : nop
        mov edx, dword ptr ds : [esi+0x70]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f78e9c
        sub ecx, eax
        lea esp, ss:[esp]
        public_6f78e90 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], edi
        add eax, 4
        cmp eax, edx
        jne public_6f78e90
        public_6f78e9c : nop
        add dword ptr ds : [esi+0x70], 0xFFFFFFFC
        call public_6efec10
        fstp dword ptr ds : [esi+0x7C]
        mov edi, 1
        public_6f78ead : nop
        mov edx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [edx], 0
        je public_6f78ebe
        mov esi, dword ptr ds : [ebx+0xF0]
        jmp public_6f78ec4
        public_6f78ebe : nop
        add esi, 0x98
        public_6f78ec4 : nop
        cmp esi, dword ptr ds : [ebx+0xF0]
        jne public_6f78e14
        pop ebp
        public_6f78ed1 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f78dd0)
    }
}

#undef public_6f78df9
#undef public_6f78dff
#undef public_6f78e14
#undef public_6f78e21
#undef public_6f78e2e
#undef public_6f78e40
#undef public_6f78e50
#undef public_6f78e5d
#undef public_6f78e70
#undef public_6f78e7d
#undef public_6f78e90
#undef public_6f78e9c
#undef public_6f78ead
#undef public_6f78ebe
#undef public_6f78ec4
#undef public_6f78ed1
