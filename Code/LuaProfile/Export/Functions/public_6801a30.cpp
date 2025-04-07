#include "LuaProfile-PCH.h"


#define public_6801a43 _public_6801a43
#define public_6801a45 _public_6801a45
#define public_6801a69 _public_6801a69
#define public_6801a6d _public_6801a6d
#define public_6801a72 _public_6801a72
#define public_6801a82 _public_6801a82
#define public_6801a98 _public_6801a98
#define public_6801ac7 _public_6801ac7

PROC_DECLARE(0x6801a30, internal_6801a30, public_6801a30);
extern "C" NAKED register_t __cdecl internal_6801a30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680c160]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6801a82
        mov ebp, dword ptr ss : [esp+0x18]
        public_6801a43 : nop
        mov esi, ebp
        public_6801a45 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6801a6d
        test cl, cl
        je public_6801a69
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6801a6d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6801a45
        public_6801a69 : nop
        xor eax, eax
        jmp public_6801a72
        public_6801a6d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6801a72 : nop
        test eax, eax
        je public_6801a98
        mov eax, dword ptr ds : [edi*8+public_680c168]
        inc edi
        test eax, eax
        jne public_6801a43
        public_6801a82 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6801a98 : nop
        mov eax, dword ptr ds : [edi*8+public_680c164]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6801ac7
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
        public_6801ac7 : nop
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
        UNREACHABLE_TRAP(0x6801a30)
    }
}

#undef public_6801a43
#undef public_6801a45
#undef public_6801a69
#undef public_6801a6d
#undef public_6801a72
#undef public_6801a82
#undef public_6801a98
#undef public_6801ac7
