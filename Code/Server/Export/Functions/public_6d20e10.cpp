#include "Server-PCH.h"


#define public_6d20e87 _public_6d20e87
#define public_6d20e89 _public_6d20e89
#define public_6d20ea6 _public_6d20ea6

PROC_DECLARE(0x6d20e10, internal_6d20e10, public_6d20e10);
extern "C" NAKED register_t __cdecl internal_6d20e10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x18]
        cmp ecx, 0xFFFFFFFF
        je public_6d20ea6
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edx, 0xFFFFFFF4
        cmp edx, esi
        mov dword ptr ds : [eax+0x1008], edx
        jne public_6d20e87
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
        mov eax, esi
        jmp public_6d20e89
        public_6d20e87 : nop
        mov eax, edx
        public_6d20e89 : nop
        mov edi, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        shl ecx, 5
        add ecx, ebx
        pop edi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        mov dword ptr ds : [ecx], edx
        mov byte ptr ds : [ecx+8], al
        pop ebx
        public_6d20ea6 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6d20e10)
    }
}

#undef public_6d20e87
#undef public_6d20e89
#undef public_6d20ea6
