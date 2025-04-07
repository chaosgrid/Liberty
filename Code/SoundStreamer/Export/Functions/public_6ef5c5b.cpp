#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5c5b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5f64);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6015);

#define public_6ef5c9b _public_6ef5c9b
#define public_6ef5cab _public_6ef5cab
#define public_6ef5cb9 _public_6ef5cb9
#define public_6ef5cd2 _public_6ef5cd2
#define public_6ef5cd9 _public_6ef5cd9
#define public_6ef5cf3 _public_6ef5cf3
#define public_6ef5cf5 _public_6ef5cf5
#define public_6ef5cf7 _public_6ef5cf7
#define public_6ef5d0a _public_6ef5d0a
#define public_6ef5d0d _public_6ef5d0d
#define public_6ef5d11 _public_6ef5d11
#define public_6ef5d23 _public_6ef5d23
#define public_6ef5d25 _public_6ef5d25
#define public_6ef5d35 _public_6ef5d35
#define public_6ef5d49 _public_6ef5d49
#define public_6ef5d50 _public_6ef5d50
#define public_6ef5d77 _public_6ef5d77
#define public_6ef5d94 _public_6ef5d94
#define public_6ef5dab _public_6ef5dab
#define public_6ef5dae _public_6ef5dae
#define public_6ef5dd7 _public_6ef5dd7
#define public_6ef5de0 _public_6ef5de0
#define public_6ef5dfd _public_6ef5dfd
#define public_6ef5e3d _public_6ef5e3d
#define public_6ef5e6b _public_6ef5e6b
#define public_6ef5e6e _public_6ef5e6e
#define public_6ef5ece _public_6ef5ece
#define public_6ef5ee0 _public_6ef5ee0
#define public_6ef5ef9 _public_6ef5ef9
#define public_6ef5f0f _public_6ef5f0f
#define public_6ef5f12 _public_6ef5f12
#define public_6ef5f1e _public_6ef5f1e
#define public_6ef5f21 _public_6ef5f21
#define public_6ef5f57 _public_6ef5f57
#define public_6ef5f5f _public_6ef5f5f

PROC_DECLARE(0x6ef5c5b, internal_6ef5c5b, public_6ef5c5b);
extern "C" NAKED register_t __cdecl internal_6ef5c5b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ds : [public_6f02664]
        mov edx, dword ptr ds : [public_6f02668]
        push ebx
        push esi
        lea eax, ds:[eax+eax*4]
        push edi
        lea edi, ds:[edx+eax*4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edi
        lea ecx, ds:[eax+0x17]
        and ecx, 0xFFFFFFF0
        mov dword ptr ss : [ebp-0x10], ecx
        sar ecx, 4
        dec ecx
        cmp ecx, 0x20
        jge public_6ef5c9b
        or esi, 0xFFFFFFFF
        shr esi, cl
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0xC], esi
        jmp public_6ef5cab
        public_6ef5c9b : nop
        add ecx, 0xFFFFFFE0
        or eax, 0xFFFFFFFF
        xor esi, esi
        shr eax, cl
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-8], eax
        public_6ef5cab : nop
        mov eax, dword ptr ds : [public_6f0265c]
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ef5cd2
        public_6ef5cb9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ef5cd2
        add ebx, 0x14
        cmp ebx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ebx
        jb public_6ef5cb9
        public_6ef5cd2 : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jne public_6ef5d50
        mov ebx, edx
        public_6ef5cd9 : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ef5cf5
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ef5cf3
        add ebx, 0x14
        jmp public_6ef5cd9
        public_6ef5cf3 : nop
        cmp ebx, eax
        public_6ef5cf5 : nop
        jne public_6ef5d50
        public_6ef5cf7 : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jae public_6ef5d0d
        cmp dword ptr ds : [ebx+8], 0
        jne public_6ef5d0a
        add ebx, 0x14
        mov dword ptr ss : [ebp+8], ebx
        jmp public_6ef5cf7
        public_6ef5d0a : nop
        cmp ebx, dword ptr ss : [ebp-4]
        public_6ef5d0d : nop
        jne public_6ef5d35
        mov ebx, edx
        public_6ef5d11 : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ef5d25
        cmp dword ptr ds : [ebx+8], 0
        jne public_6ef5d23
        add ebx, 0x14
        jmp public_6ef5d11
        public_6ef5d23 : nop
        cmp ebx, eax
        public_6ef5d25 : nop
        jne public_6ef5d35
        call public_6ef5f64
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+8], ebx
        je public_6ef5d49
        public_6ef5d35 : nop
        push ebx
        call public_6ef6015
        pop ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ebx+0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6ef5d50
        public_6ef5d49 : nop
        xor eax, eax
        jmp public_6ef5f5f
        public_6ef5d50 : nop
        mov dword ptr ds : [public_6f0265c], ebx
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [eax]
        cmp edx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], edx
        je public_6ef5d77
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        mov edi, dword ptr ds : [eax+edx*4+0x44]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ef5dae
        public_6ef5d77 : nop
        mov edx, dword ptr ds : [eax+0xC4]
        mov esi, dword ptr ds : [eax+0x44]
        and edx, dword ptr ss : [ebp-8]
        and esi, dword ptr ss : [ebp-0xC]
        and dword ptr ss : [ebp-4], 0
        lea ecx, ds:[eax+0x44]
        or edx, esi
        mov esi, dword ptr ss : [ebp-0xC]
        jne public_6ef5dab
        public_6ef5d94 : nop
        mov edx, dword ptr ds : [ecx+0x84]
        inc dword ptr ss : [ebp-4]
        and edx, dword ptr ss : [ebp-8]
        add ecx, 4
        mov edi, esi
        and edi, dword ptr ds : [ecx]
        or edx, edi
        je public_6ef5d94
        public_6ef5dab : nop
        mov edx, dword ptr ss : [ebp-4]
        public_6ef5dae : nop
        mov ecx, edx
        xor edi, edi
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [eax+edx*4+0x44]
        and ecx, esi
        jne public_6ef5dd7
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        push 0x20
        and ecx, dword ptr ss : [ebp-8]
        pop edi
        public_6ef5dd7 : nop
        test ecx, ecx
        jl public_6ef5de0
        shl ecx, 1
        inc edi
        jmp public_6ef5dd7
        public_6ef5de0 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+edi*8+4]
        mov ecx, dword ptr ds : [edx]
        sub ecx, dword ptr ss : [ebp-0x10]
        mov esi, ecx
        mov dword ptr ss : [ebp-8], ecx
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jle public_6ef5dfd
        push 0x3F
        pop esi
        public_6ef5dfd : nop
        cmp esi, edi
        je public_6ef5f12
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ef5e6e
        cmp edi, 0x20
        jge public_6ef5e3d
        mov ebx, 0x80000000
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+edi+4]
        not ebx
        mov dword ptr ss : [ebp-0x14], ebx
        and ebx, dword ptr ds : [eax+ecx*4+0x44]
        mov dword ptr ds : [eax+ecx*4+0x44], ebx
        dec byte ptr ds : [edi]
        jne public_6ef5e6b
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx], ecx
        jmp public_6ef5e6e
        public_6ef5e3d : nop
        lea ecx, ds:[edi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+edi+4]
        lea ecx, ds:[eax+ecx*4+0xC4]
        not ebx
        and dword ptr ds : [ecx], ebx
        dec byte ptr ds : [edi]
        mov dword ptr ss : [ebp-0x14], ebx
        jne public_6ef5e6b
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx+4], ecx
        jmp public_6ef5e6e
        public_6ef5e6b : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ef5e6e : nop
        mov ecx, dword ptr ds : [edx+8]
        mov edi, dword ptr ds : [edx+4]
        cmp dword ptr ss : [ebp-8], 0
        mov dword ptr ds : [ecx+4], edi
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edi
        je public_6ef5f1e
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ds : [ecx+esi*8+4]
        lea ecx, ds:[ecx+esi*8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ef5f0f
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xB], cl
        jge public_6ef5ee0
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_6ef5ece
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        or dword ptr ds : [ebx], edi
        public_6ef5ece : nop
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        or dword ptr ds : [eax+ecx*4+0x44], edi
        jmp public_6ef5f0f
        public_6ef5ee0 : nop
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_6ef5ef9
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        or dword ptr ds : [ebx+4], edi
        public_6ef5ef9 : nop
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+ecx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov esi, 0x80000000
        shr esi, cl
        or dword ptr ds : [edi], esi
        public_6ef5f0f : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6ef5f12 : nop
        test ecx, ecx
        je public_6ef5f21
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+edx-4], ecx
        jmp public_6ef5f21
        public_6ef5f1e : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6ef5f21 : nop
        mov esi, dword ptr ss : [ebp-0x10]
        add edx, ecx
        lea ecx, ds:[esi+1]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+esi-4], ecx
        mov esi, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        lea edi, ds:[ecx+1]
        mov dword ptr ds : [esi], edi
        jne public_6ef5f57
        cmp ebx, dword ptr ds : [public_6f02660]
        jne public_6ef5f57
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [public_6f02658]
        jne public_6ef5f57
        and dword ptr ds : [public_6f02660], 0
        public_6ef5f57 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        lea eax, ds:[edx+4]
        public_6ef5f5f : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef5c5b)
    }
}

#undef public_6ef5c9b
#undef public_6ef5cab
#undef public_6ef5cb9
#undef public_6ef5cd2
#undef public_6ef5cd9
#undef public_6ef5cf3
#undef public_6ef5cf5
#undef public_6ef5cf7
#undef public_6ef5d0a
#undef public_6ef5d0d
#undef public_6ef5d11
#undef public_6ef5d23
#undef public_6ef5d25
#undef public_6ef5d35
#undef public_6ef5d49
#undef public_6ef5d50
#undef public_6ef5d77
#undef public_6ef5d94
#undef public_6ef5dab
#undef public_6ef5dae
#undef public_6ef5dd7
#undef public_6ef5de0
#undef public_6ef5dfd
#undef public_6ef5e3d
#undef public_6ef5e6b
#undef public_6ef5e6e
#undef public_6ef5ece
#undef public_6ef5ee0
#undef public_6ef5ef9
#undef public_6ef5f0f
#undef public_6ef5f12
#undef public_6ef5f1e
#undef public_6ef5f21
#undef public_6ef5f57
#undef public_6ef5f5f
