#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271fb0);

#define public_6271fd5 _public_6271fd5
#define public_6272026 _public_6272026
#define public_6272028 _public_6272028
#define public_627202c _public_627202c
#define public_6272061 _public_6272061
#define public_6272076 _public_6272076

PROC_DECLARE(0x6271fb0, internal_6271fb0, public_6271fb0);
extern "C" NAKED register_t __cdecl internal_6271fb0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6272076
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_627202c
        public_6271fd5 : nop
        cmp esi, ebx
        je public_6272061
        mov dx, word ptr ds : [esi+8]
        cmp dx, word ptr ds : [eax+8]
        jae public_6272026
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
        jmp public_6272028
        public_6272026 : nop
        mov eax, dword ptr ds : [eax]
        public_6272028 : nop
        cmp eax, edi
        jne public_6271fd5
        public_627202c : nop
        cmp esi, ebx
        je public_6272061
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
        public_6272061 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_6272076 : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6271fb0)
    }
}

#undef public_6271fd5
#undef public_6272026
#undef public_6272028
#undef public_627202c
#undef public_6272061
#undef public_6272076
