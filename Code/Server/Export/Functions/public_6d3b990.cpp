#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3b9d8 _public_6d3b9d8
#define public_6d3b9f3 _public_6d3b9f3
#define public_6d3b9fd _public_6d3b9fd
#define public_6d3ba17 _public_6d3ba17
#define public_6d3ba47 _public_6d3ba47
#define public_6d3ba59 _public_6d3ba59
#define public_6d3ba67 _public_6d3ba67
#define public_6d3ba6c _public_6d3ba6c
#define public_6d3ba70 _public_6d3ba70
#define public_6d3baa7 _public_6d3baa7
#define public_6d3baa9 _public_6d3baa9
#define public_6d3bab6 _public_6d3bab6
#define public_6d3bac8 _public_6d3bac8

PROC_DECLARE(0x6d3b990, internal_6d3b990, public_6d3b990);
extern "C" NAKED register_t __cdecl internal_6d3b990()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d3ba70
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [eax+0xC]
        cmp edx, ebx
        mov ecx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax+0x18]
        je public_6d3b9fd
        mov eax, edx
        sub esi, edx
        public_6d3b9d8 : nop
        cmp dword ptr ds : [edi+0xC], ecx
        je public_6d3ba70
        mov dx, word ptr ds : [ecx]
        cmp word ptr ds : [eax], dx
        je public_6d3b9f3
        cmp word ptr ds : [eax+esi], dx
        jne public_6d3ba70
        public_6d3b9f3 : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6d3b9d8
        public_6d3b9fd : nop
        mov edx, ecx
        mov dword ptr ds : [edi+0x10], ecx
        sub edx, dword ptr ss : [esp+0x10]
        test edx, 0xFFFFFFFE
        jne public_6d3ba17
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6d3ba70
        public_6d3ba17 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d3ba70
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], ecx
        mov esi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edx+0xC]
        cmp esi, ebx
        mov ecx, dword ptr ds : [edi+0x10]
        je public_6d3ba67
        mov edx, dword ptr ds : [edx+0x18]
        mov ebp, dword ptr ds : [edi+0xC]
        mov eax, esi
        sub edx, esi
        public_6d3ba47 : nop
        cmp ebp, ecx
        je public_6d3ba6c
        mov si, word ptr ds : [ecx]
        cmp word ptr ds : [eax], si
        je public_6d3ba59
        cmp word ptr ds : [eax+edx], si
        jne public_6d3ba6c
        public_6d3ba59 : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6d3ba47
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3ba67 : nop
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_6d3ba17
        public_6d3ba6c : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3ba70 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d3bac8
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3baa7
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3baa9
        public_6d3baa7 : nop
        mov eax, edx
        public_6d3baa9 : nop
        test eax, eax
        je public_6d3bab6
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        public_6d3bab6 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3bac8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3b990)
    }
}

#undef public_6d3b9d8
#undef public_6d3b9f3
#undef public_6d3b9fd
#undef public_6d3ba17
#undef public_6d3ba47
#undef public_6d3ba59
#undef public_6d3ba67
#undef public_6d3ba6c
#undef public_6d3ba70
#undef public_6d3baa7
#undef public_6d3baa9
#undef public_6d3bab6
#undef public_6d3bac8
