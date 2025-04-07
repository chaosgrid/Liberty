#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281bf7 _public_6281bf7
#define public_6281c0c _public_6281c0c
#define public_6281c2f _public_6281c2f
#define public_6281c41 _public_6281c41

PROC_DECLARE(0x6281bc0, internal_6281bc0, public_6281bc0);
extern "C" NAKED register_t __cdecl internal_6281bc0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov ebp, ecx
        push 0x14
        mov byte ptr ss : [ebp], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6281c41
        push ebx
        public_6281bf7 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6281c0c
        mov ebx, eax
        public_6281c0c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281c2f
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], edx
        public_6281c2f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6281bf7
        pop ebx
        public_6281c41 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6281bc0)
    }
}

#undef public_6281bf7
#undef public_6281c0c
#undef public_6281c2f
#undef public_6281c41
