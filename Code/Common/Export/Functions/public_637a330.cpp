#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_635aa20);
CLANG_FORWARD_PROC_SYMBOL(public_636cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_637a330);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63989e1);

#define public_637a373 _public_637a373
#define public_637a37d _public_637a37d
#define public_637a3a9 _public_637a3a9
#define public_637a3ab _public_637a3ab
#define public_637a3c8 _public_637a3c8
#define public_637a3d0 _public_637a3d0
#define public_637a3e7 _public_637a3e7
#define public_637a43a _public_637a43a
#define public_637a44a _public_637a44a
#define public_637a470 _public_637a470
#define public_637a4a6 _public_637a4a6
#define public_637a4a8 _public_637a4a8
#define public_637a4c6 _public_637a4c6
#define public_637a4ca _public_637a4ca
#define public_637a4f9 _public_637a4f9
#define public_637a4fb _public_637a4fb
#define public_637a538 _public_637a538
#define public_637a546 _public_637a546
#define public_637a565 _public_637a565
#define public_637a5bb _public_637a5bb
#define public_637a5df _public_637a5df
#define public_637a5fa _public_637a5fa
#define public_637a5fe _public_637a5fe
#define public_637a620 _public_637a620
#define public_637a677 _public_637a677

PROC_DECLARE(0x637a330, internal_637a330, public_637a330);
extern "C" NAKED register_t __cdecl internal_637a330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63989e1 @0x637a332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63989e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x2C], ebp
        mov ax, word ptr ss : [ebp+2]
        mov ebx, 0x10
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x1C], eax
        lea eax, ds:[eax+eax*2]
        cdq 
        sub eax, edx
        sar eax, 1
        cmp eax, ebx
        jle public_637a37d
        public_637a373 : nop
        shl ebx, 1
        cmp ebx, eax
        jl public_637a373
        mov dword ptr ss : [esp+0x18], ebx
        public_637a37d : nop
        push 0x10
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], edi
        test edi, edi
        mov dword ptr ss : [esp+0x28], 0
        je public_637a3a9
        push ebx
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a5918
        jmp public_637a3ab
        public_637a3a9 : nop
        xor edi, edi
        public_637a3ab : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ds : [esi], edi
        mov dword ptr ss : [esp+0x10], eax
        jle public_637a470
        jmp public_637a3d0
        public_637a3c8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x30]
        public_637a3d0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ecx+eax*4]
        mov dword ptr ds : [edi+0x98], eax
        add edi, 0x1C
        mov dword ptr ss : [esp+0x14], 3
        public_637a3e7 : nop
        mov ebx, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi]
        push ebx
        mov ecx, ebp
        call public_636cfa0
        push eax
        push ebx
        mov ecx, ebp
        call public_6352580
        test eax, eax
        jne public_637a44a
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov ebx, dword ptr ds : [edi]
        push ebx
        mov ecx, ebp
        call public_636cfa0
        push eax
        push ebx
        mov ecx, ebp
        call public_63523d0
        mov cx, word ptr ds : [esi+6]
        cmp cx, word ptr ds : [esi+4]
        mov ebp, dword ptr ds : [edi]
        lea ebx, ds:[esi+4]
        jb public_637a43a
        mov ecx, ebx
        call public_63441a0
        public_637a43a : nop
        mov eax, dword ptr ds : [ebx+4]
        xor edx, edx
        mov dx, word ptr ds : [ebx+2]
        mov dword ptr ds : [eax+edx*4], ebp
        inc word ptr ds : [ebx+2]
        public_637a44a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi+8]
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_637a3e7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_637a3c8
        mov ebx, dword ptr ss : [esp+0x18]
        public_637a470 : nop
        push 0x10
        mov dword ptr ds : [esi+0x18], 0
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 1
        je public_637a4a6
        push 0xFFFFFFFF
        push 4
        lea ecx, ds:[ebx*4]
        push ecx
        mov ecx, eax
        call public_6356a40
        jmp public_637a4a8
        public_637a4a6 : nop
        xor eax, eax
        public_637a4a8 : nop
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], ebp
        jle public_637a5df
        jmp public_637a4ca
        public_637a4c6 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_637a4ca : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax+ebp*4]
        push 0x10
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 2
        je public_637a4f9
        mov ecx, eax
        call public_635aa20
        mov ebx, eax
        jmp public_637a4fb
        public_637a4f9 : nop
        xor ebx, ebx
        public_637a4fb : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x98]
        xor ecx, eax
        and ecx, 0xFFF
        xor eax, ecx
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_637a538
        mov edx, dword ptr ds : [ecx+0x98]
        and edx, 0xFFF
        shl edx, 0xC
        and eax, 0xFF000FFF
        or edx, eax
        mov dword ptr ds : [ebx], edx
        jmp public_637a546
/*FIXUP public_637a538 : nop
        push offset public_63f35d0 @0x637a538*/
  FIXUP public_637a538 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f35d0
        call dword ptr ds : [public_6399284]
        add esp, 4
        public_637a546 : nop
        and dword ptr ds : [ebx], 0x80FFFFFF
        lea eax, ds:[edi+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea ebp, ds:[ebp*4+1]
        lea edi, ds:[ebx+4]
        mov dword ptr ss : [esp+0x18], 3
        public_637a565 : nop
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x14]
        xor ecx, edx
        and ecx, 0xFFFF
        xor edx, ecx
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ds : [esi+0x20]
        push ebp
        lea edx, ss:[esp+0x14]
        push edx
        call public_6356b40
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        inc edx
        add edi, 4
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        inc ebp
        dec ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_637a565
        mov cx, word ptr ds : [esi+0xE]
        cmp cx, word ptr ds : [esi+0xC]
        lea edi, ds:[esi+0xC]
        jb public_637a5bb
        mov ecx, edi
        call public_63441a0
        public_637a5bb : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [edi+2]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_637a4c6
        public_637a5df : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jle public_637a677
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jmp public_637a5fe
        public_637a5fa : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_637a5fe : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [ecx+eax*4]
        mov ebp, dword ptr ss : [esp+0x10]
        add edi, 0x1C
        add ebx, 4
        mov dword ptr ss : [esp+0x18], 3
        public_637a620 : nop
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+0x20]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x20], edx
        call public_6356ac0
        mov ecx, dword ptr ds : [ebx]
        add eax, ebp
        and eax, 0x7FFF
        shl eax, 0x10
        and ecx, 0x8000FFFF
        or eax, ecx
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi+8]
        add ebx, 4
        dec ebp
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_637a620
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        inc eax
        sub edx, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        jl public_637a5fa
        public_637a677 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        lea eax, ds:[edx+eax+1]
        pop ebp
        shl eax, 4
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x637a330)
    }
}

#undef public_637a373
#undef public_637a37d
#undef public_637a3a9
#undef public_637a3ab
#undef public_637a3c8
#undef public_637a3d0
#undef public_637a3e7
#undef public_637a43a
#undef public_637a44a
#undef public_637a470
#undef public_637a4a6
#undef public_637a4a8
#undef public_637a4c6
#undef public_637a4ca
#undef public_637a4f9
#undef public_637a4fb
#undef public_637a538
#undef public_637a546
#undef public_637a565
#undef public_637a5bb
#undef public_637a5df
#undef public_637a5fa
#undef public_637a5fe
#undef public_637a620
#undef public_637a677
