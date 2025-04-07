#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367960);
CLANG_FORWARD_PROC_SYMBOL(public_6367bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6367e90);
CLANG_FORWARD_PROC_SYMBOL(public_6368180);

#define public_6367e9a _public_6367e9a
#define public_6367eab _public_6367eab
#define public_6367eb8 _public_6367eb8
#define public_6367ed2 _public_6367ed2
#define public_6367ed8 _public_6367ed8
#define public_6367ef0 _public_6367ef0
#define public_6367f1e _public_6367f1e
#define public_6367f4c _public_6367f4c
#define public_6367f6c _public_6367f6c

PROC_DECLARE(0x6367e90, internal_6367e90, public_6367e90);
extern "C" NAKED register_t __cdecl internal_6367e90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        push edi
        js public_6367eab
        public_6367e9a : nop
        dec eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+eax*4+4]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edx+eax*4+4], ecx
        jns public_6367e9a
        public_6367eab : nop
        mov ecx, esi
        call public_6368180
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        js public_6367ed2
        public_6367eb8 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [esi+0x28]
        imul ecx, eax
        mov edx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edx+eax*4]
        add ecx, edi
        dec eax
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+ecx*4], edx
        jns public_6367eb8
        public_6367ed2 : nop
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        js public_6367ef0
        public_6367ed8 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x28]
        imul ecx, eax
        add ecx, edx
        dec eax
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+ecx*4], 0
        jns public_6367ed8
        public_6367ef0 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+4]
        imul eax, ecx
        lea eax, ds:[edx+eax*4]
        mov edi, eax
        and edi, 0xFFFFFFF0
        sub eax, edi
        sar eax, 2
        lea eax, ds:[eax+ecx-1]
        test eax, eax
        jl public_6367f1e
        lea ecx, ds:[eax+4]
        and ecx, 0x3FFFFFFC
        xor eax, eax
        rep stosd
        public_6367f1e : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        imul eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx+eax*4], 0x3F800000
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        imul ecx, eax
        inc eax
        xor edi, edi
        mov dword ptr ds : [esi+0x28], eax
        dec eax
        test eax, eax
        jle public_6367f6c
        push ebx
        lea ebx, ds:[ecx*4]
        public_6367f4c : nop
        mov edx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+edx]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        push edi
        mov ecx, esi
        call public_6367bb0
        mov eax, dword ptr ds : [esi+0x28]
        inc edi
        add ebx, 4
        dec eax
        cmp edi, eax
        jl public_6367f4c
        pop ebx
        public_6367f6c : nop
        mov eax, dword ptr ds : [esi+0x28]
        dec eax
        push eax
        mov ecx, esi
        call public_6367960
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6367e90)
    }
}

#undef public_6367e9a
#undef public_6367eab
#undef public_6367eb8
#undef public_6367ed2
#undef public_6367ed8
#undef public_6367ef0
#undef public_6367f1e
#undef public_6367f4c
#undef public_6367f6c
