#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100079e0);
CLANG_FORWARD_PROC_SYMBOL(public_10007f40);

#define public_10007fac _public_10007fac
#define public_10007fb5 _public_10007fb5
#define public_10008015 _public_10008015
#define public_1000801e _public_1000801e
#define public_1000809d _public_1000809d
#define public_100080a6 _public_100080a6
#define public_10008116 _public_10008116
#define public_10008124 _public_10008124

PROC_DECLARE(0x10007f40, internal_10007f40, public_10007f40);
extern "C" NAKED register_t __cdecl internal_10007f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 2
        shl edx, cl
        push ebx
        push esi
        or word ptr ds : [eax+0x16B0], dx
        cmp ecx, 0xD
        jle public_10007fac
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ds : [eax+0x14]
        mov cl, 0x10
        sub cl, dl
        mov esi, 2
        shr si, cl
        inc ebx
        add edx, 0xFFFFFFF3
        mov dword ptr ds : [eax+0x14], ebx
        mov word ptr ds : [eax+0x16B0], si
        mov dword ptr ds : [eax+0x16B4], edx
        jmp public_10007fb5
        public_10007fac : nop
        add ecx, 3
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007fb5 : nop
        mov ecx, dword ptr ds : [eax+0x16B4]
        xor edx, edx
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        cmp ecx, 9
        jle public_10008015
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ds : [eax+0x14]
        mov cl, 0x10
        sub cl, dl
        xor esi, esi
        shr si, cl
        inc ebx
        add edx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x14], ebx
        mov word ptr ds : [eax+0x16B0], si
        mov dword ptr ds : [eax+0x16B4], edx
        jmp public_1000801e
        public_10008015 : nop
        add ecx, 7
        mov dword ptr ds : [eax+0x16B4], ecx
        public_1000801e : nop
        call public_100079e0
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, dword ptr ds : [eax+0x16AC]
        sub edx, ecx
        add edx, 0xB
        cmp edx, 9
        jge public_10008124
        mov edx, 2
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        cmp ecx, 0xD
        jle public_1000809d
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ds : [eax+0x14]
        mov cl, 0x10
        sub cl, dl
        mov esi, 2
        shr si, cl
        inc ebx
        add edx, 0xFFFFFFF3
        mov dword ptr ds : [eax+0x14], ebx
        mov word ptr ds : [eax+0x16B0], si
        mov dword ptr ds : [eax+0x16B4], edx
        jmp public_100080a6
        public_1000809d : nop
        add ecx, 3
        mov dword ptr ds : [eax+0x16B4], ecx
        public_100080a6 : nop
        mov ecx, dword ptr ds : [eax+0x16B4]
        xor edx, edx
        shl edx, cl
        or word ptr ds : [eax+0x16B0], dx
        cmp ecx, 9
        jle public_10008116
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ds : [eax+0x14]
        mov cl, 0x10
        sub cl, dl
        xor esi, esi
        shr si, cl
        inc ebx
        add edx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x14], ebx
        mov word ptr ds : [eax+0x16B0], si
        mov dword ptr ds : [eax+0x16B4], edx
        call public_100079e0
        pop esi
        mov dword ptr ds : [eax+0x16AC], 7
        pop ebx
        ret 
        public_10008116 : nop
        add ecx, 7
        mov dword ptr ds : [eax+0x16B4], ecx
        call public_100079e0
        public_10008124 : nop
        pop esi
        mov dword ptr ds : [eax+0x16AC], 7
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10007f40)
    }
}

#undef public_10007fac
#undef public_10007fb5
#undef public_10008015
#undef public_1000801e
#undef public_1000809d
#undef public_100080a6
#undef public_10008116
#undef public_10008124
