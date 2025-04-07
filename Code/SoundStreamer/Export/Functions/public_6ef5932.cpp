#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5932);

#define public_6ef5996 _public_6ef5996
#define public_6ef59c1 _public_6ef59c1
#define public_6ef59e2 _public_6ef59e2
#define public_6ef59ea _public_6ef59ea
#define public_6ef59ed _public_6ef59ed
#define public_6ef5a08 _public_6ef5a08
#define public_6ef5a16 _public_6ef5a16
#define public_6ef5a3b _public_6ef5a3b
#define public_6ef5a4d _public_6ef5a4d
#define public_6ef5a7d _public_6ef5a7d
#define public_6ef5a9c _public_6ef5a9c
#define public_6ef5ab4 _public_6ef5ab4
#define public_6ef5ab9 _public_6ef5ab9
#define public_6ef5abc _public_6ef5abc
#define public_6ef5aca _public_6ef5aca
#define public_6ef5b11 _public_6ef5b11
#define public_6ef5b22 _public_6ef5b22
#define public_6ef5b38 _public_6ef5b38
#define public_6ef5b4b _public_6ef5b4b
#define public_6ef5bd9 _public_6ef5bd9
#define public_6ef5c3e _public_6ef5c3e
#define public_6ef5c48 _public_6ef5c48
#define public_6ef5c56 _public_6ef5c56

PROC_DECLARE(0x6ef5932, internal_6ef5932, public_6ef5932);
extern "C" NAKED register_t __cdecl internal_6ef5932()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        push edi
        mov edi, esi
        add esi, 0xFFFFFFFC
        sub edi, dword ptr ds : [ecx+0xC]
        shr edi, 0xF
        mov ecx, edi
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0x10], ecx
        mov ecx, dword ptr ds : [esi]
        dec ecx
        test cl, 1
        mov dword ptr ss : [ebp-4], ecx
        jne public_6ef5c56
        mov edx, dword ptr ds : [ecx+esi]
        lea ebx, ds:[ecx+esi]
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-8], edx
        mov edx, dword ptr ss : [ebp-0xC]
        test dl, 1
        mov dword ptr ss : [ebp+0xC], ebx
        jne public_6ef5a08
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_6ef5996
        push 0x3F
        pop edx
        public_6ef5996 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_6ef59ea
        cmp edx, 0x20
        jae public_6ef59c1
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_6ef59e2
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ef59e2
        public_6ef59c1 : nop
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ef59e2
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ef59e2 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0xC]
        jmp public_6ef59ed
        public_6ef59ea : nop
        mov ecx, dword ptr ss : [ebp-4]
        public_6ef59ed : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        add ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        public_6ef5a08 : nop
        mov edx, ecx
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_6ef5a16
        push 0x3F
        pop edx
        public_6ef5a16 : nop
        mov ebx, dword ptr ss : [ebp-8]
        and ebx, 1
        mov dword ptr ss : [ebp-0xC], ebx
        jne public_6ef5ab9
        sub esi, dword ptr ss : [ebp-8]
        mov ebx, dword ptr ss : [ebp-8]
        sar ebx, 4
        push 0x3F
        mov dword ptr ss : [ebp+0xC], esi
        dec ebx
        pop esi
        cmp ebx, esi
        jbe public_6ef5a3b
        mov ebx, esi
        public_6ef5a3b : nop
        add ecx, dword ptr ss : [ebp-8]
        mov edx, ecx
        mov dword ptr ss : [ebp-4], ecx
        sar edx, 4
        dec edx
        cmp edx, esi
        jbe public_6ef5a4d
        mov edx, esi
        public_6ef5a4d : nop
        cmp ebx, edx
        je public_6ef5ab4
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, dword ptr ds : [ecx+8]
        jne public_6ef5a9c
        cmp ebx, 0x20
        jae public_6ef5a7d
        mov esi, 0x80000000
        mov ecx, ebx
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0x44], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_6ef5a9c
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], esi
        jmp public_6ef5a9c
        public_6ef5a7d : nop
        lea ecx, ds:[ebx-0x20]
        mov esi, 0x80000000
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0xC4], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_6ef5a9c
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], esi
        public_6ef5a9c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        public_6ef5ab4 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        jmp public_6ef5abc
        public_6ef5ab9 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ef5abc : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jne public_6ef5aca
        cmp ebx, edx
        je public_6ef5b4b
        public_6ef5aca : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov ebx, dword ptr ds : [ecx+edx*8+4]
        lea ecx, ds:[ecx+edx*8]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], esi
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ef5b4b
        mov cl, byte ptr ds : [edx+eax+4]
        cmp edx, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [edx+eax+4], cl
        jae public_6ef5b22
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ef5b11
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_6ef5b11 : nop
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea eax, ds:[eax+edi*4+0x44]
        or dword ptr ds : [eax], ebx
        jmp public_6ef5b4b
        public_6ef5b22 : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ef5b38
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_6ef5b38 : nop
        lea ecx, ds:[edx-0x20]
        mov edx, 0x80000000
        shr edx, cl
        lea eax, ds:[eax+edi*4+0xC4]
        or dword ptr ds : [eax], edx
        public_6ef5b4b : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax+esi-4], eax
        mov eax, dword ptr ss : [ebp-0x10]
        dec dword ptr ds : [eax]
        jne public_6ef5c56
        mov eax, dword ptr ds : [public_6f02660]
        test eax, eax
        je public_6ef5c48
        mov ecx, dword ptr ds : [public_6f02658]
        mov esi, dword ptr ds : [public_6efc0ac]
        shl ecx, 0xF
        add ecx, dword ptr ds : [eax+0xC]
        mov ebx, 0x8000
        push 0x4000
        push ebx
        push ecx
        call esi
        mov ecx, dword ptr ds : [public_6f02658]
        mov eax, dword ptr ds : [public_6f02660]
        mov edx, 0x80000000
        shr edx, cl
        or dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_6f02660]
        mov ecx, dword ptr ds : [public_6f02658]
        mov eax, dword ptr ds : [eax+0x10]
        and dword ptr ds : [eax+ecx*4+0xC4], 0
        mov eax, dword ptr ds : [public_6f02660]
        mov eax, dword ptr ds : [eax+0x10]
        dec byte ptr ds : [eax+0x43]
        mov eax, dword ptr ds : [public_6f02660]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp byte ptr ds : [ecx+0x43], 0
        jne public_6ef5bd9
        and dword ptr ds : [eax+4], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_6f02660]
        public_6ef5bd9 : nop
        cmp dword ptr ds : [eax+8], 0xFFFFFFFF
        jne public_6ef5c48
        push ebx
        push 0
        push dword ptr ds : [eax+0xC]
        call esi
        mov eax, dword ptr ds : [public_6f02660]
        push dword ptr ds : [eax+0x10]
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc07c]
        mov eax, dword ptr ds : [public_6f02664]
        mov edx, dword ptr ds : [public_6f02668]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        mov ecx, eax
        mov eax, dword ptr ds : [public_6f02660]
        sub ecx, eax
        lea ecx, ds:[ecx+edx-0x14]
        push ecx
        lea ecx, ds:[eax+0x14]
        push ecx
        push eax
        call public_6ef46e0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        dec dword ptr ds : [public_6f02664]
        cmp eax, dword ptr ds : [public_6f02660]
        jbe public_6ef5c3e
        sub dword ptr ss : [ebp+8], 0x14
        public_6ef5c3e : nop
        mov eax, dword ptr ds : [public_6f02668]
        mov dword ptr ds : [public_6f0265c], eax
        public_6ef5c48 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6f02658], edi
        mov dword ptr ds : [public_6f02660], eax
        public_6ef5c56 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef5932)
    }
}

#undef public_6ef5996
#undef public_6ef59c1
#undef public_6ef59e2
#undef public_6ef59ea
#undef public_6ef59ed
#undef public_6ef5a08
#undef public_6ef5a16
#undef public_6ef5a3b
#undef public_6ef5a4d
#undef public_6ef5a7d
#undef public_6ef5a9c
#undef public_6ef5ab4
#undef public_6ef5ab9
#undef public_6ef5abc
#undef public_6ef5aca
#undef public_6ef5b11
#undef public_6ef5b22
#undef public_6ef5b38
#undef public_6ef5b4b
#undef public_6ef5bd9
#undef public_6ef5c3e
#undef public_6ef5c48
#undef public_6ef5c56
