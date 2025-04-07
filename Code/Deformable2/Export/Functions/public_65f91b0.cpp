#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f91b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9430);
CLANG_FORWARD_PROC_SYMBOL(public_65f9aa0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9b30);
CLANG_FORWARD_PROC_SYMBOL(public_65f9be0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f91e6 _public_65f91e6
#define public_65f91ea _public_65f91ea
#define public_65f91ee _public_65f91ee
#define public_65f91f3 _public_65f91f3
#define public_65f91ff _public_65f91ff
#define public_65f9220 _public_65f9220
#define public_65f922c _public_65f922c
#define public_65f923a _public_65f923a
#define public_65f9250 _public_65f9250
#define public_65f925c _public_65f925c
#define public_65f926a _public_65f926a
#define public_65f9283 _public_65f9283
#define public_65f928f _public_65f928f
#define public_65f9299 _public_65f9299
#define public_65f92a7 _public_65f92a7
#define public_65f92b5 _public_65f92b5
#define public_65f92e4 _public_65f92e4
#define public_65f92ec _public_65f92ec
#define public_65f9307 _public_65f9307
#define public_65f9330 _public_65f9330
#define public_65f9344 _public_65f9344
#define public_65f934e _public_65f934e
#define public_65f9364 _public_65f9364
#define public_65f9374 _public_65f9374
#define public_65f937a _public_65f937a
#define public_65f9387 _public_65f9387
#define public_65f939b _public_65f939b
#define public_65f93b4 _public_65f93b4
#define public_65f93d0 _public_65f93d0
#define public_65f93e0 _public_65f93e0
#define public_65f93fa _public_65f93fa
#define public_65f9407 _public_65f9407
#define public_65f9416 _public_65f9416
#define public_65f941a _public_65f941a
#define public_65f941e _public_65f941e
#define public_65f9421 _public_65f9421

PROC_DECLARE(0x65f91b0, internal_65f91b0, public_65f91b0);
extern "C" NAKED register_t __cdecl internal_65f91b0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        sar edx, 4
        cmp edx, eax
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_65f9307
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_65f91ea
        mov ecx, esi
        sub ecx, edx
        sar ecx, 4
        cmp eax, ecx
        jae public_65f91e6
        mov eax, ecx
        public_65f91e6 : nop
        test edx, edx
        jne public_65f91ee
        public_65f91ea : nop
        xor esi, esi
        jmp public_65f91f3
        public_65f91ee : nop
        sub esi, edx
        sar esi, 4
        public_65f91f3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_65f91ff
        xor eax, eax
        public_65f91ff : nop
        shl eax, 4
        push eax
        call public_6600bb6
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+4]
        add esp, 4
        cmp esi, ecx
        je public_65f923a
        public_65f9220 : nop
        test edi, edi
        je public_65f922c
        push esi
        mov ecx, edi
        call public_65f9b30
        public_65f922c : nop
        mov ecx, dword ptr ss : [esp+0x20]
        add esi, 0x10
        add edi, 0x10
        cmp esi, ecx
        jne public_65f9220
        public_65f923a : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov esi, edi
        jbe public_65f926a
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, eax
        lea ebx, ds:[ebx]
        public_65f9250 : nop
        test esi, esi
        je public_65f925c
        push ebp
        mov ecx, esi
        call public_65f9b30
        public_65f925c : nop
        add esi, 0x10
        dec ebx
        jne public_65f9250
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        public_65f926a : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [edx+8]
        shl eax, 4
        cmp ecx, ebp
        lea ebx, ds:[eax+edi]
        je public_65f9299
        mov esi, ebx
        sub esi, eax
        sub esi, edi
        add esi, ecx
        public_65f9283 : nop
        test ebx, ebx
        je public_65f928f
        push esi
        mov ecx, ebx
        call public_65f9b30
        public_65f928f : nop
        add esi, 0x10
        add ebx, 0x10
        cmp esi, ebp
        jne public_65f9283
        public_65f9299 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_65f92b5
        public_65f92a7 : nop
        mov ecx, esi
        call public_65f9430
        add esi, 0x10
        cmp esi, edi
        jne public_65f92a7
        public_65f92b5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call public_6600bb0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        add eax, esi
        add esp, 4
        test edx, edx
        mov dword ptr ds : [ecx+0xC], eax
        jne public_65f92e4
        xor eax, eax
        jmp public_65f92ec
        public_65f92e4 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        public_65f92ec : nop
        mov edx, dword ptr ss : [esp+0x24]
        add eax, edx
        pop edi
        shl eax, 4
        add eax, esi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_65f9307 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        sar edx, 4
        cmp edx, eax
        jae public_65f939b
        mov edx, eax
        shl edx, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        lea ebp, ds:[edx+ebx]
        je public_65f934e
        mov edi, ebp
        sub edi, edx
        mov edi, edi
        public_65f9330 : nop
        test ebp, ebp
        je public_65f9344
        push edi
        mov ecx, ebp
        call public_65f9b30
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        public_65f9344 : nop
        add edi, 0x10
        add ebp, 0x10
        cmp edi, esi
        jne public_65f9330
        public_65f934e : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov esi, edx
        sub esi, ebx
        sar esi, 4
        sub eax, esi
        mov esi, edx
        je public_65f937a
        mov edi, eax
        public_65f9364 : nop
        test esi, esi
        je public_65f9374
        push ebp
        mov ecx, esi
        call public_65f9b30
        mov ecx, dword ptr ss : [esp+0x10]
        public_65f9374 : nop
        add esi, 0x10
        dec edi
        jne public_65f9364
        public_65f937a : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_65f941a
        public_65f9387 : nop
        push ebp
        mov ecx, esi
        call public_65f9be0
        add esi, 0x10
        cmp esi, edi
        jne public_65f9387
        jmp public_65f9416
        public_65f939b : nop
        test eax, eax
        jbe public_65f9421
        shl eax, 4
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_65f93d0
        public_65f93b4 : nop
        push edi
        push ebp
        call public_65f9aa0
        add edi, 0x10
        add esp, 8
        add ebp, 0x10
        cmp edi, esi
        jne public_65f93b4
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_65f93d0 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_65f93fa
        nop 
        lea esp, ss:[esp]
        public_65f93e0 : nop
        sub esi, 0x10
        sub edi, 0x10
        push esi
        mov ecx, edi
        call public_65f9be0
        cmp esi, ebx
        jne public_65f93e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_65f93fa : nop
        lea edi, ds:[eax+ebx]
        cmp ebx, edi
        mov esi, ebx
        je public_65f941e
        mov ebx, dword ptr ss : [esp+0x28]
        public_65f9407 : nop
        push ebx
        mov ecx, esi
        call public_65f9be0
        add esi, 0x10
        cmp esi, edi
        jne public_65f9407
        public_65f9416 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_65f941a : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_65f941e : nop
        add dword ptr ds : [ecx+8], eax
        public_65f9421 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x65f91b0)
    }
}

#undef public_65f91e6
#undef public_65f91ea
#undef public_65f91ee
#undef public_65f91f3
#undef public_65f91ff
#undef public_65f9220
#undef public_65f922c
#undef public_65f923a
#undef public_65f9250
#undef public_65f925c
#undef public_65f926a
#undef public_65f9283
#undef public_65f928f
#undef public_65f9299
#undef public_65f92a7
#undef public_65f92b5
#undef public_65f92e4
#undef public_65f92ec
#undef public_65f9307
#undef public_65f9330
#undef public_65f9344
#undef public_65f934e
#undef public_65f9364
#undef public_65f9374
#undef public_65f937a
#undef public_65f9387
#undef public_65f939b
#undef public_65f93b4
#undef public_65f93d0
#undef public_65f93e0
#undef public_65f93fa
#undef public_65f9407
#undef public_65f9416
#undef public_65f941a
#undef public_65f941e
#undef public_65f9421
