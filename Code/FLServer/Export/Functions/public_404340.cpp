#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_404340);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);

#define public_404355 _public_404355
#define public_4043a9 _public_4043a9
#define public_4043ad _public_4043ad
#define public_4043bc _public_4043bc
#define public_4043f0 _public_4043f0
#define public_404402 _public_404402
#define public_404406 _public_404406
#define public_404415 _public_404415
#define public_404428 _public_404428
#define public_404455 _public_404455
#define public_40446c _public_40446c
#define public_404471 _public_404471
#define public_404479 _public_404479
#define public_404485 _public_404485

PROC_DECLARE(0x404340, internal_404340, public_404340);
extern "C" NAKED register_t __cdecl internal_404340()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+8], ebp
        push edi
        jae public_404355
        call dword ptr ds : [public_41b8d0]
        public_404355 : nop
        mov edi, dword ptr ds : [esi+4]
        xor ecx, ecx
        cmp edi, ecx
        je public_4043ad
        mov al, byte ptr ds : [edi-1]
        test al, al
        je public_4043ad
        cmp al, 0xFF
        je public_4043ad
        mov dl, al
        dec dl
        mov byte ptr ds : [edi-1], dl
        push edi
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        mov ebp, eax
        push 1
        push ebp
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_4043a9
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        call public_4031c0
        add esp, 0xC
        push ebp
        mov ecx, esi
        call public_404490
        public_4043a9 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_4043ad : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        sub eax, ebp
        cmp eax, ebx
        jae public_4043bc
        mov ebx, eax
        public_4043bc : nop
        test ebx, ebx
        jbe public_404485
        sub eax, ebx
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[ebx+ebp]
        lea ecx, ds:[eax+ecx*2]
        lea eax, ds:[eax+ebp*2]
        cmp ecx, eax
        jae public_404402
        lea edi, ds:[edx+edx]
        lea ebp, ds:[edi+ecx]
        cmp eax, ebp
        jae public_404402
        add eax, edi
        test edx, edx
        mov ecx, ebp
        jbe public_404415
        lea ebx, ds:[ebx]
        public_4043f0 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub eax, 2
        dec edx
        mov word ptr ds : [eax], di
        jne public_4043f0
        jmp public_404415
        public_404402 : nop
        test edx, edx
        jbe public_404415
        public_404406 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_404406
        public_404415 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, ebx
        cmp edi, 0x7FFFFFFD
        jbe public_404428
        call dword ptr ds : [public_41b8a0]
        public_404428 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_404455
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_404455
        cmp cl, 0xFF
        je public_404455
        test edi, edi
        jne public_404471
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_403e90
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_404455 : nop
        test edi, edi
        jne public_40446c
        test eax, eax
        je public_404485
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax], di
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_40446c : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_404479
        public_404471 : nop
        mov ecx, esi
        push edi
        call public_4055b0
        public_404479 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_404485 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x404340)
    }
}

#undef public_404355
#undef public_4043a9
#undef public_4043ad
#undef public_4043bc
#undef public_4043f0
#undef public_404402
#undef public_404406
#undef public_404415
#undef public_404428
#undef public_404455
#undef public_40446c
#undef public_404471
#undef public_404479
#undef public_404485
