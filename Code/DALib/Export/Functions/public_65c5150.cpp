#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c55d0);
CLANG_FORWARD_PROC_SYMBOL(public_65c55e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c5610);
CLANG_FORWARD_PROC_SYMBOL(public_65c5700);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c5181 _public_65c5181
#define public_65c51e3 _public_65c51e3
#define public_65c51e8 _public_65c51e8
#define public_65c51f0 _public_65c51f0
#define public_65c51f5 _public_65c51f5
#define public_65c5201 _public_65c5201
#define public_65c5220 _public_65c5220
#define public_65c5234 _public_65c5234
#define public_65c5287 _public_65c5287
#define public_65c528f _public_65c528f
#define public_65c52a7 _public_65c52a7
#define public_65c52e6 _public_65c52e6
#define public_65c52f4 _public_65c52f4
#define public_65c5310 _public_65c5310
#define public_65c531c _public_65c531c
#define public_65c5323 _public_65c5323
#define public_65c532f _public_65c532f
#define public_65c5332 _public_65c5332
#define public_65c5356 _public_65c5356

PROC_DECLARE(0x65c5150, internal_65c5150, public_65c5150);
extern "C" NAKED register_t __cdecl internal_65c5150()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x560]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+8], 0
        jbe public_65c5356
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        lea eax, ss:[ebp+0x460]
        push edi
        mov dword ptr ss : [esp+0x10], eax
        public_65c5181 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ebx, 4
/*FIXUP push offset public_65c7474 @0x65c519b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7474
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x40], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x40]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_65c52a7
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_65c51e3
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_65c51e8
        public_65c51e3 : nop
        mov ecx, 1
        public_65c51e8 : nop
        test edx, edx
        jne public_65c51f0
        xor eax, eax
        jmp public_65c51f5
        public_65c51f0 : nop
        sub eax, edx
        sar eax, 2
        public_65c51f5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        jge public_65c5201
        xor eax, eax
        public_65c5201 : nop
        shl eax, 2
        push eax
        call public_65c6a66
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x20], eax
        mov ebx, eax
        je public_65c5234
        lea ebx, ds:[ebx]
        public_65c5220 : nop
        push ebp
        push ebx
        call public_65c5700
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_65c5220
        public_65c5234 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        push 1
        push ebx
        mov ecx, esi
        call public_65c5610
        mov edx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push edx
        push edi
        mov ecx, esi
        call public_65c55e0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_65c55d0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_65c6a60
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        lea edx, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], edx
        jne public_65c5287
        xor edx, edx
        jmp public_65c528f
        public_65c5287 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_65c528f : nop
        mov ebp, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+edx*4+4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], eax
        mov ebx, 4
        jmp public_65c5332
        public_65c52a7 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_65c52f4
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_65c55e0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x30]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_65c5610
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_65c532f
        public_65c52e6 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi], ecx
        add edi, ebx
        cmp edi, eax
        jne public_65c52e6
        jmp public_65c532f
        public_65c52f4 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_65c55e0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_65c531c
        nop 
        lea esp, ss:[esp]
        public_65c5310 : nop
        sub eax, ebx
        mov edx, dword ptr ds : [eax]
        sub ecx, ebx
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_65c5310
        public_65c531c : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_65c532f
        public_65c5323 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi], ecx
        add edi, ebx
        cmp edi, eax
        jne public_65c5323
        public_65c532f : nop
        add dword ptr ds : [esi+8], ebx
        public_65c5332 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x560]
        inc eax
        add edx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        jb public_65c5181
        pop edi
        pop esi
        pop ebx
        public_65c5356 : nop
        pop ebp
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x65c5150)
    }
}

#undef public_65c5181
#undef public_65c51e3
#undef public_65c51e8
#undef public_65c51f0
#undef public_65c51f5
#undef public_65c5201
#undef public_65c5220
#undef public_65c5234
#undef public_65c5287
#undef public_65c528f
#undef public_65c52a7
#undef public_65c52e6
#undef public_65c52f4
#undef public_65c5310
#undef public_65c531c
#undef public_65c5323
#undef public_65c532f
#undef public_65c5332
#undef public_65c5356
