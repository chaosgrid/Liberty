#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_635c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_635cdd0);
CLANG_FORWARD_PROC_SYMBOL(public_635ce90);

#define public_635cea7 _public_635cea7
#define public_635cf08 _public_635cf08
#define public_635cf1c _public_635cf1c
#define public_635cf25 _public_635cf25
#define public_635cf29 _public_635cf29
#define public_635cf58 _public_635cf58
#define public_635cf60 _public_635cf60
#define public_635cf79 _public_635cf79
#define public_635cf96 _public_635cf96
#define public_635cfb0 _public_635cfb0
#define public_635cfcc _public_635cfcc
#define public_635cfd4 _public_635cfd4
#define public_635cfed _public_635cfed
#define public_635d00a _public_635d00a
#define public_635d01d _public_635d01d

PROC_DECLARE(0x635ce90, internal_635ce90, public_635ce90);
extern "C" NAKED register_t __cdecl internal_635ce90()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dx, word ptr ss : [ebp+0x22]
        push esi
        push edi
        mov ebx, ecx
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        js public_635cf25
        public_635cea7 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [eax+edx*4]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [esi+0x20]
        fadd dword ptr ds : [ecx+0x20]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_635cf1c
        mov edi, dword ptr ds : [ebx+0x16C]
        mov dx, word ptr ds : [edi+2]
        cmp dx, word ptr ds : [edi]
        jb public_635cf08
        mov ecx, edi
        call public_63441a0
        mov ecx, dword ptr ss : [esp+0x14]
        public_635cf08 : nop
        mov edx, dword ptr ds : [edi+4]
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        mov dword ptr ds : [edx+eax*4], esi
        inc word ptr ds : [edi+2]
        mov edx, dword ptr ss : [esp+0x18]
        public_635cf1c : nop
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        jns public_635cea7
        jmp public_635cf29
        public_635cf25 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_635cf29 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        dec eax
        cmp eax, edx
        jle public_635cfb0
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, dword ptr ds : [esi+0xC]
        dec eax
        cmp word ptr ss : [ebp+0x1A], 0
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], 0
        jbe public_635d01d
        jmp public_635cf60
        public_635cf58 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        public_635cf60 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edx+edi*4]
        cmp edi, esi
        jne public_635cf79
        push edi
        push ecx
        mov ecx, ebx
        call public_635cdd0
        jmp public_635cf96
        public_635cf79 : nop
        push eax
        push esi
        push edi
        mov ecx, ebx
        call public_635c8d0
        cmp eax, 1
        jne public_635cf96
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push eax
        mov ecx, ebx
        call public_635ce90
        public_635cf96 : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+0x1A]
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ecx
        jl public_635cf58
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_635cfb0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, dword ptr ss : [ebp+0xC]
        inc eax
        cmp word ptr ss : [ebp+0x1A], 0
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], 0
        jbe public_635d01d
        jmp public_635cfd4
        public_635cfcc : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        public_635cfd4 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edx+edi*4]
        cmp edi, esi
        jne public_635cfed
        push edi
        push ecx
        mov ecx, ebx
        call public_635cdd0
        jmp public_635d00a
        public_635cfed : nop
        push eax
        push edi
        push esi
        mov ecx, ebx
        call public_635c8d0
        cmp eax, 1
        jne public_635d00a
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push eax
        mov ecx, ebx
        call public_635ce90
        public_635d00a : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+0x1A]
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ecx
        jl public_635cfcc
        public_635d01d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x635ce90)
    }
}

#undef public_635cea7
#undef public_635cf08
#undef public_635cf1c
#undef public_635cf25
#undef public_635cf29
#undef public_635cf58
#undef public_635cf60
#undef public_635cf79
#undef public_635cf96
#undef public_635cfb0
#undef public_635cfcc
#undef public_635cfd4
#undef public_635cfed
#undef public_635d00a
#undef public_635d01d
