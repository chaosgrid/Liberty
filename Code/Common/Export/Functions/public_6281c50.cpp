#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281c87 _public_6281c87
#define public_6281c9c _public_6281c9c
#define public_6281cc0 _public_6281cc0
#define public_6281cd3 _public_6281cd3

PROC_DECLARE(0x6281c50, internal_6281c50, public_6281c50);
extern "C" NAKED register_t __cdecl internal_6281c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x14
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp ecx, eax
        mov ebp, ecx
        je public_6281cd3
        push ebx
        public_6281c87 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6281c9c
        mov ebx, eax
        public_6281c9c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6281cc0
        mov ecx, ebp
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_6281cc0 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc edx
        add ebp, 0xC
        cmp ebp, eax
        mov dword ptr ds : [esi+8], edx
        jne public_6281c87
        pop ebx
        public_6281cd3 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6281c50)
    }
}

#undef public_6281c87
#undef public_6281c9c
#undef public_6281cc0
#undef public_6281cd3
