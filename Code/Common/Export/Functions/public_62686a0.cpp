#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62686a0);

#define public_62686c5 _public_62686c5
#define public_6268716 _public_6268716
#define public_6268718 _public_6268718
#define public_626871c _public_626871c
#define public_6268751 _public_6268751
#define public_6268766 _public_6268766

PROC_DECLARE(0x62686a0, internal_62686a0, public_62686a0);
extern "C" NAKED register_t __cdecl internal_62686a0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6268766
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_626871c
        public_62686c5 : nop
        cmp esi, ebx
        je public_6268751
        mov dx, word ptr ds : [esi+0xA]
        cmp dx, word ptr ds : [eax+0xA]
        jae public_6268716
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+4], esi
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, edx
        jmp public_6268718
        public_6268716 : nop
        mov eax, dword ptr ds : [eax]
        public_6268718 : nop
        cmp eax, edi
        jne public_62686c5
        public_626871c : nop
        cmp esi, ebx
        je public_6268751
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [edx+4], eax
        public_6268751 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_6268766 : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62686a0)
    }
}

#undef public_62686c5
#undef public_6268716
#undef public_6268718
#undef public_626871c
#undef public_6268751
#undef public_6268766
