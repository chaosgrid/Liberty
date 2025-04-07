#include "Server-PCH.h"


#define public_6ceddff _public_6ceddff
#define public_6cede11 _public_6cede11
#define public_6cede19 _public_6cede19

PROC_DECLARE(0x6cedd90, internal_6cedd90, public_6cedd90);
extern "C" NAKED register_t __cdecl internal_6cedd90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_6cede19
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6cede19
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cede19
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x90]
        cmp eax, 9
        jne public_6cede19
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        call dword ptr ds : [public_6d641b8]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_6ceddff
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6ceddff : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cede11
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        public_6cede11 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6cede19 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cedd90)
    }
}

#undef public_6ceddff
#undef public_6cede11
#undef public_6cede19
