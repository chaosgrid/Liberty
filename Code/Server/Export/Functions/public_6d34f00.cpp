#include "Server-PCH.h"


#define public_6d34f58 _public_6d34f58
#define public_6d34f72 _public_6d34f72
#define public_6d34f80 _public_6d34f80
#define public_6d34f98 _public_6d34f98
#define public_6d34f9c _public_6d34f9c
#define public_6d34fa5 _public_6d34fa5
#define public_6d34fc2 _public_6d34fc2
#define public_6d34fd5 _public_6d34fd5
#define public_6d34fe3 _public_6d34fe3
#define public_6d34fed _public_6d34fed

PROC_DECLARE(0x6d34f00, internal_6d34f00, public_6d34f00);
extern "C" NAKED register_t __cdecl internal_6d34f00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+0x10]
        xor ebp, ebp
        xor ebx, ebx
        test edx, edx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, esi
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d34f9c
        mov cx, word ptr ds : [esi]
        test cx, cx
        je public_6d34f9c
        cmp cx, 0xA
        je public_6d34f9c
        add esi, 2
        mov ebx, esi
        sub ebx, eax
        sar ebx, 1
        neg ebx
        jne public_6d34f80
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6d34f58
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d34f58 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d34f72
        cmp dword ptr ds : [eax+8], esi
        jne public_6d34f72
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d34f72 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        nop 
        public_6d34f80 : nop
        inc ebp
        cmp ebp, edx
        jae public_6d34f98
        mov ax, word ptr ds : [esi]
        test ax, ax
        je public_6d34f98
        cmp ax, 0xA
        je public_6d34f98
        add esi, 2
        jmp public_6d34f80
        public_6d34f98 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        public_6d34f9c : nop
        cmp dword ptr ds : [edi+0xC], ebp
        ja public_6d34fed
        mov edi, dword ptr ss : [esp+0x18]
        public_6d34fa5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d34fd5
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d34fe3
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d34fc2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], ebp
        je public_6d34fed
        dec ebp
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[esi+ebx*2]
        jmp public_6d34fa5
        public_6d34fd5 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d34fe3
        cmp dword ptr ds : [edi+8], esi
        jne public_6d34fe3
        jmp public_6d34fc2
        public_6d34fe3 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d34fed : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d34f00)
    }
}

#undef public_6d34f58
#undef public_6d34f72
#undef public_6d34f80
#undef public_6d34f98
#undef public_6d34f9c
#undef public_6d34fa5
#undef public_6d34fc2
#undef public_6d34fd5
#undef public_6d34fe3
#undef public_6d34fed
