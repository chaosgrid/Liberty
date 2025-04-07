#include "Server-PCH.h"


#define public_6d34b1f _public_6d34b1f
#define public_6d34b38 _public_6d34b38
#define public_6d34b44 _public_6d34b44
#define public_6d34b52 _public_6d34b52
#define public_6d34b56 _public_6d34b56
#define public_6d34b5a _public_6d34b5a
#define public_6d34b60 _public_6d34b60
#define public_6d34b7d _public_6d34b7d
#define public_6d34b8c _public_6d34b8c
#define public_6d34b9a _public_6d34b9a
#define public_6d34ba3 _public_6d34ba3

PROC_DECLARE(0x6d34ad0, internal_6d34ad0, public_6d34ad0);
extern "C" NAKED register_t __cdecl internal_6d34ad0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        push edi
        xor edx, edx
        xor edi, edi
        test eax, eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        je public_6d34b5a
        mov ebp, dword ptr ss : [ebp+0xC]
        cmp ebp, esi
        je public_6d34b56
        add esi, 2
        mov edi, esi
        sub edi, ecx
        sar edi, 1
        neg edi
        jne public_6d34b44
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d34b1f
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        ret 8
        public_6d34b1f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d34b38
        cmp dword ptr ds : [eax+8], esi
        jne public_6d34b38
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d34b38 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d34b44 : nop
        inc edx
        cmp edx, eax
        jae public_6d34b52
        cmp ebp, esi
        je public_6d34b52
        add esi, 2
        jmp public_6d34b44
        public_6d34b52 : nop
        mov dword ptr ss : [esp+0x18], edx
        public_6d34b56 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d34b5a : nop
        cmp dword ptr ds : [ebx+0xC], edx
        ja public_6d34ba3
        nop 
        public_6d34b60 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d34b8c
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d34b9a
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d34b7d : nop
        cmp dword ptr ds : [ebx+0xC], edx
        je public_6d34ba3
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        lea esi, ds:[esi+edi*2]
        jmp public_6d34b60
        public_6d34b8c : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d34b9a
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d34b9a
        jmp public_6d34b7d
        public_6d34b9a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6d34ba3 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d34ad0)
    }
}

#undef public_6d34b1f
#undef public_6d34b38
#undef public_6d34b44
#undef public_6d34b52
#undef public_6d34b56
#undef public_6d34b5a
#undef public_6d34b60
#undef public_6d34b7d
#undef public_6d34b8c
#undef public_6d34b9a
#undef public_6d34ba3
