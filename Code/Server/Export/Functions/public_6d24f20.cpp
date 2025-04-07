#include "Server-PCH.h"


#define public_6d24f85 _public_6d24f85
#define public_6d24f93 _public_6d24f93

PROC_DECLARE(0x6d24f20, internal_6d24f20, public_6d24f20);
extern "C" NAKED register_t __cdecl internal_6d24f20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edx, 0xFFFFFFFC
        cmp edx, esi
        mov dword ptr ds : [eax+0x1008], edx
        jne public_6d24f85
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+0x1000], edx
        add edx, 0x10
        mov dword ptr ds : [eax+0x1004], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+0x1008], edx
        mov edx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0x100C], edx
        mov edx, esi
        public_6d24f85 : nop
        cmp byte ptr ds : [edx], 0
        je public_6d24f93
        mov ecx, dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0xC]
        public_6d24f93 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24f20)
    }
}

#undef public_6d24f85
#undef public_6d24f93
