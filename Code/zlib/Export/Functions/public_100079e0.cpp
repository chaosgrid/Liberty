#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100079e0);

#define public_10007a24 _public_10007a24
#define public_10007a5d _public_10007a5d

PROC_DECLARE(0x100079e0, internal_100079e0, public_100079e0);
extern "C" NAKED register_t __cdecl internal_100079e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [eax+0x16B4]
        cmp ecx, 0x10
        push ebx
        jne public_10007a24
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
        public_10007a24 : nop
        cmp ecx, 8
        jl public_10007a5d
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        movzx cx, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+0x14]
        mov word ptr ds : [eax+0x16B0], cx
        mov ecx, dword ptr ds : [eax+0x16B4]
        inc edx
        add ecx, 0xFFFFFFF8
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007a5d : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x100079e0)
    }
}

#undef public_10007a24
#undef public_10007a5d
