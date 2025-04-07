#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3abdb _public_6d3abdb
#define public_6d3ac09 _public_6d3ac09
#define public_6d3ac20 _public_6d3ac20
#define public_6d3ac46 _public_6d3ac46
#define public_6d3ac55 _public_6d3ac55
#define public_6d3ac59 _public_6d3ac59
#define public_6d3ac6d _public_6d3ac6d
#define public_6d3ac6f _public_6d3ac6f
#define public_6d3ac80 _public_6d3ac80

PROC_DECLARE(0x6d3ab90, internal_6d3ab90, public_6d3ab90);
extern "C" NAKED register_t __cdecl internal_6d3ab90()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        lea edi, ds:[esi+0x10]
        push edi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx]
        push esi
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3ac59
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0xC]
        sub edx, ecx
        test edx, 0xFFFFFFFE
        jne public_6d3ac09
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x14], eax
        public_6d3abdb : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3ac6d
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3ac6f
        public_6d3ac09 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d3ac55
        cmp eax, 1
        mov dword ptr ss : [esp+0x14], 1
        jbe public_6d3abdb
        lea ecx, ds:[ecx]
        public_6d3ac20 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        push edi
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3ac46
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6d3ac20
        jmp public_6d3abdb
        public_6d3ac46 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3ac55 : nop
        mov dword ptr ds : [edi], ecx
        jmp public_6d3abdb
        public_6d3ac59 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d3abdb
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3ac6d : nop
        mov eax, edx
        public_6d3ac6f : nop
        test eax, eax
        je public_6d3ac80
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        public_6d3ac80 : nop
        mov edx, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3ab90)
    }
}

#undef public_6d3abdb
#undef public_6d3ac09
#undef public_6d3ac20
#undef public_6d3ac46
#undef public_6d3ac55
#undef public_6d3ac59
#undef public_6d3ac6d
#undef public_6d3ac6f
#undef public_6d3ac80
