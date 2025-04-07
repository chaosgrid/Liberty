#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f534c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53fc0);

#define public_6f53fd8 _public_6f53fd8
#define public_6f53fdb _public_6f53fdb
#define public_6f53fe7 _public_6f53fe7
#define public_6f53ffa _public_6f53ffa
#define public_6f54002 _public_6f54002
#define public_6f5402f _public_6f5402f

PROC_DECLARE(0x6f53fc0, internal_6f53fc0, public_6f53fc0);
extern "C" NAKED register_t __cdecl internal_6f53fc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, 0x14
        push esi
        push edi
        mov edi, dword ptr ds : [eax+8]
        jge public_6f53fd8
        xor esi, esi
        jmp public_6f53fdb
        public_6f53fd8 : nop
        lea esi, ds:[ecx-0x14]
        public_6f53fdb : nop
        dec ecx
        cmp ecx, esi
        jl public_6f54002
        mov edx, ecx
        shl edx, 4
        add edx, edi
        public_6f53fe7 : nop
        cmp dword ptr ds : [edx], 0xFFFFFFFF
        jne public_6f53ffa
        fld qword ptr ds : [edx+8]
        fcomp qword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x40
        jne public_6f5402f
        public_6f53ffa : nop
        dec ecx
        sub edx, 0x10
        cmp ecx, esi
        jge public_6f53fe7
        public_6f54002 : nop
        push ebx
        call public_6f534c0
        mov ecx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov edx, eax
        shl edx, 4
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], esi
        pop esi
        pop ebx
        ret 
        public_6f5402f : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53fc0)
    }
}

#undef public_6f53fd8
#undef public_6f53fdb
#undef public_6f53fe7
#undef public_6f53ffa
#undef public_6f54002
#undef public_6f5402f
