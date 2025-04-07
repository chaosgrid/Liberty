#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ea220);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);

#define public_62ea240 _public_62ea240
#define public_62ea276 _public_62ea276
#define public_62ea2a3 _public_62ea2a3
#define public_62ea2c7 _public_62ea2c7
#define public_62ea2c9 _public_62ea2c9
#define public_62ea2e5 _public_62ea2e5
#define public_62ea2f0 _public_62ea2f0
#define public_62ea2f3 _public_62ea2f3
#define public_62ea306 _public_62ea306
#define public_62ea318 _public_62ea318
#define public_62ea35a _public_62ea35a
#define public_62ea361 _public_62ea361
#define public_62ea365 _public_62ea365
#define public_62ea37e _public_62ea37e
#define public_62ea381 _public_62ea381
#define public_62ea393 _public_62ea393
#define public_62ea3b0 _public_62ea3b0
#define public_62ea3c2 _public_62ea3c2
#define public_62ea404 _public_62ea404
#define public_62ea40b _public_62ea40b
#define public_62ea40f _public_62ea40f
#define public_62ea428 _public_62ea428
#define public_62ea42b _public_62ea42b
#define public_62ea43d _public_62ea43d

PROC_DECLARE(0x62ea220, internal_62ea220, public_62ea220);
extern "C" NAKED register_t __cdecl internal_62ea220()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        fld dword ptr ss : [ebp+0x20]
        push esi
        fsub dword ptr ss : [esp+0x18]
        push edi
        lea ecx, ss:[ebp+0x10AC]
        mov edx, 0x10
        fstp dword ptr ss : [ebp+0x20]
        xor ebx, ebx
        public_62ea240 : nop
        cmp byte ptr ds : [ecx-0x14], bl
        je public_62ea2a3
        fld dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [ecx]
        cmp al, bl
        fadd dword ptr ds : [ecx-8]
        fst dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [ecx-8]
        jne public_62ea276
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [ecx-4]
        fst dword ptr ds : [ecx-4]
        fcomp dword ptr ds : [public_63a07ac]
        fnstsw ax
        test ah, 1
        jne public_62ea276
        mov dword ptr ds : [ecx-4], ebx
        mov byte ptr ds : [ecx], 1
        public_62ea276 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a07a8]
        fnstsw ax
        test ah, 0x41
        jne public_62ea2a3
        mov byte ptr ds : [ecx-0x14], bl
        mov dword ptr ds : [ecx-0x10], ebx
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [ecx-0xC], ax
        mov byte ptr ds : [ecx], 1
        mov dword ptr ds : [ecx-8], ebx
        mov dword ptr ds : [ecx-4], ebx
        mov byte ptr ds : [ecx+1], bl
        public_62ea2a3 : nop
        add ecx, 0x18
        dec edx
        jne public_62ea240
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_62ea2f0
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ea2f0
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x13], bl
        je public_62ea2c7
        lea ecx, ds:[eax-8]
        jmp public_62ea2c9
        public_62ea2c7 : nop
        xor ecx, ecx
        public_62ea2c9 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x13]
        push eax
        call dword ptr ds : [edx+0x60]
        cmp byte ptr ss : [esp+0x13], bl
        je public_62ea2e5
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [ebp+0x24]
        fstp dword ptr ss : [ebp+0x24]
        jmp public_62ea2f3
        public_62ea2e5 : nop
        fld dword ptr ds : [public_6399408]
        fstp dword ptr ss : [ebp+0x24]
        jmp public_62ea2f3
        public_62ea2f0 : nop
        mov dword ptr ss : [ebp+0x24], ebx
        public_62ea2f3 : nop
        mov eax, dword ptr ss : [ebp+0x830]
        xor edi, edi
        cmp eax, ebx
        jle public_62ea393
        lea esi, ss:[ebp+0x44]
        public_62ea306 : nop
        cmp dword ptr ds : [esi-0xC], ebx
        je public_62ea318
        fld dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi-0x10], 1
        fadd dword ptr ds : [esi+4]
        jmp public_62ea37e
        public_62ea318 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ea361
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        call public_6391fbc
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        call public_6391fbc
        fst dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62ea35a
        mov eax, 1
        mov byte ptr ds : [esi-0x10], al
        jmp public_62ea365
        public_62ea35a : nop
        xor eax, eax
        mov byte ptr ds : [esi-0x10], al
        jmp public_62ea365
        public_62ea361 : nop
        mov byte ptr ds : [esi-0x10], 1
        public_62ea365 : nop
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fst dword ptr ds : [esi+4]
        fcomp dword ptr ds : [esi-8]
        fnstsw ax
        test ah, 0x41
        jne public_62ea381
        fld dword ptr ds : [esi-4]
        fchs 
        public_62ea37e : nop
        fstp dword ptr ds : [esi+4]
        public_62ea381 : nop
        mov eax, dword ptr ss : [ebp+0x830]
        inc edi
        add esi, 0x20
        cmp edi, eax
        jl public_62ea306
        public_62ea393 : nop
        mov eax, dword ptr ss : [ebp+0x1038]
        xor edi, edi
        cmp eax, ebx
        jle public_62ea43d
        lea esi, ss:[ebp+0x84C]
        lea esp, ss:[esp]
        public_62ea3b0 : nop
        cmp dword ptr ds : [esi-0xC], ebx
        je public_62ea3c2
        fld dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi-0x10], 1
        fadd dword ptr ds : [esi+4]
        jmp public_62ea428
        public_62ea3c2 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ea40b
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        call public_6391fbc
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        call public_6391fbc
        fst dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62ea404
        mov eax, 1
        mov byte ptr ds : [esi-0x10], al
        jmp public_62ea40f
        public_62ea404 : nop
        xor eax, eax
        mov byte ptr ds : [esi-0x10], al
        jmp public_62ea40f
        public_62ea40b : nop
        mov byte ptr ds : [esi-0x10], 1
        public_62ea40f : nop
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fst dword ptr ds : [esi+4]
        fcomp dword ptr ds : [esi-8]
        fnstsw ax
        test ah, 0x41
        jne public_62ea42b
        fld dword ptr ds : [esi-4]
        fchs 
        public_62ea428 : nop
        fstp dword ptr ds : [esi+4]
        public_62ea42b : nop
        mov eax, dword ptr ss : [ebp+0x1038]
        inc edi
        add esi, 0x20
        cmp edi, eax
        jl public_62ea3b0
        public_62ea43d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62ea220)
    }
}

#undef public_62ea240
#undef public_62ea276
#undef public_62ea2a3
#undef public_62ea2c7
#undef public_62ea2c9
#undef public_62ea2e5
#undef public_62ea2f0
#undef public_62ea2f3
#undef public_62ea306
#undef public_62ea318
#undef public_62ea35a
#undef public_62ea361
#undef public_62ea365
#undef public_62ea37e
#undef public_62ea381
#undef public_62ea393
#undef public_62ea3b0
#undef public_62ea3c2
#undef public_62ea404
#undef public_62ea40b
#undef public_62ea40f
#undef public_62ea428
#undef public_62ea42b
#undef public_62ea43d
