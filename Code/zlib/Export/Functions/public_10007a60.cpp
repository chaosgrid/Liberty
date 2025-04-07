#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10007a60);

#define public_10007aa4 _public_10007aa4
#define public_10007abe _public_10007abe

PROC_DECLARE(0x10007a60, internal_10007a60, public_10007a60);
extern "C" NAKED register_t __cdecl internal_10007a60()
{
    __asm
    {
        mov edx, dword ptr ds : [eax+0x16B4]
        cmp edx, 8
        push ebx
        jle public_10007aa4
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        inc dword ptr ds : [eax+0x14]
        xor ecx, ecx
        mov word ptr ds : [eax+0x16B0], cx
        mov dword ptr ds : [eax+0x16B4], ecx
        pop ebx
        ret 
        public_10007aa4 : nop
        xor ecx, ecx
        cmp edx, ecx
        jle public_10007abe
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [eax+0x16B0]
        push esi
        mov esi, dword ptr ds : [eax+0x14]
        mov byte ptr ds : [edx+esi], bl
        inc dword ptr ds : [eax+0x14]
        pop esi
        public_10007abe : nop
        mov word ptr ds : [eax+0x16B0], cx
        mov dword ptr ds : [eax+0x16B4], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10007a60)
    }
}

#undef public_10007aa4
#undef public_10007abe
