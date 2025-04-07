#include "Server-PCH.h"


#define public_6d213bb _public_6d213bb
#define public_6d213c4 _public_6d213c4
#define public_6d21425 _public_6d21425
#define public_6d21427 _public_6d21427
#define public_6d21434 _public_6d21434

PROC_DECLARE(0x6d21340, internal_6d21340, public_6d21340);
extern "C" NAKED register_t __cdecl internal_6d21340()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0x28]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ds : [eax+0x1008]
        shl ebx, 5
        add ebx, esi
        mov esi, dword ptr ds : [eax+0x1004]
        shl edx, 5
        add ecx, 0xFFFFFFFC
        add edx, ebx
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], ecx
        jne public_6d213bb
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov ecx, esi
        public_6d213bb : nop
        cmp ebx, edx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d21434
        public_6d213c4 : nop
        mov edi, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFE0
        mov ecx, edi
        sub edx, 0x20
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d21425
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        jmp public_6d21427
        public_6d21425 : nop
        mov esi, ecx
        public_6d21427 : nop
        cmp edx, ebx
        mov ecx, 8
        mov edi, edx
        rep movsd
        jne public_6d213c4
        public_6d21434 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d21340)
    }
}

#undef public_6d213bb
#undef public_6d213c4
#undef public_6d21425
#undef public_6d21427
#undef public_6d21434
