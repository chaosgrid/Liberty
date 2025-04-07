#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ac10);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);

#define public_635ac42 _public_635ac42
#define public_635ac7c _public_635ac7c
#define public_635acd0 _public_635acd0
#define public_635acd2 _public_635acd2
#define public_635ad31 _public_635ad31
#define public_635ad33 _public_635ad33
#define public_635ad54 _public_635ad54
#define public_635ad6e _public_635ad6e
#define public_635ad70 _public_635ad70
#define public_635ad8d _public_635ad8d
#define public_635ad8f _public_635ad8f

PROC_DECLARE(0x635ac10, internal_635ac10, public_635ac10);
extern "C" NAKED register_t __cdecl internal_635ac10()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        movsx eax, word ptr ds : [ebx+0xC]
        dec eax
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        js public_635ad54
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        inc eax
        push edi
        lea ebp, ds:[ebx+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        public_635ac42 : nop
        lea eax, ss:[esp+0x28]
        push eax
        push ebx
        push ebp
        mov edi, ebp
        call public_635b940
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x30]
        mov edx, 3
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fdivr dword ptr ds : [public_63a53d0]
        public_635ac7c : nop
        mov eax, dword ptr ds : [edi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, ecx
        fld dword ptr ds : [eax+ebx]
        add eax, ebx
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_635acd0
        fstp dword ptr ss : [esp+0x10]
        jmp public_635acd2
        public_635acd0 : nop
        fstp st(0)
        public_635acd2 : nop
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fmul st, st(4)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_635ad31
        fstp dword ptr ss : [esp+0x14]
        jmp public_635ad33
        public_635ad31 : nop
        fstp st(0)
        public_635ad33 : nop
        add edi, 4
        dec edx
        jne public_635ac7c
        mov eax, dword ptr ss : [esp+0x3C]
        fstp st(0)
        add ebp, 0x10
        dec eax
        mov dword ptr ss : [esp+0x3C], eax
        jne public_635ac42
        pop edi
        pop esi
        pop ebp
        public_635ad54 : nop
        fld dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x38]
        fsqrt 
        pop ebx
        fld st(0)
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_635ad6e
        fstp dword ptr ds : [ecx]
        jmp public_635ad70
        public_635ad6e : nop
        fstp st(0)
        public_635ad70 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        je public_635ad8f
        fld dword ptr ss : [esp+4]
        fsqrt 
        fcom dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_635ad8d
        fstp dword ptr ds : [ecx]
        add esp, 0x28
        ret 
        public_635ad8d : nop
        fstp st(0)
        public_635ad8f : nop
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x635ac10)
    }
}

#undef public_635ac42
#undef public_635ac7c
#undef public_635acd0
#undef public_635acd2
#undef public_635ad31
#undef public_635ad33
#undef public_635ad54
#undef public_635ad6e
#undef public_635ad70
#undef public_635ad8d
#undef public_635ad8f
