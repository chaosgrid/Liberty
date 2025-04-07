#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6906);

#define public_6ef693a _public_6ef693a
#define public_6ef6943 _public_6ef6943
#define public_6ef694b _public_6ef694b
#define public_6ef6954 _public_6ef6954
#define public_6ef695b _public_6ef695b
#define public_6ef6967 _public_6ef6967
#define public_6ef6970 _public_6ef6970
#define public_6ef697e _public_6ef697e
#define public_6ef698a _public_6ef698a
#define public_6ef6991 _public_6ef6991
#define public_6ef6996 _public_6ef6996
#define public_6ef699e _public_6ef699e
#define public_6ef69a1 _public_6ef69a1
#define public_6ef69b9 _public_6ef69b9
#define public_6ef69c2 _public_6ef69c2
#define public_6ef69d3 _public_6ef69d3
#define public_6ef69dc _public_6ef69dc
#define public_6ef69e3 _public_6ef69e3
#define public_6ef69f3 _public_6ef69f3
#define public_6ef69fa _public_6ef69fa
#define public_6ef6a0b _public_6ef6a0b
#define public_6ef6a14 _public_6ef6a14
#define public_6ef6a19 _public_6ef6a19
#define public_6ef6a23 _public_6ef6a23
#define public_6ef6a25 _public_6ef6a25

PROC_DECLARE(0x6ef6906, internal_6ef6906, public_6ef6906);
extern "C" NAKED register_t __cdecl internal_6ef6906()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea ebx, ds:[ecx+0xF8]
        cmp esi, edx
        mov dword ptr ss : [ebp-4], edi
        mov eax, edi
        mov dword ptr ss : [ebp+8], ebx
        jb public_6ef694b
        lea eax, ds:[edi+edx]
        mov byte ptr ds : [edi], dl
        cmp eax, ebx
        jae public_6ef693a
        add dword ptr ds : [ecx], edx
        sub dword ptr ds : [ecx+4], edx
        jmp public_6ef6943
        public_6ef693a : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_6ef6943 : nop
        lea eax, ds:[edi+8]
        jmp public_6ef6a19
        public_6ef694b : nop
        add esi, edi
        cmp byte ptr ds : [esi], 0
        je public_6ef6954
        mov eax, esi
        public_6ef6954 : nop
        lea esi, ds:[eax+edx]
        cmp esi, ebx
        jae public_6ef699e
        public_6ef695b : nop
        mov bl, byte ptr ds : [eax]
        test bl, bl
        jne public_6ef6991
        push 1
        lea ebx, ds:[eax+1]
        pop esi
        public_6ef6967 : nop
        cmp byte ptr ds : [ebx], 0
        jne public_6ef6970
        inc ebx
        inc esi
        jmp public_6ef6967
        public_6ef6970 : nop
        cmp esi, edx
        jae public_6ef69c2
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6ef697e
        mov dword ptr ds : [ecx+4], esi
        jmp public_6ef698a
        public_6ef697e : nop
        sub dword ptr ss : [ebp+0xC], esi
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_6ef6a23
        public_6ef698a : nop
        mov edi, dword ptr ss : [ebp-4]
        mov eax, ebx
        jmp public_6ef6996
        public_6ef6991 : nop
        movzx esi, bl
        add eax, esi
        public_6ef6996 : nop
        lea esi, ds:[eax+edx]
        cmp esi, dword ptr ss : [ebp+8]
        jb public_6ef695b
        public_6ef699e : nop
        lea esi, ds:[ecx+8]
        public_6ef69a1 : nop
        cmp esi, edi
        jae public_6ef6a23
        lea eax, ds:[esi+edx]
        cmp eax, dword ptr ss : [ebp+8]
        jae public_6ef6a23
        mov al, byte ptr ds : [esi]
        test al, al
        jne public_6ef69f3
        push 1
        lea ebx, ds:[esi+1]
        pop eax
        public_6ef69b9 : nop
        cmp byte ptr ds : [ebx], 0
        jne public_6ef69e3
        inc ebx
        inc eax
        jmp public_6ef69b9
        public_6ef69c2 : nop
        lea ebx, ds:[eax+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_6ef69d3
        sub esi, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], esi
        jmp public_6ef69dc
        public_6ef69d3 : nop
        and dword ptr ds : [ecx+4], 0
        lea esi, ds:[ecx+8]
        mov dword ptr ds : [ecx], esi
        public_6ef69dc : nop
        mov byte ptr ds : [eax], dl
        add eax, 8
        jmp public_6ef6a19
        public_6ef69e3 : nop
        cmp eax, edx
        jae public_6ef69fa
        sub dword ptr ss : [ebp+0xC], eax
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_6ef6a23
        mov esi, ebx
        jmp public_6ef69a1
        public_6ef69f3 : nop
        movzx eax, al
        add esi, eax
        jmp public_6ef69a1
        public_6ef69fa : nop
        lea ebx, ds:[esi+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_6ef6a0b
        sub eax, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ef6a14
        public_6ef6a0b : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_6ef6a14 : nop
        mov byte ptr ds : [esi], dl
        lea eax, ds:[esi+8]
        public_6ef6a19 : nop
        imul ecx, 0xF
        shl eax, 4
        sub eax, ecx
        jmp public_6ef6a25
        public_6ef6a23 : nop
        xor eax, eax
        public_6ef6a25 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6906)
    }
}

#undef public_6ef693a
#undef public_6ef6943
#undef public_6ef694b
#undef public_6ef6954
#undef public_6ef695b
#undef public_6ef6967
#undef public_6ef6970
#undef public_6ef697e
#undef public_6ef698a
#undef public_6ef6991
#undef public_6ef6996
#undef public_6ef699e
#undef public_6ef69a1
#undef public_6ef69b9
#undef public_6ef69c2
#undef public_6ef69d3
#undef public_6ef69dc
#undef public_6ef69e3
#undef public_6ef69f3
#undef public_6ef69fa
#undef public_6ef6a0b
#undef public_6ef6a14
#undef public_6ef6a19
#undef public_6ef6a23
#undef public_6ef6a25
