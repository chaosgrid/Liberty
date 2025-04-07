#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627e946 _public_627e946
#define public_627e962 _public_627e962
#define public_627e96c _public_627e96c
#define public_627e976 _public_627e976
#define public_627e98d _public_627e98d
#define public_627e9a0 _public_627e9a0

PROC_DECLARE(0x627e930, internal_627e930, public_627e930);
extern "C" NAKED register_t __cdecl internal_627e930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_627e9a0
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_627e946 : nop
        mov eax, dword ptr ds : [public_63fc434]
        test eax, eax
        mov esi, dword ptr ds : [edi+4]
        je public_627e962
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc434], ecx
        dec dword ptr ds : [public_63fc440]
        jmp public_627e96c
        public_627e962 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_627e96c : nop
        test esi, esi
        mov dword ptr ds : [eax], edi
        mov ecx, esi
        jne public_627e976
        mov ecx, eax
        public_627e976 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_627e98d
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_627e98d : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_627e946
        pop edi
        pop esi
        public_627e9a0 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x627e930)
    }
}

#undef public_627e946
#undef public_627e962
#undef public_627e96c
#undef public_627e976
#undef public_627e98d
#undef public_627e9a0
