#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_419c20);

#define public_4055e8 _public_4055e8
#define public_4055f8 _public_4055f8
#define public_405617 _public_405617
#define public_40562c _public_40562c
#define public_405632 _public_405632
#define public_40563f _public_40563f
#define public_405650 _public_405650
#define public_40565f _public_40565f
#define public_40567c _public_40567c
#define public_405688 _public_405688
#define public_4056a5 _public_4056a5

PROC_DECLARE(0x4055b0, internal_4055b0, public_4055b0);
extern "C" NAKED register_t __cdecl internal_4055b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_419c20 @0x4055b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419c20
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, eax
        or edi, 0x1F
        cmp edi, 0x7FFFFFFD
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_4055e8
        mov edi, eax
        public_4055e8 : nop
        lea eax, ds:[edi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_4055f8
        xor eax, eax
        public_4055f8 : nop
        add eax, eax
        push eax
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_405632
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x18], eax
        add eax, 2
        test eax, eax
        jge public_405617
        xor eax, eax
        public_405617 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_418a9e
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_40562c @0x405626*/
  FIXUP lea eax, ds : [public_40562c]
        ret 
        public_40562c : nop
        mov esi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp-0x18]
        public_405632 : nop
        mov edx, dword ptr ds : [esi+8]
        test edx, edx
        jbe public_40565f
        cmp edx, edi
        jbe public_40563f
        mov edx, edi
        public_40563f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        test edx, edx
        jbe public_40565f
        lea esp, ss:[esp]
        public_405650 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_405650
        public_40565f : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebx, dword ptr ds : [esi+8]
        je public_405688
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_40567c
        cmp cl, 0xFF
        je public_40567c
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_405688
        public_40567c : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_405688 : nop
        cmp ebx, edi
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [esi+0xC], edi
        ja public_4056a5
        mov edi, ebx
        public_4056a5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x4055b0)
    }
}

#undef public_4055e8
#undef public_4055f8
#undef public_405617
#undef public_40562c
#undef public_405632
#undef public_40563f
#undef public_405650
#undef public_40565f
#undef public_40567c
#undef public_405688
#undef public_4056a5
