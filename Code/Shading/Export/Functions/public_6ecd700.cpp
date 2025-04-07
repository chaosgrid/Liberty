#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece250);

#define public_6ecd759 _public_6ecd759
#define public_6ecd766 _public_6ecd766
#define public_6ecd773 _public_6ecd773
#define public_6ecd780 _public_6ecd780
#define public_6ecd790 _public_6ecd790
#define public_6ecd7b2 _public_6ecd7b2
#define public_6ecd7c7 _public_6ecd7c7
#define public_6ecd7cc _public_6ecd7cc
#define public_6ecd7fc _public_6ecd7fc
#define public_6ecd804 _public_6ecd804
#define public_6ecd813 _public_6ecd813

PROC_DECLARE(0x6ecd700, internal_6ecd700, public_6ecd700);
extern "C" NAKED register_t __cdecl internal_6ecd700()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6ecc4e0
        mov esi, eax
        cmp dword ptr ss : [esp+0x24], edi
        je public_6ecd7b2
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ds:[ebx+0x28]
        call public_6ecaa00
        mov edi, dword ptr ss : [esp+0x20]
        cmp edi, dword ptr ds : [ebx+0x2C]
        jne public_6ecd759
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jmp public_6ecd7c7
        public_6ecd759 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [edi+0x18]
        cmp ecx, eax
        je public_6ecd7c7
        mov edx, dword ptr ss : [ebp+4]
        public_6ecd766 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6ecd773
        add ecx, 4
        cmp ecx, eax
        jne public_6ecd766
        jmp public_6ecd7c7
        public_6ecd773 : nop
        mov edx, dword ptr ds : [edi+0x1C]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6ecd790
        sub ecx, eax
        nop 
        public_6ecd780 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebp
        add eax, 4
        cmp eax, edx
        jne public_6ecd780
        mov ebp, dword ptr ss : [esp+0x28]
        public_6ecd790 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        add ecx, 0xFFFFFFFC
        test esi, esi
        mov dword ptr ds : [edi+0x1C], ecx
        je public_6ecd7c7
        mov eax, dword ptr ds : [esi]
        cmp eax, 1
        jle public_6ecd7cc
        dec eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ecd7c7
        public_6ecd7b2 : nop
        cmp esi, edi
        je public_6ecd7c7
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        dec edx
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], edi
        public_6ecd7c7 : nop
        cmp dword ptr ds : [esi], 1
        jg public_6ecd813
        public_6ecd7cc : nop
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x28]
        lea esi, ds:[ebx+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_6ec6120
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6ecd7fc
        mov edx, dword ptr ss : [esp+0x28]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ecd7fc
        lea eax, ss:[esp+0x20]
        jmp public_6ecd804
        public_6ecd7fc : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6ecd804 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6ece250
        public_6ecd813 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd700)
    }
}

#undef public_6ecd759
#undef public_6ecd766
#undef public_6ecd773
#undef public_6ecd780
#undef public_6ecd790
#undef public_6ecd7b2
#undef public_6ecd7c7
#undef public_6ecd7cc
#undef public_6ecd7fc
#undef public_6ecd804
#undef public_6ecd813
