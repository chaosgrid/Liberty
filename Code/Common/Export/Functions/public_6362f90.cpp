#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);

#define public_6362fcb _public_6362fcb
#define public_6362fe8 _public_6362fe8
#define public_6363015 _public_6363015
#define public_6363038 _public_6363038
#define public_6363059 _public_6363059
#define public_6363071 _public_6363071
#define public_6363087 _public_6363087
#define public_63630d3 _public_63630d3
#define public_63630e9 _public_63630e9
#define public_6363108 _public_6363108
#define public_6363131 _public_6363131
#define public_6363159 _public_6363159
#define public_636318c _public_636318c
#define public_63631a1 _public_63631a1
#define public_63631be _public_63631be
#define public_63631cd _public_63631cd
#define public_6363206 _public_6363206
#define public_6363219 _public_6363219
#define public_6363245 _public_6363245
#define public_636326e _public_636326e
#define public_6363272 _public_6363272

PROC_DECLARE(0x6362f90, internal_6362f90, public_6362f90);
extern "C" NAKED register_t __cdecl internal_6362f90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        inc word ptr ds : [esi+0x10]
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        cmp ax, 0xFFFF
        push edi
        je public_6362fcb
        mov edx, dword ptr ds : [esi+4]
        and eax, 0xFFFF
        mov ecx, eax
        shl eax, 4
        add eax, edx
        mov ebx, eax
        mov ax, word ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov word ptr ds : [esi+2], ax
        jmp public_6363087
        public_6362fcb : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        inc ecx
        shl ecx, 5
        push ecx
        call public_6343f70
        xor edi, edi
        add esp, 4
        cmp word ptr ds : [esi], di
        mov ebp, eax
        jbe public_6363015
        xor eax, eax
        public_6362fe8 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edx, eax
        add edx, ebx
        mov ebx, dword ptr ds : [edx]
        lea ecx, ds:[eax+ebp]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        inc edi
        add eax, 0x10
        cmp edi, ecx
        jb public_6362fe8
        public_6363015 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi]
        shl dx, 1
        inc edx
        test eax, eax
        mov word ptr ds : [esi], dx
        je public_6363038
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6363038 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi]
        mov ebx, edi
        shl ebx, 4
        add ebx, ebp
        mov dword ptr ss : [esp+0x10], edi
        inc edi
        mov dword ptr ds : [esi+4], ebp
        cmp edi, eax
        mov word ptr ds : [esi+2], di
        jae public_6363071
        mov eax, edi
        shl eax, 4
        public_6363059 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[edi+1]
        mov word ptr ds : [eax+edx+4], cx
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        inc edi
        add eax, 0x10
        cmp edi, ecx
        jb public_6363059
        public_6363071 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dx, word ptr ds : [esi]
        shl edx, 4
        mov word ptr ds : [edx+eax-0xC], 0xFFFF
        public_6363087 : nop
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], edx
        mov word ptr ds : [ebx], 0xFFFE
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        je public_63630e9
        mov edx, dword ptr ss : [esp+0x28]
        mov ax, word ptr ds : [esi+0xE]
        mov dword ptr ds : [esi+8], edx
        mov word ptr ds : [ebx+4], ax
        xor eax, eax
        mov ax, word ptr ds : [esi+0xE]
        cmp ax, 0xFFFF
        je public_63630d3
        mov edx, dword ptr ds : [esi+4]
        and eax, 0xFFFF
        shl eax, 4
        mov word ptr ds : [eax+edx+6], cx
        public_63630d3 : nop
        pop edi
        mov word ptr ds : [esi+0xE], cx
        pop esi
        pop ebp
        mov word ptr ds : [ebx+6], 0xFFFF
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 8
        public_63630e9 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xC]
        xor edi, edi
        mov di, word ptr ds : [esi+0xE]
        mov dword ptr ss : [esp+0x24], 3
        cmp ecx, 0xFFFF
        je public_6363131
        mov ebp, dword ptr ds : [esi+4]
        public_6363108 : nop
        mov edx, ecx
        shl edx, 4
        fld dword ptr ds : [edx+ebp+8]
        add edx, ebp
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_6363131
        inc dword ptr ss : [esp+0x24]
        mov edi, ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        cmp ecx, 0xFFFF
        jne public_6363108
        public_6363131 : nop
        mov ebp, dword ptr ds : [esi+4]
        mov edx, edi
        shl edx, 4
        mov dword ptr ss : [esp+0x1C], edx
        add edx, ebp
        xor ecx, ecx
        mov cx, word ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], 0
        cmp ecx, 0xFFFF
        je public_636318c
        public_6363159 : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, ecx
        shl edx, 4
        fcomp dword ptr ds : [edx+ebp+8]
        add edx, ebp
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        fnstsw ax
        test ah, 0x41
        jne public_6363219
        mov edi, ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx+4]
        cmp ecx, 0xFFFF
        jne public_6363159
        public_636318c : nop
        mov ax, word ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ebx+4], cx
        mov word ptr ds : [ebx+6], di
        mov word ptr ds : [edx+4], ax
        public_63631a1 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp dword ptr ss : [esp+0x14], eax
        jle public_6363272
        cmp eax, 2
        mov edx, dword ptr ss : [esp+0x18]
        jle public_63631cd
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFFE
        public_63631be : nop
        shl edx, 4
        xor edi, edi
        dec eax
        mov di, word ptr ds : [edx+ecx+4]
        mov edx, edi
        jne public_63631be
        public_63631cd : nop
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [ebx+edi]
        mov ecx, edx
        shl ecx, 4
        add ecx, edi
        cmp eax, 0xFFFE
        je public_6363245
        cmp eax, 0xFFFF
        mov di, word ptr ss : [esp+0x18]
        mov word ptr ds : [ecx], ax
        mov word ptr ds : [ecx+2], di
        je public_6363206
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        mov word ptr ds : [eax+ecx+2], dx
        public_6363206 : nop
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov word ptr ds : [eax+ebx], dx
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6363219 : nop
        mov eax, edi
        shl eax, 4
        mov dx, word ptr ds : [eax+ebp+4]
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ebx+4], dx
        mov edx, dword ptr ds : [esi+4]
        shl ecx, 4
        mov word ptr ds : [ecx+edx+6], bp
        mov word ptr ds : [ebx+6], di
        mov word ptr ds : [eax+4], bp
        jmp public_63631a1
        public_6363245 : nop
        mov ax, word ptr ds : [esi+0xC]
        mov word ptr ds : [ecx], ax
        xor eax, eax
        mov word ptr ds : [ecx+2], 0xFFFF
        mov ax, word ptr ds : [esi+0xC]
        cmp ax, 0xFFFF
        je public_636326e
        mov ecx, dword ptr ds : [esi+4]
        and eax, 0xFFFF
        shl eax, 4
        mov word ptr ds : [eax+ecx+2], dx
        public_636326e : nop
        mov word ptr ds : [esi+0xC], dx
        public_6363272 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6362f90)
    }
}

#undef public_6362fcb
#undef public_6362fe8
#undef public_6363015
#undef public_6363038
#undef public_6363059
#undef public_6363071
#undef public_6363087
#undef public_63630d3
#undef public_63630e9
#undef public_6363108
#undef public_6363131
#undef public_6363159
#undef public_636318c
#undef public_63631a1
#undef public_63631be
#undef public_63631cd
#undef public_6363206
#undef public_6363219
#undef public_6363245
#undef public_636326e
#undef public_6363272
