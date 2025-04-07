#include "Server-PCH.h"


#define public_6d3cc65 _public_6d3cc65
#define public_6d3cc78 _public_6d3cc78
#define public_6d3cc82 _public_6d3cc82
#define public_6d3cca1 _public_6d3cca1
#define public_6d3cd01 _public_6d3cd01
#define public_6d3cd03 _public_6d3cd03

PROC_DECLARE(0x6d3cc20, internal_6d3cc20, public_6d3cc20);
extern "C" NAKED register_t __cdecl internal_6d3cc20()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [eax+0x1008]
        sub edx, 4
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [edx]
        cmp edx, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3cca1
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edx+0xC]
        cmp edi, ecx
        mov esi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ds : [edx+0x18]
        je public_6d3cc82
        mov edx, edi
        sub ebx, edi
        public_6d3cc65 : nop
        mov di, word ptr ds : [esi]
        test di, di
        je public_6d3cca1
        cmp word ptr ds : [edx], di
        je public_6d3cc78
        cmp word ptr ds : [edx+ebx], di
        jne public_6d3cca1
        public_6d3cc78 : nop
        add edx, 2
        add esi, 2
        cmp edx, ecx
        jne public_6d3cc65
        public_6d3cc82 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x10], esi
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3cca1 : nop
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d3cd01
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
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
        mov eax, edx
        jmp public_6d3cd03
        public_6d3cd01 : nop
        mov eax, ecx
        public_6d3cd03 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], ecx
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d3cc20)
    }
}

#undef public_6d3cc65
#undef public_6d3cc78
#undef public_6d3cc82
#undef public_6d3cca1
#undef public_6d3cd01
#undef public_6d3cd03
