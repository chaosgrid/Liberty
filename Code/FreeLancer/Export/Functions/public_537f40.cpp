#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410a40);
CLANG_FORWARD_PROC_SYMBOL(public_537f40);
CLANG_FORWARD_PROC_SYMBOL(public_538200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_537f9a _public_537f9a
#define public_537fd7 _public_537fd7
#define public_538001 _public_538001
#define public_53802e _public_53802e
#define public_538057 _public_538057
#define public_538070 _public_538070
#define public_538080 _public_538080
#define public_538090 _public_538090
#define public_5380a3 _public_5380a3
#define public_5380a8 _public_5380a8
#define public_5380b3 _public_5380b3
#define public_5380cc _public_5380cc
#define public_5380ce _public_5380ce
#define public_5380d2 _public_5380d2
#define public_5380db _public_5380db
#define public_5380e3 _public_5380e3
#define public_5380f8 _public_5380f8
#define public_538102 _public_538102
#define public_538113 _public_538113
#define public_538130 _public_538130
#define public_538150 _public_538150
#define public_538198 _public_538198
#define public_53819d _public_53819d
#define public_5381a1 _public_5381a1
#define public_5381b0 _public_5381b0
#define public_5381db _public_5381db
#define public_5381e4 _public_5381e4

PROC_DECLARE(0x537f40, internal_537f40, public_537f40);
extern "C" NAKED register_t __cdecl internal_537f40()
{
    __asm
    {
        sub esp, 0x81C
        push ebx
        mov ebx, dword ptr ss : [esp+0x82C]
        fld dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        xor edi, edi
        call public_5b7ec0
        fld dword ptr ds : [ebx+8]
        mov esi, eax
        mov dword ptr ss : [esp+0x20], esi
        call public_5b7ec0
        fld dword ptr ss : [esp+0x83C]
        mov ebp, eax
        mov dword ptr ss : [esp+0x24], ebp
        call public_5b7ec0
        cmp dword ptr ds : [public_678990], edi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x10], edi
        je public_537f9a
        mov dword ptr ss : [esp+0x2C], offset public_678980
        mov dword ptr ss : [esp+0x10], 1
        public_537f9a : nop
        mov ebx, dword ptr ds : [public_678994]
        mov edx, dword ptr ds : [public_678998]
        sub esi, ebx
        sub ebp, edx
        cmp esi, eax
        mov ebx, eax
        jge public_538001
        cmp ebp, eax
        jge public_537fd7
        mov ecx, dword ptr ds : [public_678984]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea eax, ss:[esp+edx*4+0x34]
        push eax
        mov ecx, offset public_675578
        call public_538200
        add dword ptr ss : [esp+0x10], eax
        public_537fd7 : nop
        mov ecx, ebp
        neg ecx
        cmp ecx, ebx
        jge public_538001
        mov eax, dword ptr ds : [public_67898c]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+ecx*4+0x30]
        push eax
        push edx
        mov ecx, offset public_675578
        call public_538200
        add dword ptr ss : [esp+0x10], eax
        public_538001 : nop
        neg esi
        cmp esi, ebx
        jge public_538057
        cmp ebp, ebx
        jge public_53802e
        mov ecx, dword ptr ds : [public_678980]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea eax, ss:[esp+edx*4+0x34]
        push eax
        mov ecx, offset public_675578
        call public_538200
        add dword ptr ss : [esp+0x10], eax
        public_53802e : nop
        neg ebp
        cmp ebp, ebx
        jge public_538057
        mov edx, dword ptr ds : [public_678988]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+eax*4+0x30]
        push edx
        push ecx
        mov ecx, offset public_675578
        call public_538200
        add dword ptr ss : [esp+0x10], eax
        public_538057 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        jle public_538113
        lea esp, ss:[esp]
        public_538070 : nop
        mov edx, dword ptr ss : [esp+eax*4+0x2C]
        mov ebx, dword ptr ds : [edx+0x10]
        test ebx, ebx
        je public_538102
        nop 
        public_538080 : nop
        xor eax, eax
        test edi, edi
        jle public_5380a8
        mov ecx, dword ptr ds : [ebx+4]
        lea esp, ss:[esp]
        public_538090 : nop
        mov edx, dword ptr ss : [esp+eax*4+0x42C]
        cmp dword ptr ds : [edx+4], ecx
        je public_5380a3
        inc eax
        cmp eax, edi
        jl public_538090
        jmp public_5380a8
        public_5380a3 : nop
        cmp eax, 0xFFFFFFFF
        jne public_5380f8
        public_5380a8 : nop
        mov ebp, dword ptr ds : [ebx+0x10]
        xor esi, esi
        test edi, edi
        mov ecx, edi
        jle public_5380d2
        public_5380b3 : nop
        lea eax, ds:[ecx+esi]
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ss : [esp+eax*4+0x42C]
        cmp ebp, dword ptr ds : [edx+0x10]
        jge public_5380cc
        lea esi, ds:[eax+1]
        jmp public_5380ce
        public_5380cc : nop
        mov ecx, eax
        public_5380ce : nop
        cmp esi, ecx
        jl public_5380b3
        public_5380d2 : nop
        cmp edi, 0x100
        jge public_5380db
        inc edi
        public_5380db : nop
        cmp ecx, edi
        mov edx, ebx
        mov eax, ecx
        jge public_5380f8
        public_5380e3 : nop
        mov ecx, dword ptr ss : [esp+eax*4+0x42C]
        mov dword ptr ss : [esp+eax*4+0x42C], edx
        inc eax
        cmp eax, edi
        mov edx, ecx
        jl public_5380e3
        public_5380f8 : nop
        mov ebx, dword ptr ds : [ebx]
        test ebx, ebx
        jne public_538080
        mov eax, dword ptr ss : [esp+0x14]
        public_538102 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_538070
        public_538113 : nop
        mov ebp, dword ptr ss : [esp+0x830]
        xor esi, esi
        xor edx, edx
        test edi, edi
        mov dword ptr ss : [esp+0x10], esi
        jle public_5381a1
        mov bl, byte ptr ss : [esp+0x840]
        lea ecx, ds:[ecx]
        public_538130 : nop
        cmp esi, dword ptr ss : [esp+0x834]
        jge public_53819d
        test bl, bl
        jne public_538150
        mov eax, dword ptr ss : [esp+edx*4+0x42C]
        mov ecx, dword ptr ds : [eax+4]
        test byte ptr ds : [ecx+0xB4], 1
        jne public_538198
        public_538150 : nop
        mov ecx, dword ptr ss : [esp+edx*4+0x42C]
        fild dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x838]
        fsubr dword ptr ds : [eax]
        fild dword ptr ds : [ecx+0xC]
        fsubr dword ptr ds : [eax+8]
        fild dword ptr ds : [ecx+0x10]
        fadd dword ptr ss : [esp+0x83C]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_538198
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+esi*4], eax
        inc esi
        public_538198 : nop
        inc edx
        cmp edx, edi
        jl public_538130
        public_53819d : nop
        mov dword ptr ss : [esp+0x10], esi
        public_5381a1 : nop
        xor ebx, ebx
        xor edi, edi
        test esi, esi
        jle public_5381e4
        lea esp, ss:[esp]
        public_5381b0 : nop
        mov ecx, dword ptr ss : [esp+0x83C]
        mov esi, dword ptr ss : [ebp+edi*4]
        mov edx, dword ptr ss : [esp+0x838]
        push ecx
        push edx
        mov ecx, esi
        call public_410a40
        test al, al
        mov ebp, dword ptr ss : [esp+0x830]
        je public_5381db
        mov dword ptr ss : [ebp+ebx*4], esi
        inc ebx
        public_5381db : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jl public_5381b0
        public_5381e4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x81C
        ret 
        UNREACHABLE_TRAP(0x537f40)
    }
}

#undef public_537f9a
#undef public_537fd7
#undef public_538001
#undef public_53802e
#undef public_538057
#undef public_538070
#undef public_538080
#undef public_538090
#undef public_5380a3
#undef public_5380a8
#undef public_5380b3
#undef public_5380cc
#undef public_5380ce
#undef public_5380d2
#undef public_5380db
#undef public_5380e3
#undef public_5380f8
#undef public_538102
#undef public_538113
#undef public_538130
#undef public_538150
#undef public_538198
#undef public_53819d
#undef public_5381a1
#undef public_5381b0
#undef public_5381db
#undef public_5381e4
