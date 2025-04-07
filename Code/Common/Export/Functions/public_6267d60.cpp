#include "Common-PCH.h"


#define public_6267d77 _public_6267d77
#define public_6267d94 _public_6267d94
#define public_6267d98 _public_6267d98
#define public_6267d9c _public_6267d9c
#define public_6267da4 _public_6267da4

PROC_DECLARE(0x6267d60, internal_6267d60, public_6267d60);
extern "C" NAKED register_t __cdecl internal_6267d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp eax, edi
        je public_6267d98
        public_6267d77 : nop
        cmp edx, ebx
        je public_6267d94
        mov cx, word ptr ds : [eax]
        mov si, word ptr ds : [edx]
        cmp si, cx
        ja public_6267d9c
        jb public_6267da4
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6267d77
        jmp public_6267d98
        public_6267d94 : nop
        cmp eax, edi
        jne public_6267da4
        public_6267d98 : nop
        cmp edx, ebx
        je public_6267da4
        public_6267d9c : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6267da4 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6267d60)
    }
}

#undef public_6267d77
#undef public_6267d94
#undef public_6267d98
#undef public_6267d9c
#undef public_6267da4
