#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ea770);
CLANG_FORWARD_PROC_SYMBOL(public_62eb070);

#define public_62eb0cc _public_62eb0cc
#define public_62eb0e1 _public_62eb0e1
#define public_62eb100 _public_62eb100
#define public_62eb13e _public_62eb13e
#define public_62eb14e _public_62eb14e
#define public_62eb163 _public_62eb163
#define public_62eb1ad _public_62eb1ad
#define public_62eb1b9 _public_62eb1b9
#define public_62eb1bb _public_62eb1bb
#define public_62eb245 _public_62eb245
#define public_62eb251 _public_62eb251
#define public_62eb253 _public_62eb253
#define public_62eb285 _public_62eb285
#define public_62eb287 _public_62eb287
#define public_62eb298 _public_62eb298
#define public_62eb29a _public_62eb29a
#define public_62eb2d0 _public_62eb2d0
#define public_62eb2da _public_62eb2da
#define public_62eb2e3 _public_62eb2e3
#define public_62eb2e5 _public_62eb2e5
#define public_62eb2eb _public_62eb2eb
#define public_62eb30a _public_62eb30a
#define public_62eb31b _public_62eb31b
#define public_62eb31d _public_62eb31d
#define public_62eb341 _public_62eb341
#define public_62eb345 _public_62eb345
#define public_62eb349 _public_62eb349
#define public_62eb34d _public_62eb34d
#define public_62eb36c _public_62eb36c
#define public_62eb379 _public_62eb379

PROC_DECLARE(0x62eb070, internal_62eb070, public_62eb070);
extern "C" NAKED register_t __cdecl internal_62eb070()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], edx
        je public_62eb379
        add eax, 0xFFFFFFF8
        cmp eax, edx
        je public_62eb379
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, edx
        je public_62eb379
        add ecx, 0xFFFFFFF8
        cmp ecx, edx
        je public_62eb379
        test dword ptr ds : [edi+0x10], 0x30000000
        mov ecx, dword ptr ds : [eax+0x147C]
        mov dword ptr ss : [esp+0x14], ecx
        je public_62eb0cc
        pop edi
        mov eax, 2
        pop esi
        add esp, 0x18
        ret 4
        public_62eb0cc : nop
        push ebx
        mov bl, byte ptr ds : [eax+0xDC]
        test bl, bl
        mov byte ptr ss : [esp+0xF], 0
        je public_62eb0e1
        mov byte ptr ss : [esp+0xF], 1
        public_62eb0e1 : nop
        cmp dword ptr ds : [edi+0x830], edx
        mov dword ptr ss : [esp+0x1C], edx
        jbe public_62eb36c
        push ebp
        lea ebp, ds:[edi+0x38]
        mov dword ptr ss : [esp+0x18], ebp
        lea esp, ss:[esp]
        public_62eb100 : nop
        fld dword ptr ss : [ebp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62eb34d
        mov al, byte ptr ss : [ebp-4]
        test al, al
        je public_62eb34d
        mov eax, dword ptr ss : [ebp]
        xor bl, bl
        cmp eax, 1
        jne public_62eb14e
        mov al, byte ptr ss : [ebp-5]
        test al, al
        je public_62eb13e
        test cl, 2
        je public_62eb34d
        jmp public_62eb245
        public_62eb13e : nop
        test cl, 4
        mov bl, 1
        je public_62eb34d
        jmp public_62eb245
        public_62eb14e : nop
        cmp eax, 2
        jne public_62eb163
        test cl, 8
        mov bl, 1
        je public_62eb34d
        jmp public_62eb245
        public_62eb163 : nop
        cmp eax, 4
        jne public_62eb34d
        mov esi, dword ptr ds : [edi+4]
        fld dword ptr ds : [edi+0x24]
        fcomp dword ptr ds : [esi+0x1768]
        fnstsw ax
        test ah, 0x41
        jne public_62eb34d
        mov al, byte ptr ds : [esi+0x157A]
        test al, al
        jne public_62eb1ad
        mov ecx, dword ptr ds : [esi+0x1580]
        lea edx, ds:[esi+0x1508]
        push edx
        lea edx, ds:[esi+0x1514]
        mov byte ptr ds : [esi+0x157A], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62eb1ad : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_62eb1b9
        lea ecx, ds:[eax-8]
        jmp public_62eb1bb
        public_62eb1b9 : nop
        xor ecx, ecx
        public_62eb1bb : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x1508]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x150C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x1510]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        sar ecx, 1
        sub edx, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x14]
        fmulp 
        fcom dword ptr ds : [ecx+0x1760]
        fnstsw ax
        test ah, 0x41
        jne public_62eb341
        fcomp dword ptr ds : [ecx+0x1764]
        fnstsw ax
        test ah, 5
        jp public_62eb349
        public_62eb245 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_62eb251
        add eax, 0xFFFFFFF8
        jmp public_62eb253
        public_62eb251 : nop
        xor eax, eax
        public_62eb253 : nop
        mov ecx, dword ptr ds : [edi+0x106C]
        xor edx, edx
        mov dx, word ptr ss : [ebp-8]
        lea esi, ss:[ebp-8]
        push ecx
        push eax
        mov ecx, edi
        push edx
        call public_62ea770
        cmp eax, 1
        mov dword ptr ss : [esp+0x24], eax
        jne public_62eb349
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_62eb285
        lea edx, ds:[eax-8]
        jmp public_62eb287
        public_62eb285 : nop
        xor edx, edx
        public_62eb287 : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb298
        add eax, 0xFFFFFFF8
        jmp public_62eb29a
        public_62eb298 : nop
        xor eax, eax
        public_62eb29a : nop
        xor ebp, ebp
        mov bp, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        push esi
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        test bl, bl
        mov byte ptr ss : [esp+0x12], 0
        mov eax, dword ptr ds : [eax]
        je public_62eb2da
        test eax, eax
        je public_62eb2d0
        lea ecx, ds:[eax-8]
        mov eax, dword ptr ds : [edi+0x1090]
        jmp public_62eb2eb
        public_62eb2d0 : nop
        mov eax, dword ptr ds : [edi+0x1090]
        xor ecx, ecx
        jmp public_62eb2eb
        public_62eb2da : nop
        test eax, eax
        je public_62eb2e3
        lea ecx, ds:[eax-8]
        jmp public_62eb2e5
        public_62eb2e3 : nop
        xor ecx, ecx
        public_62eb2e5 : nop
        mov eax, dword ptr ds : [edi+0x1068]
        public_62eb2eb : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x16]
        push esi
        push eax
        call dword ptr ds : [edx+0x10C]
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62eb30a
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_62eb345
        public_62eb30a : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62eb31b
        add eax, 0xFFFFFFF8
        jmp public_62eb31d
        public_62eb31b : nop
        xor eax, eax
        public_62eb31d : nop
        mov edx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        push 0
        lea ecx, ds:[eax+4]
        push 1
        push esi
        call dword ptr ds : [edx+0x34]
        mov ebp, dword ptr ss : [esp+0x18]
        cmp dword ptr ss : [ebp], 0
        je public_62eb349
        fld dword ptr ss : [ebp+0xC]
        fchs 
        fstp dword ptr ss : [ebp+0x10]
        jmp public_62eb349
        public_62eb341 : nop
        fstp st(0)
        jmp public_62eb349
        public_62eb345 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_62eb349 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        public_62eb34d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi+0x830]
        inc eax
        add ebp, 0x20
        cmp eax, edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], ebp
        jb public_62eb100
        pop ebp
        public_62eb36c : nop
        mov eax, dword ptr ss : [esp+0x20]
        pop ebx
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        public_62eb379 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62eb070)
    }
}

#undef public_62eb0cc
#undef public_62eb0e1
#undef public_62eb100
#undef public_62eb13e
#undef public_62eb14e
#undef public_62eb163
#undef public_62eb1ad
#undef public_62eb1b9
#undef public_62eb1bb
#undef public_62eb245
#undef public_62eb251
#undef public_62eb253
#undef public_62eb285
#undef public_62eb287
#undef public_62eb298
#undef public_62eb29a
#undef public_62eb2d0
#undef public_62eb2da
#undef public_62eb2e3
#undef public_62eb2e5
#undef public_62eb2eb
#undef public_62eb30a
#undef public_62eb31b
#undef public_62eb31d
#undef public_62eb341
#undef public_62eb345
#undef public_62eb349
#undef public_62eb34d
#undef public_62eb36c
#undef public_62eb379
