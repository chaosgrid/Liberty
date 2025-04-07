#include "THORN-PCH.h"


#define public_6f377d3 _public_6f377d3
#define public_6f377d5 _public_6f377d5
#define public_6f377f9 _public_6f377f9
#define public_6f377fd _public_6f377fd
#define public_6f37802 _public_6f37802
#define public_6f37812 _public_6f37812
#define public_6f37828 _public_6f37828
#define public_6f37857 _public_6f37857

PROC_DECLARE(0x6f377c0, internal_6f377c0, public_6f377c0);
extern "C" NAKED register_t __cdecl internal_6f377c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5acd4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f37812
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f377d3 : nop
        mov esi, ebp
        public_6f377d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f377fd
        test cl, cl
        je public_6f377f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f377fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f377d5
        public_6f377f9 : nop
        xor eax, eax
        jmp public_6f37802
        public_6f377fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f37802 : nop
        test eax, eax
        je public_6f37828
        mov eax, dword ptr ds : [edi*8+public_6f5acdc]
        inc edi
        test eax, eax
        jne public_6f377d3
        public_6f37812 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f37828 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5acd8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6f37857
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
        public_6f37857 : nop
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
        UNREACHABLE_TRAP(0x6f377c0)
    }
}

#undef public_6f377d3
#undef public_6f377d5
#undef public_6f377f9
#undef public_6f377fd
#undef public_6f37802
#undef public_6f37812
#undef public_6f37828
#undef public_6f37857
