#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c8f4);

#define public_6d5c926 _public_6d5c926
#define public_6d5c92b _public_6d5c92b
#define public_6d5c94a _public_6d5c94a
#define public_6d5c95f _public_6d5c95f
#define public_6d5c979 _public_6d5c979
#define public_6d5c999 _public_6d5c999
#define public_6d5c9d7 _public_6d5c9d7
#define public_6d5c9f4 _public_6d5c9f4
#define public_6d5ca0e _public_6d5ca0e
#define public_6d5ca33 _public_6d5ca33
#define public_6d5ca40 _public_6d5ca40
#define public_6d5ca56 _public_6d5ca56
#define public_6d5caa1 _public_6d5caa1
#define public_6d5cab9 _public_6d5cab9
#define public_6d5cacc _public_6d5cacc
#define public_6d5cacf _public_6d5cacf
#define public_6d5cae2 _public_6d5cae2
#define public_6d5caf8 _public_6d5caf8
#define public_6d5cb0b _public_6d5cb0b
#define public_6d5cb1c _public_6d5cb1c
#define public_6d5cb22 _public_6d5cb22
#define public_6d5cb3a _public_6d5cb3a
#define public_6d5cb42 _public_6d5cb42
#define public_6d5cb58 _public_6d5cb58
#define public_6d5cb61 _public_6d5cb61
#define public_6d5cb71 _public_6d5cb71
#define public_6d5cb78 _public_6d5cb78

PROC_DECLARE(0x6d5c8f4, internal_6d5c8f4, public_6d5c8f4);
extern "C" NAKED register_t __cdecl internal_6d5c8f4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [edi+0x34]
        mov ebx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [edi+0x30]
        cmp ecx, eax
        mov dword ptr ss : [ebp+0x1C], ecx
        jae public_6d5c926
        sub eax, ecx
        dec eax
        jmp public_6d5c92b
        public_6d5c926 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, ecx
        public_6d5c92b : nop
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax*4+public_6d6ff60]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d5c95f
        public_6d5c94a : nop
        mov eax, dword ptr ss : [ebp-8]
        movzx eax, byte ptr ds : [eax]
        dec dword ptr ss : [ebp-4]
        mov ecx, edx
        shl eax, cl
        or ebx, eax
        inc dword ptr ss : [ebp-8]
        add edx, 8
        public_6d5c95f : nop
        cmp edx, 0x14
        jb public_6d5c94a
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        and eax, ebx
        lea eax, ds:[ecx+eax*8]
        movzx ecx, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0xC], ecx
        test ecx, ecx
        jmp public_6d5c999
        public_6d5c979 : nop
        test cl, 0x40
        jne public_6d5cb42
        mov ecx, dword ptr ds : [ecx*4+public_6d6ff60]
        and ecx, ebx
        add ecx, dword ptr ds : [eax+4]
        lea eax, ds:[eax+ecx*8]
        movzx ecx, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0xC], ecx
        test ecx, ecx
        public_6d5c999 : nop
        movzx ecx, byte ptr ds : [eax+1]
        je public_6d5cae2
        shr ebx, cl
        movzx ecx, byte ptr ds : [eax+1]
        sub edx, ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        test cl, 0x10
        je public_6d5c979
        and ecx, 0xF
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ds : [ecx*4+public_6d6ff60]
        and ecx, ebx
        add ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        shr ebx, cl
        sub edx, ecx
        cmp edx, 0xF
        mov dword ptr ss : [ebp+8], ebx
        jae public_6d5c9f4
        public_6d5c9d7 : nop
        mov eax, dword ptr ss : [ebp-8]
        movzx eax, byte ptr ds : [eax]
        dec dword ptr ss : [ebp-4]
        mov ecx, edx
        shl eax, cl
        add edx, 8
        or ebx, eax
        inc dword ptr ss : [ebp-8]
        cmp edx, 0xF
        jb public_6d5c9d7
        mov dword ptr ss : [ebp+8], ebx
        public_6d5c9f4 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        and eax, ebx
        lea eax, ds:[ecx+eax*8]
        movzx ecx, byte ptr ds : [eax+1]
        shr dword ptr ss : [ebp+8], cl
        movzx ecx, byte ptr ds : [eax+1]
        sub edx, ecx
        jmp public_6d5ca33
        public_6d5ca0e : nop
        test bl, 0x40
        jne public_6d5cb22
        mov ecx, dword ptr ds : [ebx*4+public_6d6ff60]
        and ecx, dword ptr ss : [ebp+8]
        add ecx, dword ptr ds : [eax+4]
        lea eax, ds:[eax+ecx*8]
        movzx ecx, byte ptr ds : [eax+1]
        shr dword ptr ss : [ebp+8], cl
        mov dword ptr ss : [ebp+0xC], ecx
        sub edx, ecx
        public_6d5ca33 : nop
        movzx ebx, byte ptr ds : [eax]
        test bl, 0x10
        je public_6d5ca0e
        and ebx, 0xF
        jmp public_6d5ca56
        public_6d5ca40 : nop
        mov ecx, dword ptr ss : [ebp-8]
        movzx edi, byte ptr ds : [ecx]
        dec dword ptr ss : [ebp-4]
        mov ecx, edx
        shl edi, cl
        or dword ptr ss : [ebp+8], edi
        inc dword ptr ss : [ebp-8]
        add edx, 8
        public_6d5ca56 : nop
        cmp edx, ebx
        jb public_6d5ca40
        mov ecx, dword ptr ds : [ebx*4+public_6d6ff60]
        and ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0x18]
        add ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0xC]
        sub dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, ebx
        shr dword ptr ss : [ebp+8], cl
        mov ecx, dword ptr ss : [ebp+0x1C]
        sub ecx, eax
        sub edx, ebx
        cmp ecx, dword ptr ss : [ebp+0xC]
        jb public_6d5caa1
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov eax, ecx
        sub eax, dword ptr ss : [ebp+0xC]
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], bl
        inc ecx
        inc eax
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], bl
        inc ecx
        inc eax
        sub dword ptr ss : [ebp-0xC], 2
        jmp public_6d5cacf
        public_6d5caa1 : nop
        sub eax, dword ptr ss : [ebp+0x1C]
        add eax, dword ptr ss : [ebp+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0x2C]
        sub eax, ecx
        cmp dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        jbe public_6d5cacc
        sub dword ptr ss : [ebp-0xC], ecx
        public_6d5cab9 : nop
        mov ebx, dword ptr ss : [ebp+0x1C]
        mov cl, byte ptr ds : [eax]
        inc dword ptr ss : [ebp+0x1C]
        inc eax
        dec dword ptr ss : [ebp+0xC]
        mov byte ptr ds : [ebx], cl
        jne public_6d5cab9
        mov eax, dword ptr ds : [edi+0x28]
        public_6d5cacc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        public_6d5cacf : nop
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], bl
        inc ecx
        inc eax
        dec dword ptr ss : [ebp-0xC]
        jne public_6d5cacf
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x1C], ecx
        jmp public_6d5caf8
        public_6d5cae2 : nop
        shr ebx, cl
        movzx ecx, byte ptr ds : [eax+1]
        mov al, byte ptr ds : [eax+4]
        sub edx, ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        inc dword ptr ss : [ebp+0x1C]
        dec dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [ecx], al
        public_6d5caf8 : nop
        cmp dword ptr ss : [ebp-0x10], 0x102
        jb public_6d5cb0b
        cmp dword ptr ss : [ebp-4], 0xA
        jae public_6d5c95f
        public_6d5cb0b : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, dword ptr ss : [ebp-4]
        mov eax, edx
        shr eax, 3
        cmp eax, ecx
        jae public_6d5cb1c
        mov ecx, eax
        public_6d5cb1c : nop
        and dword ptr ss : [ebp+0xC], 0
        jmp public_6d5cb78
        public_6d5cb22 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, dword ptr ss : [ebp-4]
        mov eax, edx
        shr eax, 3
        cmp eax, ecx
        mov dword ptr ds : [esi+0x18], offset public_6d62320
        jae public_6d5cb3a
        mov ecx, eax
        public_6d5cb3a : nop
        mov edi, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ss : [ebp+8]
        jmp public_6d5cb71
        public_6d5cb42 : nop
        mov eax, edx
        shr eax, 3
        test cl, 0x20
        mov ecx, dword ptr ds : [esi+4]
        je public_6d5cb61
        sub ecx, dword ptr ss : [ebp-4]
        cmp eax, ecx
        jae public_6d5cb58
        mov ecx, eax
        public_6d5cb58 : nop
        mov dword ptr ss : [ebp+0xC], 1
        jmp public_6d5cb78
        public_6d5cb61 : nop
        sub ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi+0x18], offset public_6d62338
        cmp eax, ecx
        jae public_6d5cb71
        mov ecx, eax
        public_6d5cb71 : nop
        mov dword ptr ss : [ebp+0xC], 0xFFFFFFFD
        public_6d5cb78 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edi+0x20], ebx
        mov ebx, ecx
        shl ebx, 3
        sub edx, ebx
        mov dword ptr ds : [edi+0x1C], edx
        mov edx, dword ptr ss : [ebp-4]
        sub eax, ecx
        add ecx, edx
        mov dword ptr ds : [esi+4], ecx
        mov ecx, eax
        sub ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        add dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [edi+0x34], eax
        mov eax, dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5c8f4)
    }
}

#undef public_6d5c926
#undef public_6d5c92b
#undef public_6d5c94a
#undef public_6d5c95f
#undef public_6d5c979
#undef public_6d5c999
#undef public_6d5c9d7
#undef public_6d5c9f4
#undef public_6d5ca0e
#undef public_6d5ca33
#undef public_6d5ca40
#undef public_6d5ca56
#undef public_6d5caa1
#undef public_6d5cab9
#undef public_6d5cacc
#undef public_6d5cacf
#undef public_6d5cae2
#undef public_6d5caf8
#undef public_6d5cb0b
#undef public_6d5cb1c
#undef public_6d5cb22
#undef public_6d5cb3a
#undef public_6d5cb42
#undef public_6d5cb58
#undef public_6d5cb61
#undef public_6d5cb71
#undef public_6d5cb78
