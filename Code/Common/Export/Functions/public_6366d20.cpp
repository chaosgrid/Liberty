#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366590);
CLANG_FORWARD_PROC_SYMBOL(public_6366670);
CLANG_FORWARD_PROC_SYMBOL(public_6366b10);
CLANG_FORWARD_PROC_SYMBOL(public_6366b50);
CLANG_FORWARD_PROC_SYMBOL(public_6366c00);
CLANG_FORWARD_PROC_SYMBOL(public_6366cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6366d10);
CLANG_FORWARD_PROC_SYMBOL(public_6366d20);
CLANG_FORWARD_PROC_SYMBOL(public_6367130);
CLANG_FORWARD_PROC_SYMBOL(public_6367160);
CLANG_FORWARD_PROC_SYMBOL(public_6367210);
CLANG_FORWARD_PROC_SYMBOL(public_63673a0);
CLANG_FORWARD_PROC_SYMBOL(public_6367660);

#define public_6366d45 _public_6366d45
#define public_6366d57 _public_6366d57
#define public_6366d7f _public_6366d7f
#define public_6366d83 _public_6366d83
#define public_6366d98 _public_6366d98
#define public_6366dc8 _public_6366dc8
#define public_6366dcf _public_6366dcf
#define public_6366e04 _public_6366e04
#define public_6366e40 _public_6366e40
#define public_6366e54 _public_6366e54
#define public_6366e7f _public_6366e7f
#define public_6366e8a _public_6366e8a
#define public_6366ea0 _public_6366ea0
#define public_6366eda _public_6366eda
#define public_6366ef5 _public_6366ef5
#define public_6366ef7 _public_6366ef7
#define public_6366eff _public_6366eff
#define public_6366f10 _public_6366f10
#define public_6366f44 _public_6366f44
#define public_6366f4c _public_6366f4c
#define public_6366f4e _public_6366f4e
#define public_6366f58 _public_6366f58
#define public_6366f71 _public_6366f71
#define public_6366f79 _public_6366f79
#define public_6366fa9 _public_6366fa9
#define public_6366fab _public_6366fab
#define public_6366fd8 _public_6366fd8
#define public_6366fe5 _public_6366fe5
#define public_6366fed _public_6366fed
#define public_6367037 _public_6367037
#define public_6367050 _public_6367050
#define public_6367081 _public_6367081
#define public_6367083 _public_6367083
#define public_63670ae _public_63670ae
#define public_63670dd _public_63670dd
#define public_6367108 _public_6367108
#define public_636711c _public_636711c
#define public_6367125 _public_6367125

PROC_DECLARE(0x6366d20, internal_6366d20, public_6366d20);
extern "C" NAKED register_t __cdecl internal_6366d20()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x18], 7
        mov dword ptr ss : [esp+0x14], eax
        public_6366d45 : nop
        cmp dword ptr ss : [esp+0x24], ebx
        je public_6366d57
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6366d10
        public_6366d57 : nop
        cmp dword ptr ss : [esp+0x1C], 0xFA
        jg public_6367125
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_6366d7f
        mov ecx, esi
        call public_6366670
        test eax, eax
        jne public_6366fd8
        jmp public_6366fab
        public_6366d7f : nop
        dec dword ptr ss : [esp+0x18]
        public_6366d83 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        cmp eax, dword ptr ds : [esi+0x3C]
        jl public_6366d98
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x1C
        ret 
        public_6366d98 : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov edi, dword ptr ds : [edx+eax*4]
        mov eax, dword ptr ds : [esi+0x68]
        cmp eax, ebx
        jle public_6366dcf
        cmp eax, 1
        jne public_6366dc8
        cmp dword ptr ss : [esp+0x24], ebx
        je public_6366dc8
        mov ecx, esi
        call public_6366c00
        mov ecx, esi
        call public_63673a0
        cmp eax, 1
        jne public_6366dcf
        mov dword ptr ds : [esi+0x68], ebx
        jmp public_6366dcf
        public_6366dc8 : nop
        mov dword ptr ds : [esi+0x68], 1
        public_6366dcf : nop
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+edi*4]
        lea ecx, ds:[eax+edi*4]
        fabs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_6366e04
        mov ecx, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [ecx+edi*4]
        mov ebp, dword ptr ds : [esi+0x4C]
        fabs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        jne public_63670dd
        jmp public_6367083
        public_6366e04 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63670dd
        mov ecx, esi
        call public_6367210
        test eax, eax
        je public_6366fab
        mov edx, dword ptr ds : [esi+0x20]
        mov ecx, esi
        mov dword ptr ds : [edx+edi*4], 0x3F800000
        call public_6366590
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        cmp ecx, ebx
        jle public_6366e54
        public_6366e40 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx+edx*4], ebx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_6366e40
        public_6366e54 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [ecx+edi*4]
        mov edx, dword ptr ds : [esi+0x28]
        fchs 
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [edx+edi*4]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6366e7f
        fld dword ptr ds : [ecx+edi*4]
        mov ebp, dword ptr ds : [esi+0x4C]
        fdiv dword ptr ds : [edx+edi*4]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        jmp public_6366e8a
        public_6366e7f : nop
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0x60AD78EC
        public_6366e8a : nop
        mov ecx, dword ptr ds : [esi+0x44]
        xor edi, edi
        cmp ecx, ebx
        jle public_6366eff
        fld dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [esi+0x34]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        public_6366ea0 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ebx]
        fld dword ptr ds : [eax+edx*4]
        fcom dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_6366ef5
        mov eax, dword ptr ds : [esi+0x1C]
        fdivr dword ptr ds : [eax+edx*4]
        lea edx, ds:[eax+edx*4]
        fchs 
        fld st(0)
        fabs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_6366eda
        fld dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        jne public_6366f44
        public_6366eda : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6366ef5
        fstp dword ptr ss : [esp+0x10]
        mov ebp, edi
        jmp public_6366ef7
        public_6366ef5 : nop
        fstp st(0)
        public_6366ef7 : nop
        inc edi
        add ebx, 4
        cmp edi, ecx
        jl public_6366ea0
        public_6366eff : nop
        mov ebx, dword ptr ds : [esi+0x4C]
        cmp ecx, ebx
        jge public_6366f58
        fld dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x34]
        fchs 
        lea edi, ds:[edx+ecx*4]
        public_6366f10 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [edi]
        fld dword ptr ds : [eax+edx*4]
        fcom 
        fnstsw ax
        test ah, 1
        je public_6366f4c
        mov eax, dword ptr ds : [esi+0x24]
        fdivr dword ptr ds : [eax+edx*4]
        fchs 
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6366f4c
        fstp dword ptr ss : [esp+0x10]
        mov ebp, ecx
        jmp public_6366f4e
        public_6366f44 : nop
        fstp dword ptr ss : [esp+0x10]
        mov ebp, edi
        jmp public_6366f79
        public_6366f4c : nop
        fstp st(0)
        public_6366f4e : nop
        inc ecx
        add edi, 4
        cmp ecx, ebx
        jl public_6366f10
        fstp st(0)
        public_6366f58 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6366f71
        mov dword ptr ss : [esp+0x10], 0
        public_6366f71 : nop
        test ebp, ebp
        jl public_6367125
        public_6366f79 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 0x41
        je public_6366fa9
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        je public_6366fe5
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x20]
        sar ecx, 1
        inc eax
        add ecx, 2
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jle public_6366fed
        public_6366fa9 : nop
        xor ebx, ebx
        public_6366fab : nop
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6366d10
        cmp dword ptr ss : [esp+0x1C], 0xFA
        jg public_6367125
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebx
        call public_6367660
        test eax, eax
        je public_6367125
        public_6366fd8 : nop
        mov dword ptr ss : [esp+0x18], 7
        jmp public_6366d83
        public_6366fe5 : nop
        mov dword ptr ss : [esp+0x20], 0
        public_6366fed : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 1
        call public_6367160
        cmp ebp, dword ptr ds : [esi+0x44]
        jge public_6367037
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+ebp*4]
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+edx*4], 0
        mov edi, dword ptr ds : [esi+0x44]
        dec edi
        mov eax, edi
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x44], edi
        call public_6367130
        push ebp
        mov ecx, esi
        call public_6366b10
        xor ebx, ebx
        jmp public_6366d45
        public_6367037 : nop
        cmp ebp, dword ptr ds : [esi+0x4C]
        jge public_6367081
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_6367050
        mov ecx, esi
        call public_6366cb0
        public_6367050 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+ebp*4]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+edx*4], 0
        mov ecx, dword ptr ds : [esi+0x44]
        push ebp
        push ecx
        mov ecx, esi
        call public_6367130
        mov eax, dword ptr ds : [esi+0x44]
        inc eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x44], eax
        call public_6366b50
        xor ebx, ebx
        jmp public_6366d45
        public_6367081 : nop
        xor ebx, ebx
        public_6367083 : nop
        mov ecx, esi
        call public_6366cb0
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [edx+ebp*4]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ecx+eax*4], ebx
        mov edx, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [edx+eax*4]
        lea ecx, ds:[edx+eax*4]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63670ae
        mov dword ptr ds : [ecx], ebx
        public_63670ae : nop
        mov eax, dword ptr ds : [esi+0x44]
        push ebp
        push eax
        mov ecx, esi
        call public_6367130
        mov edi, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x3C]
        inc edi
        mov eax, edi
        inc edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x44], edx
        jge public_636711c
        mov ecx, esi
        call public_6366b50
        jmp public_6366d45
        public_63670dd : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [edx+ecx*4]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+eax*4], ebx
        mov edx, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [edx+eax*4]
        lea ecx, ds:[edx+eax*4]
        fcomp dword ptr ds : [public_63a53d4]
        mov dword ptr ss : [esp+0x24], ebx
        fnstsw ax
        test ah, 1
        je public_6367108
        mov dword ptr ds : [ecx], ebx
        public_6367108 : nop
        mov edx, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x3C]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x4C], edx
        jl public_6366d45
        public_636711c : nop
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_6366d45
        public_6367125 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6366d20)
    }
}

#undef public_6366d45
#undef public_6366d57
#undef public_6366d7f
#undef public_6366d83
#undef public_6366d98
#undef public_6366dc8
#undef public_6366dcf
#undef public_6366e04
#undef public_6366e40
#undef public_6366e54
#undef public_6366e7f
#undef public_6366e8a
#undef public_6366ea0
#undef public_6366eda
#undef public_6366ef5
#undef public_6366ef7
#undef public_6366eff
#undef public_6366f10
#undef public_6366f44
#undef public_6366f4c
#undef public_6366f4e
#undef public_6366f58
#undef public_6366f71
#undef public_6366f79
#undef public_6366fa9
#undef public_6366fab
#undef public_6366fd8
#undef public_6366fe5
#undef public_6366fed
#undef public_6367037
#undef public_6367050
#undef public_6367081
#undef public_6367083
#undef public_63670ae
#undef public_63670dd
#undef public_6367108
#undef public_636711c
#undef public_6367125
