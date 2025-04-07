#include "Shading-PCH.h"


#define public_6ecf113 _public_6ecf113
#define public_6ecf115 _public_6ecf115
#define public_6ecf139 _public_6ecf139
#define public_6ecf13d _public_6ecf13d
#define public_6ecf142 _public_6ecf142
#define public_6ecf152 _public_6ecf152
#define public_6ecf168 _public_6ecf168
#define public_6ecf197 _public_6ecf197

PROC_DECLARE(0x6ecf100, internal_6ecf100, public_6ecf100);
extern "C" NAKED register_t __cdecl internal_6ecf100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2fe0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ecf152
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ecf113 : nop
        mov esi, ebp
        public_6ecf115 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ecf13d
        test cl, cl
        je public_6ecf139
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ecf13d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecf115
        public_6ecf139 : nop
        xor eax, eax
        jmp public_6ecf142
        public_6ecf13d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecf142 : nop
        test eax, eax
        je public_6ecf168
        mov eax, dword ptr ds : [edi*8+public_6ed2fe8]
        inc edi
        test eax, eax
        jne public_6ecf113
        public_6ecf152 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ecf168 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed2fe4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ecf197
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ecf197 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecf100)
    }
}

#undef public_6ecf113
#undef public_6ecf115
#undef public_6ecf139
#undef public_6ecf13d
#undef public_6ecf142
#undef public_6ecf152
#undef public_6ecf168
#undef public_6ecf197
