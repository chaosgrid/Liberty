#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6354120);
CLANG_FORWARD_PROC_SYMBOL(public_63548e0);
CLANG_FORWARD_PROC_SYMBOL(public_6354c10);

#define public_6354c32 _public_6354c32
#define public_6354c3a _public_6354c3a
#define public_6354c5c _public_6354c5c
#define public_6354c6f _public_6354c6f
#define public_6354ca3 _public_6354ca3
#define public_6354d0f _public_6354d0f
#define public_6354d27 _public_6354d27
#define public_6354d2c _public_6354d2c
#define public_6354d4e _public_6354d4e
#define public_6354d5c _public_6354d5c

PROC_DECLARE(0x6354c10, internal_6354c10, public_6354c10);
extern "C" NAKED register_t __cdecl internal_6354c10()
{
    __asm
    {
        sub esp, 0x14
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x36]
        mov dword ptr ss : [esp+0xC], ecx
        dec eax
        mov dword ptr ss : [esp+4], eax
        js public_6354d5c
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        push edi
        jmp public_6354c3a
        public_6354c32 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        public_6354c3a : nop
        mov ecx, dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [public_63a53d4]
        mov edi, dword ptr ds : [ecx+eax*4]
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        lea edx, ds:[eax-1]
        test edx, edx
        jl public_6354c6f
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[eax+edx*4]
        lea esi, ds:[edx+1]
        public_6354c5c : nop
        mov eax, dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x54]
        sub ecx, 4
        dec esi
        fmul dword ptr ds : [eax+0x44]
        fmul dword ptr ds : [eax+0x30]
        faddp 
        jne public_6354c5c
        public_6354c6f : nop
        fld dword ptr ds : [ebx]
        mov ebp, edx
        test ebp, ebp
        fld st(0)
        fmul st, st(1)
        mov dword ptr ss : [esp+0x10], 0
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fstp st(0)
        jl public_6354d4e
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_63a5610]
        fstp dword ptr ss : [esp+0x20]
        public_6354ca3 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ecx+ebp*4]
        fld dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [esi+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fst dword ptr ss : [esp+0x18]
        fstp st(2)
        fstp st(0)
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6354d0f
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6347df0
        fld st(0)
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x60]
        and eax, 0xFFFFFF01
        add esp, 4
        fsub dword ptr ss : [esp+0x28]
        or eax, 1
        mov dword ptr ds : [esi+0x60], eax
        fmul dword ptr ds : [esi+0x54]
        fmul dword ptr ds : [esi+0x44]
        fadd dword ptr ds : [esi+0x48]
        fstp dword ptr ds : [esi+0x48]
        fmul dword ptr ss : [esp+0x28]
        fld st(0)
        fmul dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        fmul dword ptr ds : [esi+0x3C]
        fstp dword ptr ds : [esi+0x3C]
        public_6354d0f : nop
        cmp byte ptr ds : [esi+0x34], 1
        push ebx
        mov ecx, esi
        je public_6354d27
        call public_6354120
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jmp public_6354d2c
        public_6354d27 : nop
        call public_63548e0
        public_6354d2c : nop
        dec ebp
        jns public_6354ca3
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6354d4e
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+0x24]
        fstp dword ptr ds : [edi+0x24]
        public_6354d4e : nop
        dec dword ptr ss : [esp+0x14]
        jns public_6354c32
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6354d5c : nop
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6354c10)
    }
}

#undef public_6354c32
#undef public_6354c3a
#undef public_6354c5c
#undef public_6354c6f
#undef public_6354ca3
#undef public_6354d0f
#undef public_6354d27
#undef public_6354d2c
#undef public_6354d4e
#undef public_6354d5c
