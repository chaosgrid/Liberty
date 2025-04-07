#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6268770);

#define public_6268795 _public_6268795
#define public_62687e6 _public_62687e6
#define public_62687e8 _public_62687e8
#define public_62687ec _public_62687ec
#define public_6268821 _public_6268821
#define public_6268836 _public_6268836

PROC_DECLARE(0x6268770, internal_6268770, public_6268770);
extern "C" NAKED register_t __cdecl internal_6268770()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6268836
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_62687ec
        public_6268795 : nop
        cmp esi, ebx
        je public_6268821
        mov dx, word ptr ds : [esi+0xA]
        cmp dx, word ptr ds : [eax+0xA]
        jbe public_62687e6
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
        jmp public_62687e8
        public_62687e6 : nop
        mov eax, dword ptr ds : [eax]
        public_62687e8 : nop
        cmp eax, edi
        jne public_6268795
        public_62687ec : nop
        cmp esi, ebx
        je public_6268821
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
        public_6268821 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_6268836 : nop
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6268770)
    }
}

#undef public_6268795
#undef public_62687e6
#undef public_62687e8
#undef public_62687ec
#undef public_6268821
#undef public_6268836
